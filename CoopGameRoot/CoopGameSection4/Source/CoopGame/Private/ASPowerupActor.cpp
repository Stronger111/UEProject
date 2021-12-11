// Fill out your copyright notice in the Description page of Project Settings.


#include "ASPowerupActor.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AASPowerupActor::AASPowerupActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	PowerupInterval = 0.0f;
	TotalNrOfTicks = 0;
	//道具激活状态
	bIsPowerupActive = false;

	SetReplicates(true);
}

void AASPowerupActor::OnTickPowerup()
{
	TickProcessed++;
	OnPowerupTicked();

	if (TickProcessed>= TotalNrOfTicks)
	{
		//失效
		OnExpired();
		bIsPowerupActive = false;

		OnRep_PowerupActive();

		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTicks);
	}
}

void AASPowerupActor::OnRep_PowerupActive()
{
	OnPowerupStateChanged(bIsPowerupActive);
}

// Called when the game starts or when spawned
//void AASPowerupActor::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}

// Called every frame
//void AASPowerupActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

void AASPowerupActor::AvtivatePowerup(AActor* ActiveFor)
{
	OnActivated(ActiveFor);

	bIsPowerupActive = true;
	OnRep_PowerupActive();

	if (PowerupInterval>0)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTicks,this,&AASPowerupActor::OnTickPowerup, PowerupInterval,true,0.0f);
	}
	else {
		OnTickPowerup();
	}
}

void AASPowerupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AASPowerupActor,bIsPowerupActive);
}

