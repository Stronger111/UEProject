// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/ASTracerBot.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Character.h"

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

	MovementForce = 1000;
	bUseVelocityChange = false;
	RequiredDistanceToTarget = 100;
}

// Called when the game starts or when spawned
void AASTracerBot::BeginPlay()
{
	Super::BeginPlay();
	NextPathPoint = GetNextPathPoint();
}

FVector AASTracerBot::GetNextPathPoint()
{
	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(this,0);
	UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this,GetActorLocation(), PlayerPawn);
	if (NavPath->PathPoints.Num()>1)
	{
		return NavPath->PathPoints[1];
	}
	return GetActorLocation();
}

// Called every frame
void AASTracerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
//void AASTracerBot::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}

