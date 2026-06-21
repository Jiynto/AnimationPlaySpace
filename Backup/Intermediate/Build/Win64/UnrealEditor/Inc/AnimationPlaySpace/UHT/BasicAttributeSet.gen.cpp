// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBasicAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UBasicAttributeSet();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UBasicAttributeSet_NoRegister();
ANIMATIONPLAYSPACE_API UFunction* Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPostAttributeChangedDelegate *****************************************
struct Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics
{
	struct _Script_AnimationPlaySpace_eventPostAttributeChangedDelegate_Parms
	{
		FGameplayAttribute Attribute;
		float OldValue;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPostAttributeChangedDelegate constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FPostAttributeChangedDelegate constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FPostAttributeChangedDelegate Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AnimationPlaySpace_eventPostAttributeChangedDelegate_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 4237305057
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AnimationPlaySpace_eventPostAttributeChangedDelegate_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AnimationPlaySpace_eventPostAttributeChangedDelegate_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FPostAttributeChangedDelegate Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AnimationPlaySpace, nullptr, "PostAttributeChangedDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::_Script_AnimationPlaySpace_eventPostAttributeChangedDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::_Script_AnimationPlaySpace_eventPostAttributeChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnimationPlaySpace_PostAttributeChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPostAttributeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PostAttributeChangedDelegate, FGameplayAttribute const& Attribute, float OldValue, float NewValue)
{
	struct _Script_AnimationPlaySpace_eventPostAttributeChangedDelegate_Parms
	{
		FGameplayAttribute Attribute;
		float OldValue;
		float NewValue;
	};
	_Script_AnimationPlaySpace_eventPostAttributeChangedDelegate_Parms Parms;
	Parms.Attribute=Attribute;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	PostAttributeChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPostAttributeChangedDelegate *******************************************

// ********** Begin Class UBasicAttributeSet Function OnRep_Health *********************************
struct Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics
{
	struct BasicAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData oldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_oldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Health constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_oldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Health constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Health Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttributeSet_eventOnRep_Health_Parms, oldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_oldValue_MetaData), NewProp_oldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::NewProp_oldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Health Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasicAttributeSet, nullptr, "OnRep_Health", 	Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::BasicAttributeSet_eventOnRep_Health_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::BasicAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_oldValue);
	P_NATIVE_END;
}
// ********** End Class UBasicAttributeSet Function OnRep_Health ***********************************

// ********** Begin Class UBasicAttributeSet Function OnRep_HealthMax ******************************
struct Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics
{
	struct BasicAttributeSet_eventOnRep_HealthMax_Parms
	{
		FGameplayAttributeData oldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_oldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_HealthMax constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_oldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_HealthMax constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_HealthMax Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttributeSet_eventOnRep_HealthMax_Parms, oldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_oldValue_MetaData), NewProp_oldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::NewProp_oldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::PropPointers) < 2048);
// ********** End Function OnRep_HealthMax Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasicAttributeSet, nullptr, "OnRep_HealthMax", 	Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::BasicAttributeSet_eventOnRep_HealthMax_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::BasicAttributeSet_eventOnRep_HealthMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttributeSet::execOnRep_HealthMax)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HealthMax(Z_Param_Out_oldValue);
	P_NATIVE_END;
}
// ********** End Class UBasicAttributeSet Function OnRep_HealthMax ********************************

// ********** Begin Class UBasicAttributeSet Function OnRep_Stamina ********************************
struct Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics
{
	struct BasicAttributeSet_eventOnRep_Stamina_Parms
	{
		FGameplayAttributeData oldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_oldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Stamina constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_oldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Stamina constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Stamina Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttributeSet_eventOnRep_Stamina_Parms, oldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_oldValue_MetaData), NewProp_oldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::NewProp_oldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Stamina Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasicAttributeSet, nullptr, "OnRep_Stamina", 	Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::BasicAttributeSet_eventOnRep_Stamina_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::BasicAttributeSet_eventOnRep_Stamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttributeSet::execOnRep_Stamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Stamina(Z_Param_Out_oldValue);
	P_NATIVE_END;
}
// ********** End Class UBasicAttributeSet Function OnRep_Stamina **********************************

// ********** Begin Class UBasicAttributeSet Function OnRep_StaminaMax *****************************
struct Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics
{
	struct BasicAttributeSet_eventOnRep_StaminaMax_Parms
	{
		FGameplayAttributeData oldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_oldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_StaminaMax constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_oldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_StaminaMax constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_StaminaMax Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttributeSet_eventOnRep_StaminaMax_Parms, oldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_oldValue_MetaData), NewProp_oldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::NewProp_oldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::PropPointers) < 2048);
