// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/GameplayEffectActors/APSGameplayEffectActor_AOE.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSGameplayEffectActor_AOE() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAPSGameplayEffectActor_AOE();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAPSGameplayEffectActor_AOE_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAPSGameplayEffectActor_AOE **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAPSGameplayEffectActor_AOE;
UClass* AAPSGameplayEffectActor_AOE::GetPrivateStaticClass()
{
	using TClass = AAPSGameplayEffectActor_AOE;
	if (!Z_Registration_Info_UClass_AAPSGameplayEffectActor_AOE.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSGameplayEffectActor_AOE"),
			Z_Registration_Info_UClass_AAPSGameplayEffectActor_AOE.InnerSingleton,
			StaticRegisterNativesAAPSGameplayEffectActor_AOE,
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
	return Z_Registration_Info_UClass_AAPSGameplayEffectActor_AOE.InnerSingleton;
}
UClass* Z_Construct_UClass_AAPSGameplayEffectActor_AOE_NoRegister()
{
	return AAPSGameplayEffectActor_AOE::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayAbilitySystem/GameplayEffectActors/APSGameplayEffectActor_AOE.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayEffectActors/APSGameplayEffectActor_AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectToApply_MetaData[] = {
		{ "Category", "APSGameplayEffectActor_AOE" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayEffectActors/APSGameplayEffectActor_AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "APSGameplayEffectActor_AOE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayEffectActors/APSGameplayEffectActor_AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectDataTag_MetaData[] = {
		{ "Category", "APSGameplayEffectActor_AOE" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayEffectActors/APSGameplayEffectActor_AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectMagnitude_MetaData[] = {
		{ "Category", "APSGameplayEffectActor_AOE" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayEffectActors/APSGameplayEffectActor_AOE.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAPSGameplayEffectActor_AOE constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectToApply;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectDataTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectMagnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAPSGameplayEffectActor_AOE constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPSGameplayEffectActor_AOE>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics

// ********** Begin Class AAPSGameplayEffectActor_AOE Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::NewProp_GameplayEffectToApply = { "GameplayEffectToApply", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPSGameplayEffectActor_AOE, GameplayEffectToApply), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectToApply_MetaData), NewProp_GameplayEffectToApply_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPSGameplayEffectActor_AOE, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::NewProp_EffectDataTag = { "EffectDataTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPSGameplayEffectActor_AOE, EffectDataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectDataTag_MetaData), NewProp_EffectDataTag_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::NewProp_EffectMagnitude = { "EffectMagnitude", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPSGameplayEffectActor_AOE, EffectMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectMagnitude_MetaData), NewProp_EffectMagnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::NewProp_GameplayEffectToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::NewProp_EffectDataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::NewProp_EffectMagnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::PropPointers) < 2048);
// ********** End Class AAPSGameplayEffectActor_AOE Property Definitions ***************************
UObject* (*const Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::ClassParams = {
	&AAPSGameplayEffectActor_AOE::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::Class_MetaDataParams), Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::Class_MetaDataParams)
};
void AAPSGameplayEffectActor_AOE::StaticRegisterNativesAAPSGameplayEffectActor_AOE()
{
}
UClass* Z_Construct_UClass_AAPSGameplayEffectActor_AOE()
{
	if (!Z_Registration_Info_UClass_AAPSGameplayEffectActor_AOE.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAPSGameplayEffectActor_AOE.OuterSingleton, Z_Construct_UClass_AAPSGameplayEffectActor_AOE_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAPSGameplayEffectActor_AOE.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAPSGameplayEffectActor_AOE);
AAPSGameplayEffectActor_AOE::~AAPSGameplayEffectActor_AOE() {}
// ********** End Class AAPSGameplayEffectActor_AOE ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_GameplayEffectActors_APSGameplayEffectActor_AOE_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAPSGameplayEffectActor_AOE, AAPSGameplayEffectActor_AOE::StaticClass, TEXT("AAPSGameplayEffectActor_AOE"), &Z_Registration_Info_UClass_AAPSGameplayEffectActor_AOE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPSGameplayEffectActor_AOE), 3341018914U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_GameplayEffectActors_APSGameplayEffectActor_AOE_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_GameplayEffectActors_APSGameplayEffectActor_AOE_h__Script_AnimationPlaySpace_1381275563{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_GameplayEffectActors_APSGameplayEffectActor_AOE_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_GameplayEffectActors_APSGameplayEffectActor_AOE_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
