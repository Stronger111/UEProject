// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSAIGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "FPSGameMode.h"
#include "Engine/World.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

// Sets default values
AFPSAIGuard::AFPSAIGuard()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->OnSeePawn.AddDynamic(this, &AFPSAIGuard::OnPawnSeen);
	PawnSensingComp->OnHearNoise.AddDynamic(this, &AFPSAIGuard::OnNoiseHear);
}

// Called when the game starts or when spawned
void AFPSAIGuard::BeginPlay()
{
	Super::BeginPlay();
	OriginalRotation = GetActorRotation();
	SetGuardState(EAIState::Idle);
	OnStateChanged(EAIState::Idle);
	MoveNextPoint();
}

void AFPSAIGuard::OnPawnSeen(APawn* Pawn)
{
	if (Pawn == nullptr)
		return;
	DrawDebugSphere(GetWorld(), Pawn->GetActorLocation(), 32, 12, FColor::Red, false, 10);

	AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	if (GM)
	{
		GM->CompleteMission(Pawn, false);
	}
	SetGuardState(EAIState::Alerted);
	AController* Controller = GetController();
	if (Controller)
		Controller->StopMovement();
}

void AFPSAIGuard::OnNoiseHear(APawn* Pawn, const FVector& Location, float Volume)
{
	if (GuardState == EAIState::Alerted)
		return;

	if (Pawn == nullptr)
		return;
	DrawDebugSphere(GetWorld(), Location, 32, 12, FColor::Green, false, 10);
	FVector direction = Location - GetActorLocation();
	direction.Z = 0;
	direction.Normalize();
	FRotator NewLookAt = FRotationMatrix::MakeFromX(direction).Rotator();
	SetActorRotation(NewLookAt);

	GetWorldTimerManager().ClearTimer(TimerHandle_ResetOrientation);
	GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation, this, &AFPSAIGuard::ResetOrientation, 3);
	//怀疑状态
	SetGuardState(EAIState::Suspicious);

	AController* Controller = GetController();
	if (Controller)
		Controller->StopMovement();
}

void AFPSAIGuard::ResetOrientation()
{
	SetActorRotation(OriginalRotation);
	SetGuardState(EAIState::Idle);

	UAIBlueprintHelperLibrary::SimpleMoveToActor(GetController(), CurrentPatrolPoint);
}

void AFPSAIGuard::SetGuardState(EAIState NewState)
{
	if (GuardState == NewState)
		return;
	GuardState = NewState;

	OnStateChanged(NewState);
}

void AFPSAIGuard::MoveNextPoint()
{
	if (CurrentPatrolPoint == nullptr || CurrentPatrolPoint == SecondPatrolPoint)
		CurrentPatrolPoint = FirstPatrolPoint;
	else
		CurrentPatrolPoint = SecondPatrolPoint;

	//移动
	UAIBlueprintHelperLibrary::SimpleMoveToActor(GetController(), CurrentPatrolPoint);
}

// Called every frame
void AFPSAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentPatrolPoint)
	{
		FVector direction = CurrentPatrolPoint->GetActorLocation() - GetActorLocation();
		direction.Z = 0;

		float distance = direction.Size();//向量长度
		if (distance < 50)
			MoveNextPoint();
	}
}

