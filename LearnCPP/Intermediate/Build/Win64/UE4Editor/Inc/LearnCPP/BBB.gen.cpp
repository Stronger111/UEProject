// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/BBB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBB() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_ABBB_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_ABBB();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
// End Cross Module References
	void ABBB::StaticRegisterNativesABBB()
	{
	}
	UClass* Z_Construct_UClass_ABBB_NoRegister()
	{
		return ABBB::StaticClass();
	}
	struct Z_Construct_UClass_ABBB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABBB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABBB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BBB.h" },
		{ "ModuleRelativePath", "BBB.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABBB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABBB_Statics::ClassParams = {
		&ABBB::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABBB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABBB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABBB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABBB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABBB, 2961752864);
	template<> LEARNCPP_API UClass* StaticClass<ABBB>()
	{
		return ABBB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABBB(Z_Construct_UClass_ABBB, &ABBB::StaticClass, TEXT("/Script/LearnCPP"), TEXT("ABBB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABBB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
