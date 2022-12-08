// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjetFilRouge/ProjetFilRougeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjetFilRougeGameMode() {}
// Cross Module References
	PROJETFILROUGE_API UClass* Z_Construct_UClass_AProjetFilRougeGameMode_NoRegister();
	PROJETFILROUGE_API UClass* Z_Construct_UClass_AProjetFilRougeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjetFilRouge();
// End Cross Module References
	void AProjetFilRougeGameMode::StaticRegisterNativesAProjetFilRougeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjetFilRougeGameMode);
	UClass* Z_Construct_UClass_AProjetFilRougeGameMode_NoRegister()
	{
		return AProjetFilRougeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjetFilRougeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjetFilRougeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjetFilRouge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjetFilRougeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjetFilRougeGameMode.h" },
		{ "ModuleRelativePath", "ProjetFilRougeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjetFilRougeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjetFilRougeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjetFilRougeGameMode_Statics::ClassParams = {
		&AProjetFilRougeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProjetFilRougeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjetFilRougeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjetFilRougeGameMode()
	{
		if (!Z_Registration_Info_UClass_AProjetFilRougeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjetFilRougeGameMode.OuterSingleton, Z_Construct_UClass_AProjetFilRougeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjetFilRougeGameMode.OuterSingleton;
	}
	template<> PROJETFILROUGE_API UClass* StaticClass<AProjetFilRougeGameMode>()
	{
		return AProjetFilRougeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjetFilRougeGameMode);
	struct Z_CompiledInDeferFile_FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjetFilRougeGameMode, AProjetFilRougeGameMode::StaticClass, TEXT("AProjetFilRougeGameMode"), &Z_Registration_Info_UClass_AProjetFilRougeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjetFilRougeGameMode), 1567763387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeGameMode_h_1590274147(TEXT("/Script/ProjetFilRouge"),
		Z_CompiledInDeferFile_FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjetFilRouge_Source_ProjetFilRouge_ProjetFilRougeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
