// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/LearnCPPCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearnCPPCharacter() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_ALearnCPPCharacter_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_ALearnCPPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LEARNCPP_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_URoundTransWidget_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_ULoseMenuWidget_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_UPauseWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LEARNCPP_API UClass* Z_Construct_UClass_ALearnCPPProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALearnCPPCharacter::execDoZoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FieldOfView);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoZoom(Z_Param_FieldOfView);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearnCPPCharacter::execRestartFromPauseCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartFromPauseCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearnCPPCharacter::execContinue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Continue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearnCPPCharacter::execExitCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearnCPPCharacter::execRestartCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearnCPPCharacter::execSprintTickCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SprintTickCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALearnCPPCharacter::execSprintDrain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SprintDrain();
		P_NATIVE_END;
	}
	void ALearnCPPCharacter::StaticRegisterNativesALearnCPPCharacter()
	{
		UClass* Class = ALearnCPPCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Continue", &ALearnCPPCharacter::execContinue },
			{ "DoZoom", &ALearnCPPCharacter::execDoZoom },
			{ "ExitCallback", &ALearnCPPCharacter::execExitCallback },
			{ "RestartCallback", &ALearnCPPCharacter::execRestartCallback },
			{ "RestartFromPauseCallback", &ALearnCPPCharacter::execRestartFromPauseCallback },
			{ "SprintDrain", &ALearnCPPCharacter::execSprintDrain },
			{ "SprintTickCallback", &ALearnCPPCharacter::execSprintTickCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALearnCPPCharacter_Continue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearnCPPCharacter_Continue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearnCPPCharacter_Continue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearnCPPCharacter, nullptr, "Continue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALearnCPPCharacter_Continue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearnCPPCharacter_Continue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALearnCPPCharacter_Continue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALearnCPPCharacter_Continue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics
	{
		struct LearnCPPCharacter_eventDoZoom_Parms
		{
			float FieldOfView;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LearnCPPCharacter_eventDoZoom_Parms, FieldOfView), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics::NewProp_FieldOfView,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearnCPPCharacter, nullptr, "DoZoom", nullptr, nullptr, sizeof(LearnCPPCharacter_eventDoZoom_Parms), Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALearnCPPCharacter_DoZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALearnCPPCharacter_DoZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearnCPPCharacter_ExitCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearnCPPCharacter_ExitCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearnCPPCharacter_ExitCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearnCPPCharacter, nullptr, "ExitCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALearnCPPCharacter_ExitCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearnCPPCharacter_ExitCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALearnCPPCharacter_ExitCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALearnCPPCharacter_ExitCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearnCPPCharacter_RestartCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearnCPPCharacter_RestartCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Chapter 4*/" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Chapter 4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearnCPPCharacter_RestartCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearnCPPCharacter, nullptr, "RestartCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALearnCPPCharacter_RestartCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearnCPPCharacter_RestartCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALearnCPPCharacter_RestartCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALearnCPPCharacter_RestartCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearnCPPCharacter_RestartFromPauseCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearnCPPCharacter_RestartFromPauseCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearnCPPCharacter_RestartFromPauseCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearnCPPCharacter, nullptr, "RestartFromPauseCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALearnCPPCharacter_RestartFromPauseCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearnCPPCharacter_RestartFromPauseCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALearnCPPCharacter_RestartFromPauseCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALearnCPPCharacter_RestartFromPauseCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearnCPPCharacter_SprintDrain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearnCPPCharacter_SprintDrain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearnCPPCharacter_SprintDrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearnCPPCharacter, nullptr, "SprintDrain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALearnCPPCharacter_SprintDrain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearnCPPCharacter_SprintDrain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALearnCPPCharacter_SprintDrain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALearnCPPCharacter_SprintDrain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALearnCPPCharacter_SprintTickCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALearnCPPCharacter_SprintTickCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALearnCPPCharacter_SprintTickCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALearnCPPCharacter, nullptr, "SprintTickCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALearnCPPCharacter_SprintTickCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALearnCPPCharacter_SprintTickCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALearnCPPCharacter_SprintTickCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALearnCPPCharacter_SprintTickCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALearnCPPCharacter_NoRegister()
	{
		return ALearnCPPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALearnCPPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnNoiseEmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnNoiseEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundTransClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoundTransClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseMenuClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoseMenuClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PauseClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALearnCPPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALearnCPPCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALearnCPPCharacter_Continue, "Continue" }, // 3488939959
		{ &Z_Construct_UFunction_ALearnCPPCharacter_DoZoom, "DoZoom" }, // 4220430720
		{ &Z_Construct_UFunction_ALearnCPPCharacter_ExitCallback, "ExitCallback" }, // 2315858464
		{ &Z_Construct_UFunction_ALearnCPPCharacter_RestartCallback, "RestartCallback" }, // 4227708490
		{ &Z_Construct_UFunction_ALearnCPPCharacter_RestartFromPauseCallback, "RestartFromPauseCallback" }, // 1547273207
		{ &Z_Construct_UFunction_ALearnCPPCharacter_SprintDrain, "SprintDrain" }, // 2919104432
		{ &Z_Construct_UFunction_ALearnCPPCharacter_SprintTickCallback, "SprintTickCallback" }, // 1924122238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LearnCPPCharacter.h" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: 1st person view (seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FP_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_VR_Gun = { "VR_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_VR_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on VR gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_VR_MuzzleLocation = { "VR_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LearnCPPCharacter" },
		{ "Comment", "/** Motion controller (right hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_R_MotionController = { "R_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_R_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LearnCPPCharacter" },
		{ "Comment", "/** Motion controller (left hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_L_MotionController = { "L_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_L_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_PawnNoiseEmitter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LearnCPPCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_PawnNoiseEmitter = { "PawnNoiseEmitter", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, PawnNoiseEmitter), Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_PawnNoiseEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_PawnNoiseEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, WidgetClass), Z_Construct_UClass_UMyUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_RoundTransClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_RoundTransClass = { "RoundTransClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, RoundTransClass), Z_Construct_UClass_URoundTransWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_RoundTransClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_RoundTransClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_LoseMenuClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_LoseMenuClass = { "LoseMenuClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, LoseMenuClass), Z_Construct_UClass_ULoseMenuWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_LoseMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_LoseMenuClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_PauseClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_PauseClass = { "PauseClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, PauseClass), Z_Construct_UClass_UPauseWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_PauseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_PauseClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Projectile class to spawn */" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, ProjectileClass), Z_Construct_UClass_ALearnCPPProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALearnCPPCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Whether to use motion controller location for aiming. */" },
		{ "ModuleRelativePath", "LearnCPPCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((ALearnCPPCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALearnCPPCharacter), &Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALearnCPPCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_VR_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_R_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_L_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_PawnNoiseEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_RoundTransClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_LoseMenuClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_PauseClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearnCPPCharacter_Statics::NewProp_bUsingMotionControllers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALearnCPPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALearnCPPCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALearnCPPCharacter_Statics::ClassParams = {
		&ALearnCPPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALearnCPPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALearnCPPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALearnCPPCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALearnCPPCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALearnCPPCharacter, 1878484137);
	template<> LEARNCPP_API UClass* StaticClass<ALearnCPPCharacter>()
	{
		return ALearnCPPCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALearnCPPCharacter(Z_Construct_UClass_ALearnCPPCharacter, &ALearnCPPCharacter::StaticClass, TEXT("/Script/LearnCPP"), TEXT("ALearnCPPCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALearnCPPCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
