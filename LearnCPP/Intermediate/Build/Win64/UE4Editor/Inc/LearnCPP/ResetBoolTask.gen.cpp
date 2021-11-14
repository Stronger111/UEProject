// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/ResetBoolTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResetBoolTask() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_UResetBoolTask_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_UResetBoolTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UResetBoolTask::StaticRegisterNativesUResetBoolTask()
	{
	}
	UClass* Z_Construct_UClass_UResetBoolTask_NoRegister()
	{
		return UResetBoolTask::StaticClass();
	}
	struct Z_Construct_UClass_UResetBoolTask_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResetBoolTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetBoolTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ResetBoolTask.h" },
		{ "ModuleRelativePath", "ResetBoolTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "ResetBoolTask" },
		{ "ModuleRelativePath", "ResetBoolTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResetBoolTask, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ResetBoolTask" },
		{ "ModuleRelativePath", "ResetBoolTask.h" },
	};
#endif
	void Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((UResetBoolTask*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UResetBoolTask), &Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResetBoolTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResetBoolTask_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResetBoolTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResetBoolTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResetBoolTask_Statics::ClassParams = {
		&UResetBoolTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UResetBoolTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UResetBoolTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResetBoolTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResetBoolTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResetBoolTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResetBoolTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResetBoolTask, 2748652878);
	template<> LEARNCPP_API UClass* StaticClass<UResetBoolTask>()
	{
		return UResetBoolTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResetBoolTask(Z_Construct_UClass_UResetBoolTask, &UResetBoolTask::StaticClass, TEXT("/Script/LearnCPP"), TEXT("UResetBoolTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResetBoolTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
