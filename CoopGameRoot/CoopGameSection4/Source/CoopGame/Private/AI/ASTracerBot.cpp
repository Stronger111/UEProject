// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/ASTracerBot.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AASTracerBot::AASTracerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCanEverAffectNavigation(false);
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void AASTracerBot::BeginPlay()
{
	Super::BeginPlay();
	
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

