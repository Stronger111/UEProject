// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ASTracerBot.generated.h"

UCLASS()
class COOPGAME_API AASTracerBot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AASTracerBot();


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USHealthComponent* HealthComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USphereComponent* SphereComp;

	class UMaterialInstanceDynamic* MatInst;

	FVector GetNextPathPoint();

	UPROPERTY(EditDefaultsOnly, Category = "TracerBot")
	float MovementForce;

	UPROPERTY(EditDefaultsOnly, Category = "TracerBot")
	bool bUseVelocityChange;

	UPROPERTY(EditDefaultsOnly, Category = "TracerBot")
	float RequiredDistanceToTarget;

	FVector NextPathPoint;

	//¥Ú±¨
	void SelfDestruct();

	UPROPERTY(EditDefaultsOnly, Category = "TracerBot")
	class UParticleSystem* ExplosionEffect;

	bool bExploded;

	UPROPERTY(EditDefaultsOnly, Category = "TracerBot")
	float ExplosionRadius;

	UPROPERTY(EditDefaultsOnly, Category = "TracerBot")
	float ExplosionDamage;

	FTimerHandle TimerHandle_SelfDamage;
	void DamageSelf();
	bool bStartSelfDestruction;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	//…˘“Ù
	UPROPERTY(EditDefaultsOnly, Category = "TracerBot")
	class USoundCue* SelfDestructSound;

	UPROPERTY(EditDefaultsOnly, Category = "TracerBot")
	class USoundCue* ExplodeSound;

	UFUNCTION()
	void OnCheckNearByBots();

	int32 PowerLevel;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void HandleTakeDamage(USHealthComponent* OwnerHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
