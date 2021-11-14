// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnCPP/WinWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinWidget() {}
// Cross Module References
	LEARNCPP_API UClass* Z_Construct_UClass_UWinWidget_NoRegister();
	LEARNCPP_API UClass* Z_Construct_UClass_UWinWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LearnCPP();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UWinWidget::StaticRegisterNativesUWinWidget()
	{
	}
	UClass* Z_Construct_UClass_UWinWidget_NoRegister()
	{
		return UWinWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWinWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWinWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WinWidget.h" },
		{ "ModuleRelativePath", "WinWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinWidget_Statics::NewProp_RestartButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WinWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWinWidget_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinWidget, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWinWidget_Statics::NewProp_RestartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinWidget_Statics::NewProp_RestartButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinWidget_Statics::NewProp_ExitButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WinWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWinWidget_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinWidget, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWinWidget_Statics::NewProp_ExitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinWidget_Statics::NewProp_ExitButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWinWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinWidget_Statics::NewProp_RestartButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinWidget_Statics::NewProp_ExitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWinWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWinWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWinWidget_Statics::ClassParams = {
		&UWinWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWinWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWinWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWinWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWinWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWinWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWinWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWinWidget, 2265018214);
	template<> LEARNCPP_API UClass* StaticClass<UWinWidget>()
	{
		return UWinWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWinWidget(Z_Construct_UClass_UWinWidget, &UWinWidget::StaticClass, TEXT("/Script/LearnCPP"), TEXT("UWinWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWinWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
