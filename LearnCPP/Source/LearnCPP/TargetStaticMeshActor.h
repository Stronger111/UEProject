// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TargetStaticMeshActor.generated.h"

/**
 * 
 */
UCLASS()
class LEARNCPP_API ATargetStaticMeshActor : public AStaticMeshActor
{
	GENERATED_BODY()
		
	UFUNCTION()
	void NotifyHitCallback();

	UFUNCTION()
    void TickCallback();

	FVector Direction;
	//是否被攻击过
	bool IsPrimed;
public:

	UPROPERTY(EditDefaultsOnly,Category="TargetSetting")
	UMaterialInterface* TargetRed;

	UPROPERTY(EditDefaultsOnly, Category = "TargetSetting")
	UMaterialInterface* Original;

	UPROPERTY(EditDefaultsOnly, Category = "TargetSetting")
	USoundBase* ExplosionSound;

	UPROPERTY(EditDefaultsOnly, Category = "TargetSetting")
    UParticleSystem* ExplosionEffect;

	ATargetStaticMeshActor();

	virtual void NotifyHit(class UPrimitiveComponent* MyComp, 
		AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved,
		FVector HitLocation, FVector HitNormal, FVector NormalImpulse,
		const FHitResult& Hit) override;

	virtual void Tick(float DeltaSeconds) override ;
	 
};
