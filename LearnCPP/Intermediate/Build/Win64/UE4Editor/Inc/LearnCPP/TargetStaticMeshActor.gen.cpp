// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/TargetStaticMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetStaticMeshActor() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_ATargetStaticMeshActor_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_ATargetStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATargetStaticMeshActor::execNotifyHitCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyHitCallback();
		P_NATIVE_END;
	}
	void ATargetStaticMeshActor::StaticRegisterNativesATargetStaticMeshActor()
	{
		UClass* Class = ATargetStaticMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyHitCallback", &ATargetStaticMeshActor::execNotifyHitCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATargetStaticMeshActor_NotifyHitCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetStaticMeshActor_NotifyHitCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TargetStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetStaticMeshActor_NotifyHitCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetStaticMeshActor, nullptr, "NotifyHitCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetStaticMeshActor_NotifyHitCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetStaticMeshActor_NotifyHitCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetStaticMeshActor_NotifyHitCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATargetStaticMeshActor_NotifyHitCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATargetStaticMeshActor_NoRegister()
	{
		return ATargetStaticMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ATargetStaticMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Original_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Original;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetStaticMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATargetStaticMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATargetStaticMeshActor_NotifyHitCallback, "NotifyHitCallback" }, // 1922888025
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetStaticMeshActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "TargetStaticMeshActor.h" },
		{ "ModuleRelativePath", "TargetStaticMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetStaticMeshActor_Statics::NewProp_TargetRed_MetaData[] = {
		{ "Category", "TargetSetting" },
		{ "ModuleRelativePath", "TargetStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetStaticMeshActor_Statics::NewProp_TargetRed = { "TargetRed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetStaticMeshActor, TargetRed), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetStaticMeshActor_Statics::NewProp_TargetRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetStaticMeshActor_Statics::NewProp_TargetRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetStaticMeshActor_Statics::NewProp_Original_MetaData[] = {
		{ "Category", "TargetSetting" },
		{ "ModuleRelativePath", "TargetStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetStaticMeshActor_Statics::NewProp_Original = { "Original", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetStaticMeshActor, Original), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetStaticMeshActor_Statics::NewProp_Original_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetStaticMeshActor_Statics::NewProp_Original_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetStaticMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetStaticMeshActor_Statics::NewProp_TargetRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetStaticMeshActor_Statics::NewProp_Original,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetStaticMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetStaticMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATargetStaticMeshActor_Statics::ClassParams = {
		&ATargetStaticMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATargetStaticMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATargetStaticMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetStaticMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetStaticMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetStaticMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATargetStaticMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATargetStaticMeshActor, 3134366878);
	template<> LEARNCPP_API UClass* StaticClass<ATargetStaticMeshActor>()
	{
		return ATargetStaticMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATargetStaticMeshActor(Z_Construct_UClass_ATargetStaticMeshActor, &ATargetStaticMeshActor::StaticClass, TEXT("/Script/LearnCPP"), TEXT("ATargetStaticMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetStaticMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
