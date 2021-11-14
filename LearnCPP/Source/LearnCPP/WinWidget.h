// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WinWidget.generated.h"
class UButton;

/**
 * 
 */
UCLASS()
class LEARNCPP_API UWinWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY()
	UButton* RestartButton;
	UPROPERTY()
	UButton* ExitButton;
};
