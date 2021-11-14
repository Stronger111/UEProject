// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/AmmoPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoPickup() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_AAmmoPickup_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_AAmmoPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AAmmoPickup::StaticRegisterNativesAAmmoPickup()
	{
	}
	UClass* Z_Construct_UClass_AAmmoPickup_NoRegister()
	{
		return AAmmoPickup::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AmmoPickup.h" },
		{ "ModuleRelativePath", "AmmoPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSound_MetaData[] = {
		{ "Category", "PickupSetting" },
		{ "ModuleRelativePath", "AmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickup, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPickup_Statics::ClassParams = {
		&AAmmoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAmmoPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmmoPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmmoPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAmmoPickup, 489305289);
	template<> LEARNCPP_API UClass* StaticClass<AAmmoPickup>()
	{
		return AAmmoPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmmoPickup(Z_Construct_UClass_AAmmoPickup, &AAmmoPickup::StaticClass, TEXT("/Script/LearnCPP"), TEXT("AAmmoPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
