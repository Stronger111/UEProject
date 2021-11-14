// Fill out your copyright notice in the Description page of Project Settings.


#include "DoAttackTask.h"
#include "BehaviorTree/BlackboardComponent.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>

EBTNodeResult::Type UDoAttackTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    AActor* Player = Cast<AActor>(
        OwnerComp.GetBlackboardComponent()->GetValueAsObject(Key.SelectedKeyName)
        );
    if (Player)
    {
        UGameplayStatics::ApplyDamage(Player,Damage,nullptr,nullptr,UDamageType::StaticClass());
    }
    return EBTNodeResult::Succeeded;
}