// ********** End Function OnRep_StaminaMax Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasicAttributeSet, nullptr, "OnRep_StaminaMax", 	Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::BasicAttributeSet_eventOnRep_StaminaMax_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::BasicAttributeSet_eventOnRep_StaminaMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttributeSet::execOnRep_StaminaMax)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StaminaMax(Z_Param_Out_oldValue);
	P_NATIVE_END;
}
// ********** End Class UBasicAttributeSet Function OnRep_StaminaMax *******************************

// ********** Begin Class UBasicAttributeSet *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBasicAttributeSet;
UClass* UBasicAttributeSet::GetPrivateStaticClass()
{
	using TClass = UBasicAttributeSet;
	if (!Z_Registration_Info_UClass_UBasicAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BasicAttributeSet"),
			Z_Registration_Info_UClass_UBasicAttributeSet.InnerSingleton,
			StaticRegisterNativesUBasicAttributeSet,
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
	return Z_Registration_Info_UClass_UBasicAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UBasicAttributeSet_NoRegister()
{
	return UBasicAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBasicAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health\n" },
#endif
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthMax_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stamina\n" },
#endif
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaMax_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBasicAttributeSet constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBasicAttributeSet constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_Health"), .Pointer = &UBasicAttributeSet::execOnRep_Health },
		{ .NameUTF8 = UTF8TEXT("OnRep_HealthMax"), .Pointer = &UBasicAttributeSet::execOnRep_HealthMax },
		{ .NameUTF8 = UTF8TEXT("OnRep_Stamina"), .Pointer = &UBasicAttributeSet::execOnRep_Stamina },
		{ .NameUTF8 = UTF8TEXT("OnRep_StaminaMax"), .Pointer = &UBasicAttributeSet::execOnRep_StaminaMax },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasicAttributeSet_OnRep_Health, "OnRep_Health" }, // 2013022779
		{ &Z_Construct_UFunction_UBasicAttributeSet_OnRep_HealthMax, "OnRep_HealthMax" }, // 1727059503
		{ &Z_Construct_UFunction_UBasicAttributeSet_OnRep_Stamina, "OnRep_Stamina" }, // 3384998291
		{ &Z_Construct_UFunction_UBasicAttributeSet_OnRep_StaminaMax, "OnRep_StaminaMax" }, // 3879240598
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBasicAttributeSet_Statics

// ********** Begin Class UBasicAttributeSet Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicAttributeSet_Statics::NewProp_HealthMax = { "HealthMax", "OnRep_HealthMax", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttributeSet, HealthMax), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthMax_MetaData), NewProp_HealthMax_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicAttributeSet_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicAttributeSet_Statics::NewProp_StaminaMax = { "StaminaMax", "OnRep_StaminaMax", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttributeSet, StaminaMax), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaMax_MetaData), NewProp_StaminaMax_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttributeSet_Statics::NewProp_HealthMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttributeSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttributeSet_Statics::NewProp_StaminaMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UBasicAttributeSet Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UBasicAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicAttributeSet_Statics::ClassParams = {
	&UBasicAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBasicAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasicAttributeSet_Statics::Class_MetaDataParams)
};
void UBasicAttributeSet::StaticRegisterNativesUBasicAttributeSet()
{
	UClass* Class = UBasicAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBasicAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBasicAttributeSet()
{
	if (!Z_Registration_Info_UClass_UBasicAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicAttributeSet.OuterSingleton, Z_Construct_UClass_UBasicAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasicAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UBasicAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Health(TEXT("Health"));
	static FName Name_HealthMax(TEXT("HealthMax"));
	static FName Name_Stamina(TEXT("Stamina"));
	static FName Name_StaminaMax(TEXT("StaminaMax"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_HealthMax == ClassReps[(int32)ENetFields_Private::HealthMax].Property->GetFName()
		&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
		&& Name_StaminaMax == ClassReps[(int32)ENetFields_Private::StaminaMax].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBasicAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBasicAttributeSet);
UBasicAttributeSet::~UBasicAttributeSet() {}
// ********** End Class UBasicAttributeSet *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_BasicAttributeSet_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasicAttributeSet, UBasicAttributeSet::StaticClass, TEXT("UBasicAttributeSet"), &Z_Registration_Info_UClass_UBasicAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicAttributeSet), 2037149700U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_BasicAttributeSet_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_BasicAttributeSet_h__Script_AnimationPlaySpace_1276886336{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_BasicAttributeSet_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_BasicAttributeSet_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
