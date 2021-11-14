// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearnCPPCharacter.h"
#include "LearnCPPProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/PawnNoiseEmitterComponent.h"
//#include "GameFramework/SaveGame.h"
#include "SaveSystem.h"

#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "MyUserWidget.h"
#include "RoundTransWidget.h"
#include "LoseMenuWidget.h"
#include "PauseWidget.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// ALearnCPPCharacter




ALearnCPPCharacter::ALearnCPPCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;
	Ammo = 30;
	Killed = 0;
	Target = 20;

	StaminaCost = 0.1f;
	IsSprinting = false;
	StaminaRecharge = 0.05f;
	//创建组件
	PawnNoiseEmitter = CreateDefaultSubobject <UPawnNoiseEmitterComponent>(TEXT("PawnNoiseEmitter"));
	CurrentEnemyNumber = 0;

	SlotName = "LearnCpp01";
}


void ALearnCPPCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
	//托管内存防止遗忘释放内存
	FloatCurve = NewObject<UCurveFloat>();
	FloatCurve->FloatCurve.AddKey(0.0f, 90.0f);
	FloatCurve->FloatCurve.AddKey(0.3f, 45.0f);
	//Callback 时间线
	FOnTimelineFloatStatic OnTimelineCallback;
	OnTimelineCallback.BindUFunction(this, TEXT("DoZoom"));
	ZoomTimeline.AddInterpFloat(FloatCurve, OnTimelineCallback);

	//游戏的加载和保存
	if (UGameplayStatics::DoesSaveGameExist(SlotName, 0))
	{
		SaveInstance = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	}
	else
	{
		//创建存档
		SaveInstance = Cast<USaveSystem>(UGameplayStatics::CreateSaveGameObject(USaveSystem::StaticClass()));
		SaveInstance->CurrentRound = 1;
		/*	if(SaveInstance)
			   Target = SaveInstance->CurrentRound * 2;*/
			   //保存到磁盘上
		if (SaveInstance)
			UGameplayStatics::SaveGameToSlot(SaveInstance, SlotName, 0);
	}
	if (SaveInstance)
	{
		Target = SaveInstance->CurrentRound * 2;
	}
	//Create UI
	if (WidgetClass)
	{
		//加载UI
		HUD = CreateWidget<UMyUserWidget>(GetWorld(), WidgetClass);
		if (HUD)
		{
			HUD->AddToViewport();
			if (HUD->HealthBar)
			{
				HUD->HealthBar->SetPercent(1.0f);
			}
			if (HUD->StaminaBar)
				HUD->StaminaBar->SetPercent(1.0f);
			if (HUD->KilledText)
				HUD->KilledText->SetText(FText::FromString(FString::FromInt(Killed))); //头文件暂时不加
			if (HUD->AmmoText)
			{
				HUD->AmmoText->SetText(FText::FromString(FString::FromInt(Ammo)));
			}
			if (HUD && HUD->TargetText)
			{
				HUD->TargetText->SetText(FText::FromString(FString::FromInt(Target)));
			}
		}
	}

}

int ALearnCPPCharacter::GetKilled()
{
	return Killed;
}

void ALearnCPPCharacter::SetKilled(int killed)
{
	Killed = killed;
	if (HUD && HUD->KilledText)
		HUD->KilledText->SetText(FText::FromString(FString::FromInt(killed))); //头文件暂时不加
}

void ALearnCPPCharacter::DoZoom(float FieldOfView)
{
	FirstPersonCameraComponent->SetFieldOfView(FieldOfView);
}

//////////////////////////////////////////////////////////////////////////
// Input

void ALearnCPPCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ALearnCPPCharacter::OnFire);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ALearnCPPCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &ALearnCPPCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ALearnCPPCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ALearnCPPCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ALearnCPPCharacter::LookUpAtRate);

	// Bind sprint events
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ALearnCPPCharacter::SprintBegin);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ALearnCPPCharacter::StopSprint);

	//Bind Zoom events
	PlayerInputComponent->BindAction("Zoom", IE_Pressed, this, &ALearnCPPCharacter::ZoomBegin);
	PlayerInputComponent->BindAction("Zoom", IE_Released, this, &ALearnCPPCharacter::ZoomEnd);

	PlayerInputComponent->BindAction("Pause", IE_Released, this, &ALearnCPPCharacter::Pause);
	//非发布
