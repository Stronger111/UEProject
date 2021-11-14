// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonExampleMap.h"
#include "Kismet/GameplayStatics.h"
#include "LearnCPPCharacter.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Engine/TargetPoint.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"


void AFirstPersonExampleMap::Spawn()
{
	ALearnCPPCharacter* LearnCppCharacter = Cast<ALearnCPPCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (LearnCppCharacter)
	{
		if (LearnCppCharacter->CurrentEnemyNumber < 5)
		{
			//Éú³ÉµÐÈË
			UAIBlueprintHelperLibrary::SpawnAIFromClass(GetWorld(),PawnClass,BehaviorTree,SpawnPoint->GetActorLocation(), UKismetMathLibrary::MakeRotator(0, 0, UKismetMathLibrary::RandomFloat() * 360));
		}
	}

}

void AFirstPersonExampleMap::BeginPlay()
{
	GetWorldTimerManager().SetTimer(SpawnTimerHandle,this,&AFirstPersonExampleMap::Spawn,3,true);
}
