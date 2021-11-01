// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetStaticMeshActor.h"
#include "LearnCPPProjectile.h"
#include "Kismet/KismetSystemLibrary.h"


void ATargetStaticMeshActor::NotifyHitCallback()
{
	UStaticMeshComponent* staticMesh = GetStaticMeshComponent();
	staticMesh->SetMaterial(0,Original);
}

ATargetStaticMeshActor::ATargetStaticMeshActor()
{
	
}

void ATargetStaticMeshActor::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);
	if (Other == nullptr)return;
	ALearnCPPProjectile* projectile = Cast<ALearnCPPProjectile>(Other);
	if (projectile!=nullptr)
	{
		UStaticMeshComponent* staticMesh=GetStaticMeshComponent();
		staticMesh->SetMaterial(0,TargetRed);
		FLatentActionInfo LatentInfo;
		LatentInfo.Linkage = 0;
		LatentInfo.CallbackTarget = this;
		LatentInfo.ExecutionFunction = "NotifyHitCallback";
		LatentInfo.UUID = __LINE__;
		UKismetSystemLibrary::Delay(GetWorld(),0.5f, LatentInfo);
	
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ALearnCPPProjectile"));
	}
	/*else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Not ALearnCPPProjectile"));
	}*/
	//打印日志
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1,15.0f,FColor::Yellow,TEXT("NotifyHit"));
}