#if !UE_BUILD_SHIPPING
	PlayerInputComponent->BindAction("dummy_pause", IE_Released, this, &ALearnCPPCharacter::Pause);
#endif
}

void ALearnCPPCharacter::SetAmmo(int ammo)
{
	Ammo = ammo;
	if (HUD && HUD->AmmoText)
		HUD->AmmoText->SetText(FText::FromString(FString::FromInt(Ammo)));
}

int ALearnCPPCharacter::GetAmmo()
{
	return Ammo;
}

void ALearnCPPCharacter::SetTarget(int target)
{
	Target = target;
	if (HUD && HUD->TargetText)
	{
		HUD->TargetText->SetText(FText::FromString(FString::FromInt(Target)));
	}
}

int ALearnCPPCharacter::GetTarget()
{
	return Target;
}

void ALearnCPPCharacter::RestartCallback()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("FirstPersonExampleMap")));
	if (IsLose)
		LoseMenu->RemoveFromParent();
	else
		RoundTrans->RemoveFromParent();
}

void ALearnCPPCharacter::ExitCallback()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}

void ALearnCPPCharacter::EndGame()
{
	//暂停游戏
	UGameplayStatics::SetGamePaused(GetWorld(), true);
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = true;
	if (IsLose)
	{
		if (LoseMenuClass)
		{
			LoseMenu = CreateWidget<ULoseMenuWidget>(GetWorld(), LoseMenuClass);
			if (LoseMenu)
			{
				LoseMenu->AddToViewport();
				if (LoseMenu->RestartButton)
				{
					FScriptDelegate scriptDelegate;
					scriptDelegate.BindUFunction(this, FName(TEXT("RestartCallback")));
					LoseMenu->RestartButton->OnClicked.Add(scriptDelegate);
				}

				if (LoseMenu->ExitButton)
				{
					FScriptDelegate scriptDelegate;
					scriptDelegate.BindUFunction(this, FName(TEXT("ExitCallback")));
					LoseMenu->ExitButton->OnClicked.Add(scriptDelegate);
				}
			}
		}
	}
	else
	{
		if (RoundTransClass)
		{
			//加载UI
			RoundTrans = CreateWidget<URoundTransWidget>(GetWorld(), RoundTransClass);
			if (RoundTrans)
			{
				RoundTrans->AddToViewport();
				if (RoundTrans->StartButton)
				{
					FScriptDelegate scriptDelegate;
					scriptDelegate.BindUFunction(this, FName(TEXT("RestartCallback")));
					RoundTrans->StartButton->OnClicked.Add(scriptDelegate);
				}

				if (RoundTrans->ExitButton)
				{
					FScriptDelegate scriptDelegate;
					scriptDelegate.BindUFunction(this, FName(TEXT("ExitCallback")));
					RoundTrans->ExitButton->OnClicked.Add(scriptDelegate);
				}
				if (RoundTrans->RoundText)
				{
					if (SaveInstance)
					{
						++SaveInstance->CurrentRound;
						UGameplayStatics::SaveGameToSlot(SaveInstance, SlotName, 0);
					}
					RoundTrans->RoundText->SetText(FText::FromString(FString::FromInt(SaveInstance->CurrentRound)));
				}
			}
		}
	}
}

void ALearnCPPCharacter::OnFire()
{
	if (Ammo <= 0)
	{
		return;
	}
	//子弹数大于0
	SetAmmo(Ammo - 1);

	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			if (bUsingMotionControllers)
			{
				const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
				const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
				World->SpawnActor<ALearnCPPProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
			}
			else
			{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<ALearnCPPProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			}
		}
	}

	// try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation(), 0.2f); //设置下音量
	}

	//发出噪音
	MakeNoise(1, nullptr, GetActorLocation());

	// try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void ALearnCPPCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ALearnCPPCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void ALearnCPPCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void ALearnCPPCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void ALearnCPPCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ALearnCPPCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ALearnCPPCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ALearnCPPCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
/// <summary>
/// 消耗体力
/// </summary>
void ALearnCPPCharacter::SprintDrain()
{
	if (HUD && HUD->StaminaBar)
	{
		float newStamina = HUD->StaminaBar->Percent - StaminaCost;
		HUD->StaminaBar->SetPercent(newStamina > 0 ? newStamina : 0);
		//制造噪音
		MakeNoise(1, nullptr, GetActorLocation());
		if (newStamina <= 0)
		{
			StopSprint();
		}
	}
}

