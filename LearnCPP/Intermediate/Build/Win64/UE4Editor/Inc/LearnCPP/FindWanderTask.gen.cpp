// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/FindWanderTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindWanderTask() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_UFindWanderTask_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_UFindWanderTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UFindWanderTask::StaticRegisterNativesUFindWanderTask()
	{
	}
	UClass* Z_Construct_UClass_UFindWanderTask_NoRegister()
	{
		return UFindWanderTask::StaticClass();
	}
	struct Z_Construct_UClass_UFindWanderTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindWanderTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindWanderTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FindWanderTask.h" },
		{ "ModuleRelativePath", "FindWanderTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindWanderTask_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "FindWanderTask" },
		{ "ModuleRelativePath", "FindWanderTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFindWanderTask_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindWanderTask, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UFindWanderTask_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindWanderTask_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindWanderTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindWanderTask_Statics::NewProp_Key,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindWanderTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindWanderTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindWanderTask_Statics::ClassParams = {
		&UFindWanderTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFindWanderTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindWanderTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindWanderTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindWanderTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindWanderTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindWanderTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindWanderTask, 2453509888);
	template<> LEARNCPP_API UClass* StaticClass<UFindWanderTask>()
	{
		return UFindWanderTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindWanderTask(Z_Construct_UClass_UFindWanderTask, &UFindWanderTask::StaticClass, TEXT("/Script/LearnCPP"), TEXT("UFindWanderTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindWanderTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
