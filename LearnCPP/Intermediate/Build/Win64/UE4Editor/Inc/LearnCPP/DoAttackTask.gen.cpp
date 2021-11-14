// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/DoAttackTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoAttackTask() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_UDoAttackTask_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_UDoAttackTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UDoAttackTask::StaticRegisterNativesUDoAttackTask()
	{
	}
	UClass* Z_Construct_UClass_UDoAttackTask_NoRegister()
	{
		return UDoAttackTask::StaticClass();
	}
	struct Z_Construct_UClass_UDoAttackTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoAttackTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoAttackTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DoAttackTask.h" },
		{ "ModuleRelativePath", "DoAttackTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoAttackTask_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "DoAttackTask" },
		{ "ModuleRelativePath", "DoAttackTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoAttackTask_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoAttackTask, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UDoAttackTask_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoAttackTask_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoAttackTask_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "DoAttackTask" },
		{ "ModuleRelativePath", "DoAttackTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoAttackTask_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoAttackTask, Damage), METADATA_PARAMS(Z_Construct_UClass_UDoAttackTask_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoAttackTask_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoAttackTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoAttackTask_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoAttackTask_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoAttackTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoAttackTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoAttackTask_Statics::ClassParams = {
		&UDoAttackTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoAttackTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoAttackTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDoAttackTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoAttackTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoAttackTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoAttackTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoAttackTask, 363476368);
	template<> LEARNCPP_API UClass* StaticClass<UDoAttackTask>()
	{
		return UDoAttackTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoAttackTask(Z_Construct_UClass_UDoAttackTask, &UDoAttackTask::StaticClass, TEXT("/Script/LearnCPP"), TEXT("UDoAttackTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoAttackTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