void ALearnCPPCharacter::SprintBegin()
{
	if (HUD && HUD->StaminaBar && HUD->StaminaBar->Percent > StaminaCost)
	{
		GetCharacterMovement()->MaxWalkSpeed = 2200;
		IsSprinting = true;
		GetWorldTimerManager().SetTimer(SprintTimerHandle, this, &ALearnCPPCharacter::SprintDrain, 0.5f, true);
	}
}

void ALearnCPPCharacter::StopSprint()
{
	GetCharacterMovement()->MaxWalkSpeed = 600;
	GetWorldTimerManager().ClearTimer(SprintTimerHandle);
	IsSprinting = false;
}

void ALearnCPPCharacter::ZoomBegin()
{
	//FirstPersonCameraComponent->FieldOfView = 45.0f;
	ZoomTimeline.Play();

}

void ALearnCPPCharacter::ZoomEnd()
{
	//FirstPersonCameraComponent->FieldOfView = 90.0f;
	ZoomTimeline.Reverse();
}

void ALearnCPPCharacter::Continue()
{
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = false;
	UGameplayStatics::SetGamePaused(GetWorld(), false);
	PauseMenu->RemoveFromParent();
}

void ALearnCPPCharacter::RestartFromPauseCallback()
{
	if (SaveInstance)
	{
		SaveInstance->CurrentRound = 1;
		UGameplayStatics::SaveGameToSlot(SaveInstance,SlotName,0);
	}

	UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("FirstPersonExampleMap")));
	PauseMenu->RemoveFromParent();
	
}

void ALearnCPPCharacter::Pause()
{
	UGameplayStatics::SetGamePaused(GetWorld(), true);
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = true;

	if (PauseClass)
	{
		PauseMenu = CreateWidget<UPauseWidget>(GetWorld(), PauseClass);
		if (PauseMenu)
		{
			PauseMenu->AddToViewport();

			if (PauseMenu->ContinueButton)
			{
				FScriptDelegate scriptDelegate;
				scriptDelegate.BindUFunction(this, FName(TEXT("Continue")));
				PauseMenu->ContinueButton->OnClicked.Add(scriptDelegate);
			}


			if (PauseMenu->RestartButton)
			{
				FScriptDelegate scriptDelegate;
				scriptDelegate.BindUFunction(this, FName(TEXT("RestartFromPauseCallback")));
				PauseMenu->RestartButton->OnClicked.Add(scriptDelegate);
			}

			if (PauseMenu->ExitButton)
			{
				FScriptDelegate scriptDelegate;
				scriptDelegate.BindUFunction(this, FName(TEXT("ExitCallback")));
				PauseMenu->ExitButton->OnClicked.Add(scriptDelegate);
			}
		}
	}
}

bool ALearnCPPCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ALearnCPPCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &ALearnCPPCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ALearnCPPCharacter::TouchUpdate);
		return true;
	}

	return false;
}

/* Chapter 4 */
void ALearnCPPCharacter::SprintTickCallback()
{
	if (HUD && HUD->StaminaBar)
	{
		float newStamina = HUD->StaminaBar->Percent + StaminaRecharge;
		//三元表达式
		HUD->StaminaBar->SetPercent(newStamina > 1 ? 1 : newStamina);
	}
}
/* Chapter 4 */

void ALearnCPPCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	ZoomTimeline.TickTimeline(DeltaSeconds);

	/* Chapter 4 */
	if (!IsSprinting)
	{
		FLatentActionInfo LatentInfo;
		LatentInfo.Linkage = 0;
		LatentInfo.CallbackTarget = this;
		LatentInfo.ExecutionFunction = "SprintTickCallback";
		LatentInfo.UUID = __LINE__;
		UKismetSystemLibrary::Delay(GetWorld(), 0.2f, LatentInfo);
	}
	/* Chapter 4 */
}

float ALearnCPPCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	if (HUD && HUD->HealthBar)
	{
		IsLose = HUD->HealthBar->Percent <= DamageAmount;
		float newHealth = IsLose ? 0 : HUD->HealthBar->Percent - DamageAmount;
		HUD->HealthBar->SetPercent(newHealth);
		if (IsLose)
		{
			EndGame();
		}
	}
	return HUD->HealthBar->Percent;
}
