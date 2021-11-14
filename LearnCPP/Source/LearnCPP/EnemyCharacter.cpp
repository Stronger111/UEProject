// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/PawnSensingComponent.h"
//#include "Engine/TargetPoint.h"
#include "LearnCPPCharacter.h"
#include "LearnCPPProjectile.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComp"); //添加组件
	PawnSensing->SetPeripheralVisionAngle(60.0f);
	//听觉范围
	PawnSensing->HearingThreshold = 1400;
	PawnSensing->LOSHearingThreshold = 1600;
	Health = 3;
}

//void AEnemyCharacter::UpdatePatrolPoint()
//{
//	if (Blackboard)
//		Blackboard->SetValueAsObject("PatrolPoint", CurrentPartolPoint);
//}

void AEnemyCharacter::OnSeePawn(APawn* InPawn)
{
	if (Cast<ALearnCPPCharacter>(InPawn)) {
		if (!Blackboard)
			Blackboard = UAIBlueprintHelperLibrary::GetBlackboard(this);
		if (Blackboard)
			Blackboard->SetValueAsObject("Player", InPawn);
	}
}

void AEnemyCharacter::OnHearNoise(APawn* Pawn, const FVector& Location, float Volume)
{
	if(!Blackboard)
		Blackboard = UAIBlueprintHelperLibrary::GetBlackboard(this);
	if (Blackboard)
	{
		Blackboard->SetValueAsVector("PlayerLocation", Location);
		Blackboard->SetValueAsBool("IsHeardPlayer", true);
	}
		
}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (PawnSensing)
	{
		PawnSensing->OnSeePawn.AddDynamic(this,&AEnemyCharacter::OnSeePawn);
		PawnSensing->OnHearNoise.AddDynamic(this,&AEnemyCharacter::OnHearNoise);
	}
	Blackboard = UAIBlueprintHelperLibrary::GetBlackboard(this);
	/*CurrentPartolPoint = PartolPoint1;
	UpdatePatrolPoint();*/
}
void AEnemyCharacter::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);
	if (Other == nullptr)return;
	ALearnCPPProjectile* projectile = Cast<ALearnCPPProjectile>(Other);
	if (projectile != nullptr)
	{
		if (Health==1)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSound, HitLocation);
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, HitLocation);
			//获取到玩家对象
			ACharacter* character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
			if (character)
			{
				ALearnCPPCharacter* LearnCppCharacter = Cast<ALearnCPPCharacter>(character);
				if (LearnCppCharacter)
				{
					LearnCppCharacter->SetKilled(LearnCppCharacter->GetKilled() + 1);
					--LearnCppCharacter->CurrentEnemyNumber;
					if (LearnCppCharacter->CurrentEnemyNumber < 0)
						LearnCppCharacter->CurrentEnemyNumber = 0;
					//消灭足够的敌人
					if (LearnCppCharacter->GetKilled() >= LearnCppCharacter->GetTarget())
					{
						LearnCppCharacter->EndGame();
					}
				}
			}

			Destroy();
		}
		else
		{
			--Health;
		}
	}
}

//碰撞
//void AEnemyCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
//{
//	Super::NotifyActorBeginOverlap(OtherActor);
//	ATargetPoint* Point = Cast<ATargetPoint>(OtherActor);
//	if (Point)
//	{
//		if (Point==PartolPoint1)
//		{
//			CurrentPartolPoint = PartolPoint2;
//		}
//		else if (Point==PartolPoint2)
//		{
//			CurrentPartolPoint = PartolPoint1;
//		}
//		UpdatePatrolPoint();
//	}
//}

//// Called every frame
//void AEnemyCharacter::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//// Called to bind functionality to input
//void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}
//
