// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "FirstPersonExampleMap.generated.h"
class UBehaviorTree;
class ATargetPoint;
/**
 * 
 */
UCLASS()
class LEARNCPP_API AFirstPersonExampleMap : public ALevelScriptActor
{
	GENERATED_BODY()

	FTimerHandle SpawnTimerHandle;

	UPROPERTY(EditDefaultsOnly, Category = "ControllerSetting")
	UBehaviorTree* BehaviorTree;

	UPROPERTY(EditDefaultsOnly)
	ATargetPoint* SpawnPoint;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<APawn> PawnClass;

	UFUNCTION()
	void Spawn();

protected:
	virtual void BeginPlay() override;
};
