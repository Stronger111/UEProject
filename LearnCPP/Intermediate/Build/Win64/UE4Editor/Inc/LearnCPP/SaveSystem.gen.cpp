// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/SaveSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSystem() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_USaveSystem_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_USaveSystem();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
// End Cross Module References
	void USaveSystem::StaticRegisterNativesUSaveSystem()
	{
	}
	UClass* Z_Construct_UClass_USaveSystem_NoRegister()
	{
		return USaveSystem::StaticClass();
	}
	struct Z_Construct_UClass_USaveSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentRound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveSystem.h" },
		{ "ModuleRelativePath", "SaveSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSystem_Statics::NewProp_CurrentRound_MetaData[] = {
		{ "ModuleRelativePath", "SaveSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USaveSystem_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveSystem, CurrentRound), METADATA_PARAMS(Z_Construct_UClass_USaveSystem_Statics::NewProp_CurrentRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::NewProp_CurrentRound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystem_Statics::NewProp_CurrentRound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveSystem_Statics::ClassParams = {
		&USaveSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveSystem, 3702169907);
	template<> LEARNCPP_API UClass* StaticClass<USaveSystem>()
	{
		return USaveSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveSystem(Z_Construct_UClass_USaveSystem, &USaveSystem::StaticClass, TEXT("/Script/LearnCPP"), TEXT("USaveSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
