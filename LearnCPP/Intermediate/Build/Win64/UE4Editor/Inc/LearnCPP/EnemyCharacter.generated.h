// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
#ifdef LEARNCPP_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define LEARNCPP_EnemyCharacter_generated_h

#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_SPARSE_DATA
#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHearNoise); \
	DECLARE_FUNCTION(execOnSeePawn);


#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHearNoise); \
	DECLARE_FUNCTION(execOnSeePawn);


#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearnCPP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearnCPP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public:


#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter)


#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_PRIVATE_PROPERTY_OFFSET
#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_13_PROLOG
#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_SPARSE_DATA \
	LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_RPC_WRAPPERS \
	LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_INCLASS \
	LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_SPARSE_DATA \
	LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_INCLASS_NO_PURE_DECLS \
	LearnCPP_Source_LearnCPP_EnemyCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNCPP_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LearnCPP_Source_LearnCPP_EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
