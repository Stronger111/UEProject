// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/FirstPersonExampleMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonExampleMap() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_AFirstPersonExampleMap_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_AFirstPersonExampleMap();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirstPersonExampleMap::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn();
		P_NATIVE_END;
	}
	void AFirstPersonExampleMap::StaticRegisterNativesAFirstPersonExampleMap()
	{
		UClass* Class = AFirstPersonExampleMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &AFirstPersonExampleMap::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirstPersonExampleMap_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonExampleMap_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPersonExampleMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonExampleMap_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonExampleMap, nullptr, "Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonExampleMap_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonExampleMap_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonExampleMap_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonExampleMap_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirstPersonExampleMap_NoRegister()
	{
		return AFirstPersonExampleMap::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonExampleMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonExampleMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstPersonExampleMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonExampleMap_Spawn, "Spawn" }, // 2336219388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonExampleMap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstPersonExampleMap.h" },
		{ "ModuleRelativePath", "FirstPersonExampleMap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "ControllerSetting" },
		{ "ModuleRelativePath", "FirstPersonExampleMap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonExampleMap, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "FirstPersonExampleMap" },
		{ "ModuleRelativePath", "FirstPersonExampleMap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonExampleMap, SpawnPoint), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_PawnClass_MetaData[] = {
		{ "Category", "FirstPersonExampleMap" },
		{ "ModuleRelativePath", "FirstPersonExampleMap.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonExampleMap, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_PawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_PawnClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonExampleMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_SpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonExampleMap_Statics::NewProp_PawnClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonExampleMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonExampleMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonExampleMap_Statics::ClassParams = {
		&AFirstPersonExampleMap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstPersonExampleMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonExampleMap_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonExampleMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonExampleMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonExampleMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonExampleMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstPersonExampleMap, 4059792632);
	template<> LEARNCPP_API UClass* StaticClass<AFirstPersonExampleMap>()
	{
		return AFirstPersonExampleMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonExampleMap(Z_Construct_UClass_AFirstPersonExampleMap, &AFirstPersonExampleMap::StaticClass, TEXT("/Script/LearnCPP"), TEXT("AFirstPersonExampleMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonExampleMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
