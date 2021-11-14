// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"
class UProgressBar;  //节约编译时间
class UTextBlock;
/**
 * 
 */
UCLASS()
class LEARNCPP_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UProgressBar *HealthBar;

	UPROPERTY()
	UProgressBar *StaminaBar;

	UPROPERTY()
	UTextBlock* KilledText;

	UPROPERTY()
	UTextBlock* AmmoText;

	UPROPERTY()
    UTextBlock* TargetText;
};
