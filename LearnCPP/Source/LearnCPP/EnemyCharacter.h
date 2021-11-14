// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacter.generated.h"
//#include  "Engine/TargetPoint.h"
class ATargetPoint;
class UBlackboardComponent;
class UPawnSensingComponent;

UCLASS()
class LEARNCPP_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()
	//ATargetPoint* CurrentPartolPoint;

	UBlackboardComponent* Blackboard;

	UPawnSensingComponent* PawnSensing;
	//void UpdatePatrolPoint();
	int Health;

	UFUNCTION()
	void OnSeePawn(APawn* InPawn);
	UFUNCTION()
	void OnHearNoise(APawn* Pawn,const FVector& Location,float Volume);
public:
	// Sets default values for this character's properties
	AEnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	/*UPROPERTY(EditInstanceOnly, Category = "PartolSetting")
	ATargetPoint* PartolPoint1;
	UPROPERTY(EditInstanceOnly, Category = "PartolSetting")
	ATargetPoint* PartolPoint2;*/

	UPROPERTY(EditDefaultsOnly, Category = "TargetSetting")
	USoundBase* ExplosionSound;

	UPROPERTY(EditDefaultsOnly, Category = "TargetSetting")
	UParticleSystem* ExplosionEffect;

	virtual void NotifyHit(class UPrimitiveComponent* MyComp,
		AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved,
		FVector HitLocation, FVector HitNormal, FVector NormalImpulse,
		const FHitResult& Hit) override;

	//virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	//// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
