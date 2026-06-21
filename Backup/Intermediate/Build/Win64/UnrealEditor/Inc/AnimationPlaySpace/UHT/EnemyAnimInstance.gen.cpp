// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/EnemyAnimInstance.h"
#include "Animation/CustomAnimationTypes.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemyAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UEnemyAnimInstance();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
ANIMATIONPLAYSPACE_API UScriptStruct* Z_Construct_UScriptStruct_FLocomotionAnimationData();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnemyAnimInstance *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemyAnimInstance;
UClass* UEnemyAnimInstance::GetPrivateStaticClass()
{
	using TClass = UEnemyAnimInstance;
	if (!Z_Registration_Info_UClass_UEnemyAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnemyAnimInstance"),
			Z_Registration_Info_UClass_UEnemyAnimInstance.InnerSingleton,
			StaticRegisterNativesUEnemyAnimInstance,
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
	return Z_Registration_Info_UClass_UEnemyAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister()
{
	return UEnemyAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemyAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/EnemyAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacter_MetaData[] = {
		{ "Category", "EnemyAnimInstance" },
		{ "ModuleRelativePath", "Animation/EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacterMovement_MetaData[] = {
		{ "Category", "EnemyAnimInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Animation/EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAnimationData_MetaData[] = {
		{ "Category", "EnemyAnimInstance" },
		{ "ModuleRelativePath", "Animation/EnemyAnimInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEnemyAnimInstance constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacterMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionAnimationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEnemyAnimInstance constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEnemyAnimInstance_Statics

// ********** Begin Class UEnemyAnimInstance Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_EnemyCharacter = { "EnemyCharacter", nullptr, (EPropertyFlags)0x0124080000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, EnemyCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCharacter_MetaData), NewProp_EnemyCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_EnemyCharacterMovement = { "EnemyCharacterMovement", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, EnemyCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCharacterMovement_MetaData), NewProp_EnemyCharacterMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_LocomotionAnimationData = { "LocomotionAnimationData", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, LocomotionAnimationData), Z_Construct_UScriptStruct_FLocomotionAnimationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionAnimationData_MetaData), NewProp_LocomotionAnimationData_MetaData) }; // 4157412713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_EnemyCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_EnemyCharacterMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_LocomotionAnimationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers) < 2048);
// ********** End Class UEnemyAnimInstance Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams = {
	&UEnemyAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams)
};
void UEnemyAnimInstance::StaticRegisterNativesUEnemyAnimInstance()
{
}
UClass* Z_Construct_UClass_UEnemyAnimInstance()
{
	if (!Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton, Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton;
}
UEnemyAnimInstance::UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEnemyAnimInstance);
UEnemyAnimInstance::~UEnemyAnimInstance() {}
// ********** End Class UEnemyAnimInstance *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_EnemyAnimInstance_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAnimInstance, UEnemyAnimInstance::StaticClass, TEXT("UEnemyAnimInstance"), &Z_Registration_Info_UClass_UEnemyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAnimInstance), 2530019531U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_EnemyAnimInstance_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_EnemyAnimInstance_h__Script_AnimationPlaySpace_2394446591{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_EnemyAnimInstance_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_EnemyAnimInstance_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
