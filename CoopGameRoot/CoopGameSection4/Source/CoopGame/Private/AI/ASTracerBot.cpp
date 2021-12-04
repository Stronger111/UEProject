// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/ASTracerBot.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Character.h"
#include "SHealthComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/SphereComponent.h"
#include "SCharacter.h"
#include "Sound/SoundCue.h"

// Sets default values
AASTracerBot::AASTracerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCanEverAffectNavigation(false);
	//设置模拟物理
	MeshComp->SetSimulatePhysics(true);
	RootComponent = MeshComp;

	HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this,&AASTracerBot::HandleTakeDamage);

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(200);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp);

	MovementForce = 1000;
	bUseVelocityChange = false;
	RequiredDistanceToTarget = 100;

	ExplosionRadius = 200;
	ExplosionDamage = 100;
}

void AASTracerBot::DamageSelf()
{
	UGameplayStatics::ApplyDamage(this,20, GetInstigatorController(),this,nullptr);
}

void AASTracerBot::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if (!bStartSelfDestruction)
	{
		ASCharacter* PlayerPawn = Cast<ASCharacter>(OtherActor);
		if (PlayerPawn)
		{
			if(GetLocalRole()==ROLE_Authority)
				GetWorldTimerManager().SetTimer(TimerHandle_SelfDamage, this, &AASTracerBot::DamageSelf, 0.5f, true, 0.0f);
			bStartSelfDestruction = true;
			UGameplayStatics::SpawnSoundAttached(SelfDestructSound,RootComponent);
		}
	}
}

// Called when the game starts or when spawned
void AASTracerBot::BeginPlay()
{
	Super::BeginPlay();
	if (GetLocalRole() == ROLE_Authority)
	{
		NextPathPoint = GetNextPathPoint();

		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle,this,&AASTracerBot::OnCheckNearByBots,1.0f,true);
	}
}

void AASTracerBot::OnCheckNearByBots()
{
	FCollisionShape CollisionShape;
	CollisionShape.SetSphere(600);
	TArray<FOverlapResult> OverlapResults;
	FCollisionObjectQueryParams QueryParams;

	QueryParams.AddObjectTypesToQuery(ECollisionChannel::ECC_PhysicsBody);
	QueryParams.AddObjectTypesToQuery(ECollisionChannel::ECC_Pawn);

	GetWorld()->OverlapMultiByObjectType(OverlapResults,GetActorLocation(),FQuat::Identity, QueryParams, CollisionShape);
	DrawDebugSphere(GetWorld(), GetActorLocation(), CollisionShape.GetSphereRadius(), 12, FColor::Blue, false,1.0f);

	int32 nrOfBots = 0;
	for (FOverlapResult Result : OverlapResults)
	{
		AASTracerBot* Bot = Cast<AASTracerBot>(Result.GetActor());
		if (Bot && Bot!=this)
		{
			nrOfBots++;
		}
	}

	const int32 MaxPowerLevel = 4;
	PowerLevel = FMath::Clamp(nrOfBots,0, MaxPowerLevel);
	if (MatInst==nullptr)
	{
		MatInst = MeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MeshComp->GetMaterial(0));
	}

	if (MatInst)
	{
		float Alpha = PowerLevel / (float)MaxPowerLevel;
		MatInst->SetScalarParameterValue("PowerLevelAlpha", Alpha);
	}
	DrawDebugString(GetWorld(), FVector(), FString::FromInt(PowerLevel), this, FColor::White, 1.0f, true  );
}

FVector AASTracerBot::GetNextPathPoint()
{
	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(this,0);

	if (PlayerPawn)
	{
		UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayerPawn);
		if (NavPath != nullptr && NavPath->PathPoints.Num() > 1)
		{
			return NavPath->PathPoints[1];
		}
	}
	
	return GetActorLocation();
}

void AASTracerBot::SelfDestruct()
{
	if (bExploded)
		return;
	bExploded = true;
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),ExplosionEffect,GetActorLocation());
	DrawDebugSphere(GetWorld(), GetActorLocation(), ExplosionRadius, 12, FColor::Green, false, 2.0f, 0.0f, 1.0f);
	UGameplayStatics::SpawnSoundAtLocation(this, ExplodeSound, GetActorLocation());

	if (GetLocalRole()==ROLE_Authority)
	{
		TArray<AActor*> IgnoredActors;
		IgnoredActors.Add(this);
		float Damage = ExplosionDamage + (ExplosionDamage*PowerLevel);

		UGameplayStatics::ApplyRadialDamage(this, Damage, GetActorLocation(), ExplosionRadius, nullptr, IgnoredActors, this, GetInstigatorController(), true);
		SetLifeSpan(2.0f);
	}

	//Destroy();
	MeshComp->SetVisibility(false,true);
	MeshComp->SetSimulatePhysics(false);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called every frame
void AASTracerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetLocalRole() == ROLE_Authority && !bExploded)
	{
		//计算到目标的距离
		float DistanceToTarget = (NextPathPoint - GetActorLocation()).Size();
		if (DistanceToTarget > RequiredDistanceToTarget)
		{
			FVector ForceDirection = NextPathPoint - GetActorLocation();
			ForceDirection.Normalize();
			ForceDirection *= MovementForce;
			MeshComp->ComponentVelocity.Size();
			MeshComp->AddImpulse(ForceDirection, NAME_None, bUseVelocityChange);

			DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + ForceDirection, 32, FColor::Red, false, 0.0f, 0, 1.0f);
		}
		else
		{
			NextPathPoint = GetNextPathPoint();
			DrawDebugString(GetWorld(), GetActorLocation(), "Target Reached", this, FColor::White, 1.0f, false, 1.0f);
		}

		DrawDebugSphere(GetWorld(), NextPathPoint, 20, 12, FColor::Yellow, false, 0.0f, 0.0f, 1.0f);
	}
	
}

void AASTracerBot::HandleTakeDamage(USHealthComponent* OwnerHealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (MatInst == nullptr)
		MatInst = MeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MeshComp->GetMaterial(0));

	if (MatInst)
	{
		MatInst->SetScalarParameterValue("LastTimeDamageTaken",GetWorld()->TimeSeconds);
	}

	if (Health <= 0)
		SelfDestruct();
	UE_LOG(LogTemp,Log,TEXT("Health %s of %s"),*FString::SanitizeFloat(Health),*GetName());
}

// Called to bind functionality to input
//void AASTracerBot::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}

