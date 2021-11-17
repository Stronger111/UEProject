// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSExtractionZone.h"
#include "Components/BoxComponent.h"

// Sets default values
AFPSExtractionZone::AFPSExtractionZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	OverlapComp = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));  
	OverlapComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//忽略所有碰撞事件
	OverlapComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	OverlapComp->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
	//大小
	OverlapComp->SetBoxExtent(FVector(200));

	OverlapComp->OnComponentBeginOverlap.AddDynamic(this,&AFPSExtractionZone::HandleOverlap);

	//OverlapComp->SetHiddenInGame(false);

	RootComponent = OverlapComp;
}

// Called when the game starts or when spawned
//void AFPSExtractionZone::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}

// Called every frame
//void AFPSExtractionZone::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

void AFPSExtractionZone::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp,Log,TEXT("Overlap!"));
}
