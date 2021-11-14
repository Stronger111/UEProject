// Fill out your copyright notice in the Description page of Project Settings.


#include "FindWanderTask.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"

EBTNodeResult::Type UFindWanderTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UNavigationSystemV1* NavigationSystem = UNavigationSystemV1::GetCurrent(GetWorld());
	FNavLocation WanderPoint;

	if (NavigationSystem->GetRandomReachablePointInRadius
	(
		OwnerComp.GetOwner()->GetActorLocation(), 10000, WanderPoint
	))
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(Key.SelectedKeyName, WanderPoint.Location);
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
