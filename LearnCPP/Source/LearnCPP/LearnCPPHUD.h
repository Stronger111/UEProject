// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LearnCPPHUD.generated.h"

UCLASS()
class ALearnCPPHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALearnCPPHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

