// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Enemies/Controllers/EnemyAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemyAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AEnemyAIController();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyAIController *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyAIController;
UClass* AEnemyAIController::GetPrivateStaticClass()
{
	using TClass = AEnemyAIController;
	if (!Z_Registration_Info_UClass_AEnemyAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnemyAIController"),
			Z_Registration_Info_UClass_AEnemyAIController.InnerSingleton,
			StaticRegisterNativesAEnemyAIController,
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
	return Z_Registration_Info_UClass_AEnemyAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyAIController_NoRegister()
{
	return AEnemyAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemies/Controllers/EnemyAIController.h" },
		{ "ModuleRelativePath", "Enemies/Controllers/EnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_AttackTarget_MetaData[] = {
		{ "Category", "EnemyAIController" },
		{ "ModuleRelativePath", "Enemies/Controllers/EnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "EnemyAIController" },
		{ "ModuleRelativePath", "Enemies/Controllers/EnemyAIController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AEnemyAIController constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BlackboardKey_AttackTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AEnemyAIController constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AEnemyAIController_Statics

// ********** Begin Class AEnemyAIController Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BlackboardKey_AttackTarget = { "BlackboardKey_AttackTarget", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAIController, BlackboardKey_AttackTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardKey_AttackTarget_MetaData), NewProp_BlackboardKey_AttackTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BlackboardKey_AttackTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::PropPointers) < 2048);
// ********** End Class AEnemyAIController Property Definitions ************************************
UObject* (*const Z_Construct_UClass_AEnemyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAIController_Statics::ClassParams = {
	&AEnemyAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams)
};
void AEnemyAIController::StaticRegisterNativesAEnemyAIController()
{
}
UClass* Z_Construct_UClass_AEnemyAIController()
{
	if (!Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton, Z_Construct_UClass_AEnemyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton;
}
AEnemyAIController::AEnemyAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEnemyAIController);
AEnemyAIController::~AEnemyAIController() {}
// ********** End Class AEnemyAIController *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyAIController, AEnemyAIController::StaticClass, TEXT("AEnemyAIController"), &Z_Registration_Info_UClass_AEnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyAIController), 3064179950U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h__Script_AnimationPlaySpace_2793358057{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
