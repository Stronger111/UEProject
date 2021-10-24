// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef LEARNCPP_LearnCPPProjectile_generated_h
#error "LearnCPPProjectile.generated.h already included, missing '#pragma once' in LearnCPPProjectile.h"
#endif
#define LEARNCPP_LearnCPPProjectile_generated_h

#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_SPARSE_DATA
#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALearnCPPProjectile(); \
	friend struct Z_Construct_UClass_ALearnCPPProjectile_Statics; \
public: \
	DECLARE_CLASS(ALearnCPPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearnCPP"), NO_API) \
	DECLARE_SERIALIZER(ALearnCPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALearnCPPProjectile(); \
	friend struct Z_Construct_UClass_ALearnCPPProjectile_Statics; \
public: \
	DECLARE_CLASS(ALearnCPPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearnCPP"), NO_API) \
	DECLARE_SERIALIZER(ALearnCPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALearnCPPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALearnCPPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALearnCPPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALearnCPPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALearnCPPProjectile(ALearnCPPProjectile&&); \
	NO_API ALearnCPPProjectile(const ALearnCPPProjectile&); \
public:


#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALearnCPPProjectile(ALearnCPPProjectile&&); \
	NO_API ALearnCPPProjectile(const ALearnCPPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALearnCPPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALearnCPPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALearnCPPProjectile)


#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ALearnCPPProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALearnCPPProjectile, ProjectileMovement); }


#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_12_PROLOG
#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_SPARSE_DATA \
	LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_RPC_WRAPPERS \
	LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_INCLASS \
	LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_SPARSE_DATA \
	LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_INCLASS_NO_PURE_DECLS \
	LearnCPP_Source_LearnCPP_LearnCPPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNCPP_API UClass* StaticClass<class ALearnCPPProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LearnCPP_Source_LearnCPP_LearnCPPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
