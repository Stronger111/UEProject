// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/RoundTransWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoundTransWidget() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_URoundTransWidget_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_URoundTransWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void URoundTransWidget::StaticRegisterNativesURoundTransWidget()
	{
	}
	UClass* Z_Construct_UClass_URoundTransWidget_NoRegister()
	{
		return URoundTransWidget::StaticClass();
	}
	struct Z_Construct_UClass_URoundTransWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoundText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoundTransWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoundTransWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RoundTransWidget.h" },
		{ "ModuleRelativePath", "RoundTransWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoundTransWidget_Statics::NewProp_StartButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RoundTransWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoundTransWidget_Statics::NewProp_StartButton = { "StartButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoundTransWidget, StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoundTransWidget_Statics::NewProp_StartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoundTransWidget_Statics::NewProp_StartButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoundTransWidget_Statics::NewProp_ExitButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RoundTransWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoundTransWidget_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoundTransWidget, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoundTransWidget_Statics::NewProp_ExitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoundTransWidget_Statics::NewProp_ExitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoundTransWidget_Statics::NewProp_RoundText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RoundTransWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoundTransWidget_Statics::NewProp_RoundText = { "RoundText", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoundTransWidget, RoundText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoundTransWidget_Statics::NewProp_RoundText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoundTransWidget_Statics::NewProp_RoundText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoundTransWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundTransWidget_Statics::NewProp_StartButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundTransWidget_Statics::NewProp_ExitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundTransWidget_Statics::NewProp_RoundText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoundTransWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoundTransWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoundTransWidget_Statics::ClassParams = {
		&URoundTransWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URoundTransWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URoundTransWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URoundTransWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoundTransWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoundTransWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoundTransWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoundTransWidget, 925144577);
	template<> LEARNCPP_API UClass* StaticClass<URoundTransWidget>()
	{
		return URoundTransWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoundTransWidget(Z_Construct_UClass_URoundTransWidget, &URoundTransWidget::StaticClass, TEXT("/Script/LearnCPP"), TEXT("URoundTransWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoundTransWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
