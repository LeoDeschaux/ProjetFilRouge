// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AProjetFilRougeCharacter;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PROJETFILROUGE_TP_PickUpComponent_generated_h
#error "TP_PickUpComponent.generated.h already included, missing '#pragma once' in TP_PickUpComponent.h"
#endif
#define PROJETFILROUGE_TP_PickUpComponent_generated_h

#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_12_DELEGATE \
struct _Script_ProjetFilRouge_eventOnPickUp_Parms \
{ \
	AProjetFilRougeCharacter* PickUpCharacter; \
}; \
static inline void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AProjetFilRougeCharacter* PickUpCharacter) \
{ \
	_Script_ProjetFilRouge_eventOnPickUp_Parms Parms; \
	Parms.PickUpCharacter=PickUpCharacter; \
	OnPickUp.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_SPARSE_DATA
#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTP_PickUpComponent(); \
	friend struct Z_Construct_UClass_UTP_PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UTP_PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjetFilRouge"), NO_API) \
	DECLARE_SERIALIZER(UTP_PickUpComponent)


#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTP_PickUpComponent(); \
	friend struct Z_Construct_UClass_UTP_PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UTP_PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjetFilRouge"), NO_API) \
	DECLARE_SERIALIZER(UTP_PickUpComponent)


#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTP_PickUpComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTP_PickUpComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_PickUpComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_PickUpComponent(UTP_PickUpComponent&&); \
	NO_API UTP_PickUpComponent(const UTP_PickUpComponent&); \
public:


#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_PickUpComponent(UTP_PickUpComponent&&); \
	NO_API UTP_PickUpComponent(const UTP_PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTP_PickUpComponent)


#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_14_PROLOG
#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_RPC_WRAPPERS \
	FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_INCLASS \
	FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJETFILROUGE_API UClass* StaticClass<class UTP_PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjetFilRouge_Source_ProjetFilRouge_TP_PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
