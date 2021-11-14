// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetStaticMeshActor.h"
#include "LearnCPPProjectile.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "LearnCPPCharacter.h"

void ATargetStaticMeshActor::NotifyHitCallback()
{
	UStaticMeshComponent* staticMesh = GetStaticMeshComponent();
	if(staticMesh)
	   staticMesh->SetMaterial(0,Original);
}

void ATargetStaticMeshActor::TickCallback()
{
	Direction *= -1;
}

ATargetStaticMeshActor::ATargetStaticMeshActor()
{
	PrimaryActorTick.bCanEverTick = true;
	Direction = FVector(0,-10,0);
	IsPrimed = false;
}

void ATargetStaticMeshActor::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);
	if (Other == nullptr)return;
	ALearnCPPProjectile* projectile = Cast<ALearnCPPProjectile>(Other);
	if (projectile!=nullptr)
	{
		UStaticMeshComponent* staticMesh=GetStaticMeshComponent();
		if(staticMesh)
			staticMesh->SetMaterial(0, TargetRed);

		if (IsPrimed)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSound, HitLocation);
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, HitLocation);
			//获取到玩家对象
			ACharacter *character=UGameplayStatics::GetPlayerCharacter(GetWorld(),0);
			if (character)
			{
				ALearnCPPCharacter* LearnCppCharacter = Cast<ALearnCPPCharacter>(character);
				if(LearnCppCharacter)
				   LearnCppCharacter->SetKilled(LearnCppCharacter->GetKilled()+1);
				//消灭足够的敌人
				if (LearnCppCharacter->GetKilled() >= LearnCppCharacter->GetTarget())
				{
					LearnCppCharacter->EndGame();
				}
				else
				{

				}
			}

			Destroy();
		}
		else
		{
			IsPrimed = true;
			FLatentActionInfo LatentInfo;
			LatentInfo.Linkage = 0;
			LatentInfo.CallbackTarget = this;
			LatentInfo.ExecutionFunction = "NotifyHitCallback";
			LatentInfo.UUID = __LINE__;
			UKismetSystemLibrary::Delay(GetWorld(), 0.5f, LatentInfo);
		}
	
		/*if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ALearnCPPProjectile"));*/
	}
	/*else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Not ALearnCPPProjectile"));
	}*/

	//打印日志
	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1,15.0f,FColor::Yellow,TEXT("NotifyHit"));
}

void ATargetStaticMeshActor::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	//归一化向量
	AddActorLocalOffset(UKismetMathLibrary::Normal(Direction)* DeltaSeconds*200);

	FLatentActionInfo LatentInfo;
	LatentInfo.Linkage = 0;
	LatentInfo.CallbackTarget = this;
	LatentInfo.ExecutionFunction = "TickCallback";
	LatentInfo.UUID = __LINE__;
	UKismetSystemLibrary::Delay(GetWorld(), 3.0f, LatentInfo);
}
