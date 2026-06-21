// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/APSGameplayAbility_Dodge.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSGameplayAbility_Dodge() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSGameplayAbility_Dodge();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSGameplayAbility_Dodge_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAPSGameplayAbility_Dodge Function GetMaxSpeed ***************************
struct Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics
{
	struct APSGameplayAbility_Dodge_eventGetMaxSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/APSGameplayAbility_Dodge.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaxSpeed constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaxSpeed constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaxSpeed Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APSGameplayAbility_Dodge_eventGetMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::PropPointers) < 2048);
// ********** End Function GetMaxSpeed Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAPSGameplayAbility_Dodge, nullptr, "GetMaxSpeed", 	Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::APSGameplayAbility_Dodge_eventGetMaxSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::APSGameplayAbility_Dodge_eventGetMaxSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAPSGameplayAbility_Dodge::execGetMaxSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxSpeed();
	P_NATIVE_END;
}
// ********** End Class UAPSGameplayAbility_Dodge Function GetMaxSpeed *****************************

// ********** Begin Class UAPSGameplayAbility_Dodge Function OnDodgeFinished ***********************
struct Z_Construct_UFunction_UAPSGameplayAbility_Dodge_OnDodgeFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/APSGameplayAbility_Dodge.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDodgeFinished constinit property declarations ***********************
// ********** End Function OnDodgeFinished constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPSGameplayAbility_Dodge_OnDodgeFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAPSGameplayAbility_Dodge, nullptr, "OnDodgeFinished", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSGameplayAbility_Dodge_OnDodgeFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAPSGameplayAbility_Dodge_OnDodgeFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAPSGameplayAbility_Dodge_OnDodgeFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAPSGameplayAbility_Dodge_OnDodgeFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAPSGameplayAbility_Dodge::execOnDodgeFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDodgeFinished();
	P_NATIVE_END;
}
// ********** End Class UAPSGameplayAbility_Dodge Function OnDodgeFinished *************************

// ********** Begin Class UAPSGameplayAbility_Dodge ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAPSGameplayAbility_Dodge;
UClass* UAPSGameplayAbility_Dodge::GetPrivateStaticClass()
{
	using TClass = UAPSGameplayAbility_Dodge;
	if (!Z_Registration_Info_UClass_UAPSGameplayAbility_Dodge.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSGameplayAbility_Dodge"),
			Z_Registration_Info_UClass_UAPSGameplayAbility_Dodge.InnerSingleton,
			StaticRegisterNativesUAPSGameplayAbility_Dodge,
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
	return Z_Registration_Info_UClass_UAPSGameplayAbility_Dodge.InnerSingleton;
}
UClass* Z_Construct_UClass_UAPSGameplayAbility_Dodge_NoRegister()
{
	return UAPSGameplayAbility_Dodge::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/APSGameplayAbility_Dodge.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/APSGameplayAbility_Dodge.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gameplayCueTag_MetaData[] = {
		{ "Category", "APSGameplayAbility_Dodge" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/APSGameplayAbility_Dodge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentMoveTask_MetaData[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/APSGameplayAbility_Dodge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defaultRunSpeed_MetaData[] = {
		{ "Category", "APSGameplayAbility_Dodge" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/APSGameplayAbility_Dodge.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAPSGameplayAbility_Dodge constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_gameplayCueTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_currentMoveTask;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_defaultRunSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAPSGameplayAbility_Dodge constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetMaxSpeed"), .Pointer = &UAPSGameplayAbility_Dodge::execGetMaxSpeed },
		{ .NameUTF8 = UTF8TEXT("OnDodgeFinished"), .Pointer = &UAPSGameplayAbility_Dodge::execOnDodgeFinished },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAPSGameplayAbility_Dodge_GetMaxSpeed, "GetMaxSpeed" }, // 2528430313
		{ &Z_Construct_UFunction_UAPSGameplayAbility_Dodge_OnDodgeFinished, "OnDodgeFinished" }, // 2971474521
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSGameplayAbility_Dodge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics

// ********** Begin Class UAPSGameplayAbility_Dodge Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::NewProp_gameplayCueTag = { "gameplayCueTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAPSGameplayAbility_Dodge, gameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gameplayCueTag_MetaData), NewProp_gameplayCueTag_MetaData) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::NewProp_currentMoveTask = { "currentMoveTask", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAPSGameplayAbility_Dodge, currentMoveTask), Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentMoveTask_MetaData), NewProp_currentMoveTask_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::NewProp_defaultRunSpeed = { "defaultRunSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAPSGameplayAbility_Dodge, defaultRunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defaultRunSpeed_MetaData), NewProp_defaultRunSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::NewProp_gameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::NewProp_currentMoveTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::NewProp_defaultRunSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::PropPointers) < 2048);
// ********** End Class UAPSGameplayAbility_Dodge Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::ClassParams = {
	&UAPSGameplayAbility_Dodge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::Class_MetaDataParams), Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::Class_MetaDataParams)
};
void UAPSGameplayAbility_Dodge::StaticRegisterNativesUAPSGameplayAbility_Dodge()
{
	UClass* Class = UAPSGameplayAbility_Dodge::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAPSGameplayAbility_Dodge()
{
	if (!Z_Registration_Info_UClass_UAPSGameplayAbility_Dodge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAPSGameplayAbility_Dodge.OuterSingleton, Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAPSGameplayAbility_Dodge.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAPSGameplayAbility_Dodge);
UAPSGameplayAbility_Dodge::~UAPSGameplayAbility_Dodge() {}
// ********** End Class UAPSGameplayAbility_Dodge **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAPSGameplayAbility_Dodge, UAPSGameplayAbility_Dodge::StaticClass, TEXT("UAPSGameplayAbility_Dodge"), &Z_Registration_Info_UClass_UAPSGameplayAbility_Dodge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAPSGameplayAbility_Dodge), 1492358771U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h__Script_AnimationPlaySpace_1650960769{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
