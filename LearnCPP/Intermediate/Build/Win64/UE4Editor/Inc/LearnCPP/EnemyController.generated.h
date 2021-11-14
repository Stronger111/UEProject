// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNCPP_EnemyController_generated_h
#error "EnemyController.generated.h already included, missing '#pragma once' in EnemyController.h"
#endif
#define LEARNCPP_EnemyController_generated_h

#define LearnCPP_Source_LearnCPP_EnemyController_h_15_SPARSE_DATA
#define LearnCPP_Source_LearnCPP_EnemyController_h_15_RPC_WRAPPERS
#define LearnCPP_Source_LearnCPP_EnemyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define LearnCPP_Source_LearnCPP_EnemyController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearnCPP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define LearnCPP_Source_LearnCPP_EnemyController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearnCPP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define LearnCPP_Source_LearnCPP_EnemyController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public:


#define LearnCPP_Source_LearnCPP_EnemyController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyController)


#define LearnCPP_Source_LearnCPP_EnemyController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BehaviorTree() { return STRUCT_OFFSET(AEnemyController, BehaviorTree); }


#define LearnCPP_Source_LearnCPP_EnemyController_h_12_PROLOG
#define LearnCPP_Source_LearnCPP_EnemyController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnCPP_Source_LearnCPP_EnemyController_h_15_PRIVATE_PROPERTY_OFFSET \
	LearnCPP_Source_LearnCPP_EnemyController_h_15_SPARSE_DATA \
	LearnCPP_Source_LearnCPP_EnemyController_h_15_RPC_WRAPPERS \
	LearnCPP_Source_LearnCPP_EnemyController_h_15_INCLASS \
	LearnCPP_Source_LearnCPP_EnemyController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LearnCPP_Source_LearnCPP_EnemyController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnCPP_Source_LearnCPP_EnemyController_h_15_PRIVATE_PROPERTY_OFFSET \
	LearnCPP_Source_LearnCPP_EnemyController_h_15_SPARSE_DATA \
	LearnCPP_Source_LearnCPP_EnemyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LearnCPP_Source_LearnCPP_EnemyController_h_15_INCLASS_NO_PURE_DECLS \
	LearnCPP_Source_LearnCPP_EnemyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNCPP_API UClass* StaticClass<class AEnemyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LearnCPP_Source_LearnCPP_EnemyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
