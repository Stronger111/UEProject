// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/MyUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_UMyUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UMyUserWidget::StaticRegisterNativesUMyUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UMyUserWidget_NoRegister()
	{
		return UMyUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaminaBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyUserWidget.h" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HealthBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HealthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_StaminaBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_StaminaBar = { "StaminaBar", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, StaminaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_StaminaBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_StaminaBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_KilledText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_KilledText = { "KilledText", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, KilledText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_KilledText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_KilledText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_AmmoText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_AmmoText = { "AmmoText", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, AmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_AmmoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_AmmoText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_TargetText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_TargetText = { "TargetText", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, TargetText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_TargetText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_TargetText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HealthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_StaminaBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_KilledText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_AmmoText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_TargetText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget_Statics::ClassParams = {
		&UMyUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyUserWidget, 199605844);
	template<> LEARNCPP_API UClass* StaticClass<UMyUserWidget>()
	{
		return UMyUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyUserWidget(Z_Construct_UClass_UMyUserWidget, &UMyUserWidget::StaticClass, TEXT("/Script/LearnCPP"), TEXT("UMyUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
