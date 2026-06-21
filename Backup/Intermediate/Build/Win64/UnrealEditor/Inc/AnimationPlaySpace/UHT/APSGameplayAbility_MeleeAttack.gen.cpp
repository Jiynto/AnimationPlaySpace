// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/APSGameplayAbility_MeleeAttack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSGameplayAbility_MeleeAttack() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAPSGameplayAbility_MeleeAttack ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAPSGameplayAbility_MeleeAttack;
UClass* UAPSGameplayAbility_MeleeAttack::GetPrivateStaticClass()
{
	using TClass = UAPSGameplayAbility_MeleeAttack;
	if (!Z_Registration_Info_UClass_UAPSGameplayAbility_MeleeAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSGameplayAbility_MeleeAttack"),
			Z_Registration_Info_UClass_UAPSGameplayAbility_MeleeAttack.InnerSingleton,
			StaticRegisterNativesUAPSGameplayAbility_MeleeAttack,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAPSGameplayAbility_MeleeAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack_NoRegister()
{
	return UAPSGameplayAbility_MeleeAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/APSGameplayAbility_MeleeAttack.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/APSGameplayAbility_MeleeAttack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAPSGameplayAbility_MeleeAttack constinit property declarations **********
// ********** End Class UAPSGameplayAbility_MeleeAttack constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSGameplayAbility_MeleeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack_Statics
UObject* (*const Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack_Statics::ClassParams = {
	&UAPSGameplayAbility_MeleeAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack_Statics::Class_MetaDataParams)
};
void UAPSGameplayAbility_MeleeAttack::StaticRegisterNativesUAPSGameplayAbility_MeleeAttack()
{
}
UClass* Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack()
{
	if (!Z_Registration_Info_UClass_UAPSGameplayAbility_MeleeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAPSGameplayAbility_MeleeAttack.OuterSingleton, Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAPSGameplayAbility_MeleeAttack.OuterSingleton;
}
UAPSGameplayAbility_MeleeAttack::UAPSGameplayAbility_MeleeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAPSGameplayAbility_MeleeAttack);
UAPSGameplayAbility_MeleeAttack::~UAPSGameplayAbility_MeleeAttack() {}
// ********** End Class UAPSGameplayAbility_MeleeAttack ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_MeleeAttack_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAPSGameplayAbility_MeleeAttack, UAPSGameplayAbility_MeleeAttack::StaticClass, TEXT("UAPSGameplayAbility_MeleeAttack"), &Z_Registration_Info_UClass_UAPSGameplayAbility_MeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAPSGameplayAbility_MeleeAttack), 3982452019U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_MeleeAttack_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_MeleeAttack_h__Script_AnimationPlaySpace_778143272{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_MeleeAttack_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_MeleeAttack_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
