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
struct FHitResult;
#ifdef PROJETFILROUGE_ProjetFilRougeProjectile_generated_h
#error "ProjetFilRougeProjectile.generated.h already included, missing '#pragma once' in ProjetFilRougeProjectile.h"
#endif
#define PROJETFILROUGE_ProjetFilRougeProjectile_generated_h

#define FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_SPARSE_DATA
#define FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjetFilRougeProjectile(); \
	friend struct Z_Construct_UClass_AProjetFilRougeProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjetFilRougeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjetFilRouge"), NO_API) \
	DECLARE_SERIALIZER(AProjetFilRougeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjetFilRougeProjectile(); \
	friend struct Z_Construct_UClass_AProjetFilRougeProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjetFilRougeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjetFilRouge"), NO_API) \
	DECLARE_SERIALIZER(AProjetFilRougeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjetFilRougeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjetFilRougeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjetFilRougeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjetFilRougeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjetFilRougeProjectile(AProjetFilRougeProjectile&&); \
	NO_API AProjetFilRougeProjectile(const AProjetFilRougeProjectile&); \
public:


#define FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjetFilRougeProjectile(AProjetFilRougeProjectile&&); \
	NO_API AProjetFilRougeProjectile(const AProjetFilRougeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjetFilRougeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjetFilRougeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjetFilRougeProjectile)


#define FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_12_PROLOG
#define FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_SPARSE_DATA \
	FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_RPC_WRAPPERS \
	FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_INCLASS \
	FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_SPARSE_DATA \
	FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJETFILROUGE_API UClass* StaticClass<class AProjetFilRougeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
