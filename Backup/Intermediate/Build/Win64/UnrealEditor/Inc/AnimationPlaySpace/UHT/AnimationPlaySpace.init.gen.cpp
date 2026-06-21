// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationPlaySpace_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	ANIMATIONPLAYSPACE_API UFunction* Z_Construct_UDelegateFunction_AnimationPlaySpace_OnEnemyDied__DelegateSignature();
	ANIMATIONPLAYSPACE_API UFunction* Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AnimationPlaySpace;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace()
	{
		if (!Z_Registration_Info_UPackage__Script_AnimationPlaySpace.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_AnimationPlaySpace_OnEnemyDied__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/AnimationPlaySpace",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x24CA54FE,
			0xC2B36CD4,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AnimationPlaySpace.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_AnimationPlaySpace.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AnimationPlaySpace(Z_Construct_UPackage__Script_AnimationPlaySpace, TEXT("/Script/AnimationPlaySpace"), Z_Registration_Info_UPackage__Script_AnimationPlaySpace, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x24CA54FE, 0xC2B36CD4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
