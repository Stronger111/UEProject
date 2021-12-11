// Fill out your copyright notice in the Description page of Project Settings.


#include "ASPickupActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "ASPowerupActor.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AASPickupActor::AASPickupActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(75);
	RootComponent = SphereComp;

	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	DecalComp->SetRelativeRotation(FRotator(90,0,0));
	DecalComp->DecalSize = FVector(64,75,75);
	DecalComp->SetupAttachment(RootComponent);

	CooldownDuration = 10.0f;

	SetReplicates(true);
}

void AASPickupActor::Respawn()
{
	if (PowerUpClass==nullptr)
	{
		UE_LOG(LogTemp,Warning,TEXT("PowerUpClass is null in %s"),*GetName());
		return;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	PowerUpInstance = GetWorld()->SpawnActor<AASPowerupActor>(PowerUpClass,GetTransform(),SpawnParams);
}

// Called when the game starts or when spawned
void AASPickupActor::BeginPlay()
{
	Super::BeginPlay();

	if (GetLocalRole()==ROLE_Authority)
	{
		Respawn();
	}
}

void AASPickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (GetLocalRole() == ROLE_Authority&&PowerUpInstance)
	{
		PowerUpInstance->AvtivatePowerup(OtherActor);
		PowerUpInstance = nullptr;

		GetWorldTimerManager().SetTimer(TimerHandle_RespawnTimer,this,&AASPickupActor::Respawn,CooldownDuration);
	}
}

// Called every frame
//void AASPickupActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

