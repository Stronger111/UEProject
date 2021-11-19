// Fill out your copyright notice in the Description page of Project Settings.


#include "LaunchPad.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"

// Sets default values
ALaunchPad::ALaunchPad()
{
	Pad = CreateDefaultSubobject<UBoxComponent>(TEXT("Pad"));
	Pad->OnComponentBeginOverlap.AddDynamic(this,&ALaunchPad::OnOverlap);
	Pad->SetBoxExtent(FVector(200,200,20));
	Pad->SetHiddenInGame(false);
	RootComponent = Pad;

	LaunchAngle = 35;
	LaunchForce = 1500;
}

void ALaunchPad::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FRotator LaunchRotator = GetActorRotation();
	LaunchRotator.Pitch += LaunchAngle;
	FVector LaunchDirection = LaunchRotator.Vector()*LaunchForce;

	ACharacter* OtherCharacter = Cast<ACharacter>(OtherActor);
	if (OtherCharacter)
	{
		OtherCharacter->LaunchCharacter(LaunchDirection,true,true);
	}
	else if (OtherComp && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulse(LaunchDirection,NAME_None,true);
	}
}
