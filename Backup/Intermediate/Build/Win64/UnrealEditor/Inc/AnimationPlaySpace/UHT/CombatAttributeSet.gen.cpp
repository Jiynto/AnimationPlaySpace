// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/AttributeSets/CombatAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UCombatAttributeSet();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UCombatAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCombatAttributeSet Function OnRep_BaseDamage ****************************
struct Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics
{
	struct CombatAttributeSet_eventOnRep_BaseDamage_Parms
	{
		FGameplayAttributeData oldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/CombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_oldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_BaseDamage constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_oldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_BaseDamage constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_BaseDamage Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAttributeSet_eventOnRep_BaseDamage_Parms, oldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_oldValue_MetaData), NewProp_oldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::NewProp_oldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::PropPointers) < 2048);
// ********** End Function OnRep_BaseDamage Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAttributeSet, nullptr, "OnRep_BaseDamage", 	Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::CombatAttributeSet_eventOnRep_BaseDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::CombatAttributeSet_eventOnRep_BaseDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAttributeSet::execOnRep_BaseDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BaseDamage(Z_Param_Out_oldValue);
	P_NATIVE_END;
}
// ********** End Class UCombatAttributeSet Function OnRep_BaseDamage ******************************

// ********** Begin Class UCombatAttributeSet ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatAttributeSet;
UClass* UCombatAttributeSet::GetPrivateStaticClass()
{
	using TClass = UCombatAttributeSet;
	if (!Z_Registration_Info_UClass_UCombatAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatAttributeSet"),
			Z_Registration_Info_UClass_UCombatAttributeSet.InnerSingleton,
			StaticRegisterNativesUCombatAttributeSet,
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
	return Z_Registration_Info_UClass_UCombatAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatAttributeSet_NoRegister()
{
	return UCombatAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/AttributeSets/CombatAttributeSet.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/CombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health\n" },
#endif
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/CombatAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UCombatAttributeSet constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCombatAttributeSet constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_BaseDamage"), .Pointer = &UCombatAttributeSet::execOnRep_BaseDamage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAttributeSet_OnRep_BaseDamage, "OnRep_BaseDamage" }, // 1916398483
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatAttributeSet_Statics

// ********** Begin Class UCombatAttributeSet Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatAttributeSet_Statics::NewProp_BaseDamage = { "BaseDamage", "OnRep_BaseDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAttributeSet, BaseDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAttributeSet_Statics::NewProp_BaseDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UCombatAttributeSet Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UCombatAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAttributeSet_Statics::ClassParams = {
	&UCombatAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAttributeSet_Statics::Class_MetaDataParams)
};
void UCombatAttributeSet::StaticRegisterNativesUCombatAttributeSet()
{
	UClass* Class = UCombatAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCombatAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCombatAttributeSet()
{
	if (!Z_Registration_Info_UClass_UCombatAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAttributeSet.OuterSingleton, Z_Construct_UClass_UCombatAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UCombatAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_BaseDamage(TEXT("BaseDamage"));
	const bool bIsValid = true
		&& Name_BaseDamage == ClassReps[(int32)ENetFields_Private::BaseDamage].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCombatAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatAttributeSet);
UCombatAttributeSet::~UCombatAttributeSet() {}
// ********** End Class UCombatAttributeSet ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAttributeSet, UCombatAttributeSet::StaticClass, TEXT("UCombatAttributeSet"), &Z_Registration_Info_UClass_UCombatAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAttributeSet), 2927940098U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h__Script_AnimationPlaySpace_1386400629{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
