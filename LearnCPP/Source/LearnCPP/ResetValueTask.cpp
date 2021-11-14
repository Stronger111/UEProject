// Fill out your copyright notice in the Description page of Project Settings.


#include "ResetValueTask.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UResetValueTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    OwnerComp.GetBlackboardComponent()->SetValueAsObject(Key.SelectedKeyName,Value);
    return EBTNodeResult::Succeeded;
}
