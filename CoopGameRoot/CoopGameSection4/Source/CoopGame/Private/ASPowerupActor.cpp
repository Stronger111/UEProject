// Fill out your copyright notice in the Description page of Project Settings.


#include "ASPowerupActor.h"
#include "TimerManager.h"

// Sets default values
AASPowerupActor::AASPowerupActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	PowerupInterval = 0.0f;
	TotalNrOfTicks = 0;
}

void AASPowerupActor::OnTickPowerup()
{
	TickProcessed++;
	OnPowerupTicked();

	if (TickProcessed>= TotalNrOfTicks)
	{
		OnExpired();

		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTicks);
	}
}

// Called when the game starts or when spawned
void AASPowerupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
//void AASPowerupActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

void AASPowerupActor::AvtivatePowerup()
{
	if (PowerupInterval>0)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTicks,this,&AASPowerupActor::OnTickPowerup, PowerupInterval,true,0.0f);
	}
	else {
		OnTickPowerup();
	}
}

