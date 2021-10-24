// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNCPP_LearnCPPCharacter_generated_h
#error "LearnCPPCharacter.generated.h already included, missing '#pragma once' in LearnCPPCharacter.h"
#endif
#define LEARNCPP_LearnCPPCharacter_generated_h

#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_SPARSE_DATA
#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_RPC_WRAPPERS
#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALearnCPPCharacter(); \
	friend struct Z_Construct_UClass_ALearnCPPCharacter_Statics; \
public: \
	DECLARE_CLASS(ALearnCPPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearnCPP"), NO_API) \
	DECLARE_SERIALIZER(ALearnCPPCharacter)


#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesALearnCPPCharacter(); \
	friend struct Z_Construct_UClass_ALearnCPPCharacter_Statics; \
public: \
	DECLARE_CLASS(ALearnCPPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearnCPP"), NO_API) \
	DECLARE_SERIALIZER(ALearnCPPCharacter)


#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALearnCPPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALearnCPPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALearnCPPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALearnCPPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALearnCPPCharacter(ALearnCPPCharacter&&); \
	NO_API ALearnCPPCharacter(const ALearnCPPCharacter&); \
public:


#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALearnCPPCharacter(ALearnCPPCharacter&&); \
	NO_API ALearnCPPCharacter(const ALearnCPPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALearnCPPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALearnCPPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALearnCPPCharacter)


#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ALearnCPPCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ALearnCPPCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ALearnCPPCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ALearnCPPCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ALearnCPPCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ALearnCPPCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ALearnCPPCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ALearnCPPCharacter, L_MotionController); }


#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_17_PROLOG
#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_SPARSE_DATA \
	LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_RPC_WRAPPERS \
	LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_INCLASS \
	LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_SPARSE_DATA \
	LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_INCLASS_NO_PURE_DECLS \
	LearnCPP_Source_LearnCPP_LearnCPPCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNCPP_API UClass* StaticClass<class ALearnCPPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LearnCPP_Source_LearnCPP_LearnCPPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
