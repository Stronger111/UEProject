// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RoundTransWidget.generated.h"
class UButton;
class UTextBlock;
/**
 * 
 */
UCLASS()
class LEARNCPP_API URoundTransWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UButton* StartButton;

	UPROPERTY()
	UButton* ExitButton;

	UPROPERTY()
	UTextBlock* RoundText;
};
