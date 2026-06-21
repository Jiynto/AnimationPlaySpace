// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "APSPlayerState.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSPlayerState() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAPSPlayerState();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAPSPlayerState_NoRegister();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSPlayerVM_NoRegister();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UBasicAttributeSet_NoRegister();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UCombatAttributeSet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAPSPlayerState Function PostBasicAttributeChange ************************
struct Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics
{
	struct APSPlayerState_eventPostBasicAttributeChange_Parms
	{
		FGameplayAttribute Attribute;
		float OldValue;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "APSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostBasicAttributeChange constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostBasicAttributeChange constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostBasicAttributeChange Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APSPlayerState_eventPostBasicAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 4237305057
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APSPlayerState_eventPostBasicAttributeChange_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APSPlayerState_eventPostBasicAttributeChange_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::PropPointers) < 2048);
// ********** End Function PostBasicAttributeChange Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAPSPlayerState, nullptr, "PostBasicAttributeChange", 	Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::APSPlayerState_eventPostBasicAttributeChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::APSPlayerState_eventPostBasicAttributeChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAPSPlayerState::execPostBasicAttributeChange)
{
	P_GET_STRUCT_REF(FGameplayAttribute,Z_Param_Out_Attribute);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OldValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostBasicAttributeChange(Z_Param_Out_Attribute,Z_Param_OldValue,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class AAPSPlayerState Function PostBasicAttributeChange **************************

// ********** Begin Class AAPSPlayerState Function UpdatePlayerVitalsViewModel *********************
struct Z_Construct_UFunction_AAPSPlayerState_UpdatePlayerVitalsViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "APSPlayerState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdatePlayerVitalsViewModel constinit property declarations ***********
// ********** End Function UpdatePlayerVitalsViewModel constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAPSPlayerState_UpdatePlayerVitalsViewModel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAPSPlayerState, nullptr, "UpdatePlayerVitalsViewModel", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAPSPlayerState_UpdatePlayerVitalsViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAPSPlayerState_UpdatePlayerVitalsViewModel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAPSPlayerState_UpdatePlayerVitalsViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAPSPlayerState_UpdatePlayerVitalsViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAPSPlayerState::execUpdatePlayerVitalsViewModel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlayerVitalsViewModel();
	P_NATIVE_END;
}
// ********** End Class AAPSPlayerState Function UpdatePlayerVitalsViewModel ***********************

// ********** Begin Class AAPSPlayerState **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAPSPlayerState;
UClass* AAPSPlayerState::GetPrivateStaticClass()
{
	using TClass = AAPSPlayerState;
	if (!Z_Registration_Info_UClass_AAPSPlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSPlayerState"),
			Z_Registration_Info_UClass_AAPSPlayerState.InnerSingleton,
			StaticRegisterNativesAAPSPlayerState,
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
	return Z_Registration_Info_UClass_AAPSPlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_AAPSPlayerState_NoRegister()
{
	return AAPSPlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAPSPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "APSPlayerState.h" },
		{ "ModuleRelativePath", "APSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicAttributeSet_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "APSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatAttributeSet_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "APSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerVM_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "APSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AscReplicationMode_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "APSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "AbilitySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability System Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "APSPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System Component" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AAPSPlayerState constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerVM;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AscReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AscReplicationMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAPSPlayerState constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PostBasicAttributeChange"), .Pointer = &AAPSPlayerState::execPostBasicAttributeChange },
		{ .NameUTF8 = UTF8TEXT("UpdatePlayerVitalsViewModel"), .Pointer = &AAPSPlayerState::execUpdatePlayerVitalsViewModel },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAPSPlayerState_PostBasicAttributeChange, "PostBasicAttributeChange" }, // 1582271572
		{ &Z_Construct_UFunction_AAPSPlayerState_UpdatePlayerVitalsViewModel, "UpdatePlayerVitalsViewModel" }, // 174282967
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPSPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAPSPlayerState_Statics

// ********** Begin Class AAPSPlayerState Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_BasicAttributeSet = { "BasicAttributeSet", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPSPlayerState, BasicAttributeSet), Z_Construct_UClass_UBasicAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicAttributeSet_MetaData), NewProp_BasicAttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_CombatAttributeSet = { "CombatAttributeSet", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPSPlayerState, CombatAttributeSet), Z_Construct_UClass_UCombatAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatAttributeSet_MetaData), NewProp_CombatAttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_PlayerVM = { "PlayerVM", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPSPlayerState, PlayerVM), Z_Construct_UClass_UAPSPlayerVM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerVM_MetaData), NewProp_PlayerVM_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_AscReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_AscReplicationMode = { "AscReplicationMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPSPlayerState, AscReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AscReplicationMode_MetaData), NewProp_AscReplicationMode_MetaData) }; // 3513395660
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPSPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAPSPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_BasicAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_CombatAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_PlayerVM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_AscReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_AscReplicationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPSPlayerState_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPSPlayerState_Statics::PropPointers) < 2048);
// ********** End Class AAPSPlayerState Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_AAPSPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPSPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAPSPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAPSPlayerState, IAbilitySystemInterface), false },  // 2722098046
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPSPlayerState_Statics::ClassParams = {
	&AAPSPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAPSPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAPSPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPSPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AAPSPlayerState_Statics::Class_MetaDataParams)
};
void AAPSPlayerState::StaticRegisterNativesAAPSPlayerState()
{
	UClass* Class = AAPSPlayerState::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AAPSPlayerState_Statics::Funcs));
}
UClass* Z_Construct_UClass_AAPSPlayerState()
{
	if (!Z_Registration_Info_UClass_AAPSPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAPSPlayerState.OuterSingleton, Z_Construct_UClass_AAPSPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAPSPlayerState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAPSPlayerState);
AAPSPlayerState::~AAPSPlayerState() {}
// ********** End Class AAPSPlayerState ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAPSPlayerState, AAPSPlayerState::StaticClass, TEXT("AAPSPlayerState"), &Z_Registration_Info_UClass_AAPSPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPSPlayerState), 1514332989U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h__Script_AnimationPlaySpace_1131972859{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
