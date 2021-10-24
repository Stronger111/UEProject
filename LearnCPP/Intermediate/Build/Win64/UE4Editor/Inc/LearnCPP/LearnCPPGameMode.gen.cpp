// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/LearnCPPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearnCPPGameMode() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_ALearnCPPGameMode_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_ALearnCPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
// End Cross Module References
	void ALearnCPPGameMode::StaticRegisterNativesALearnCPPGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALearnCPPGameMode_NoRegister()
	{
		return ALearnCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALearnCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALearnCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LearnCPPGameMode.h" },
		{ "ModuleRelativePath", "LearnCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALearnCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALearnCPPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALearnCPPGameMode_Statics::ClassParams = {
		&ALearnCPPGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALearnCPPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALearnCPPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALearnCPPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALearnCPPGameMode, 1538651940);
	template<> LEARNCPP_API UClass* StaticClass<ALearnCPPGameMode>()
	{
		return ALearnCPPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALearnCPPGameMode(Z_Construct_UClass_ALearnCPPGameMode, &ALearnCPPGameMode::StaticClass, TEXT("/Script/LearnCPP"), TEXT("ALearnCPPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALearnCPPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
