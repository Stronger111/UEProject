// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoPickup.h"
#include "LearnCPPCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAmmoPickup::AAmmoPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Ammo = 15;

}

// Called when the game starts or when spawned
void AAmmoPickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAmmoPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAmmoPickup::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	ALearnCPPCharacter* Character = Cast<ALearnCPPCharacter>(OtherActor);
	//是否转换成功
	if (Character)
	{
		//加上弹夹上的弹药数
		Character->SetAmmo(Character->GetAmmo()+Ammo);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), PickupSound, GetActorLocation());
		Destroy();
	}

}

