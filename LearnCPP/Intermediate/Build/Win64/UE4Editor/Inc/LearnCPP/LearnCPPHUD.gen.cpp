// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/LearnCPPHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearnCPPHUD() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_ALearnCPPHUD_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_ALearnCPPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
// End Cross Module References
	void ALearnCPPHUD::StaticRegisterNativesALearnCPPHUD()
	{
	}
	UClass* Z_Construct_UClass_ALearnCPPHUD_NoRegister()
	{
		return ALearnCPPHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALearnCPPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALearnCPPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnCPPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LearnCPPHUD.h" },
		{ "ModuleRelativePath", "LearnCPPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALearnCPPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALearnCPPHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALearnCPPHUD_Statics::ClassParams = {
		&ALearnCPPHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALearnCPPHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALearnCPPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALearnCPPHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALearnCPPHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALearnCPPHUD, 66542765);
	template<> LEARNCPP_API UClass* StaticClass<ALearnCPPHUD>()
	{
		return ALearnCPPHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALearnCPPHUD(Z_Construct_UClass_ALearnCPPHUD, &ALearnCPPHUD::StaticClass, TEXT("/Script/LearnCPP"), TEXT("ALearnCPPHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALearnCPPHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
