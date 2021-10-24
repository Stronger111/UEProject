// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetStaticMeshActor.h"

ATargetStaticMeshActor::ATargetStaticMeshActor()
{
	
}

void ATargetStaticMeshActor::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);
	if (Other == nullptr)return;
	//´òÓ¡ÈÕÖ¾
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1,15.0f,FColor::Yellow,TEXT("NotifyHit"));
}
