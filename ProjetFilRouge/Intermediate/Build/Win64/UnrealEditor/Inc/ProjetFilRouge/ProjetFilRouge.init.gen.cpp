// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjetFilRouge_init() {}
	PROJETFILROUGE_API UFunction* Z_Construct_UDelegateFunction_ProjetFilRouge_OnPickUp__DelegateSignature();
	PROJETFILROUGE_API UFunction* Z_Construct_UDelegateFunction_ProjetFilRouge_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjetFilRouge;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjetFilRouge()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjetFilRouge.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjetFilRouge_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjetFilRouge_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjetFilRouge",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x97745C4D,
				0x5D9DC174,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjetFilRouge.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjetFilRouge.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjetFilRouge(Z_Construct_UPackage__Script_ProjetFilRouge, TEXT("/Script/ProjetFilRouge"), Z_Registration_Info_UPackage__Script_ProjetFilRouge, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x97745C4D, 0x5D9DC174));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
