// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerAnimInstance.h"
#include "Animation/CustomAnimationTypes.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_ULocomotionAnimationSet_NoRegister();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
ANIMATIONPLAYSPACE_API UEnum* Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState();
ANIMATIONPLAYSPACE_API UScriptStruct* Z_Construct_UScriptStruct_FLocomotionAnimationData();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerAnimInstance Function SetLocomotionState **************************
struct Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics
{
	struct PlayerAnimInstance_eventSetLocomotionState_Parms
	{
		ELocomotionState InLocomotionState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLocomotionState constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InLocomotionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InLocomotionState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLocomotionState constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLocomotionState Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::NewProp_InLocomotionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::NewProp_InLocomotionState = { "InLocomotionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAnimInstance_eventSetLocomotionState_Parms, InLocomotionState), Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 1171703072
void Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerAnimInstance_eventSetLocomotionState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerAnimInstance_eventSetLocomotionState_Parms), &Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::NewProp_InLocomotionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::NewProp_InLocomotionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::PropPointers) < 2048);
// ********** End Function SetLocomotionState Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "SetLocomotionState", 	Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::PlayerAnimInstance_eventSetLocomotionState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::PlayerAnimInstance_eventSetLocomotionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAnimInstance::execSetLocomotionState)
{
	P_GET_ENUM(ELocomotionState,Z_Param_InLocomotionState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetLocomotionState(ELocomotionState(Z_Param_InLocomotionState));
	P_NATIVE_END;
}
// ********** End Class UPlayerAnimInstance Function SetLocomotionState ****************************

// ********** Begin Class UPlayerAnimInstance ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerAnimInstance;
UClass* UPlayerAnimInstance::GetPrivateStaticClass()
{
	using TClass = UPlayerAnimInstance;
	if (!Z_Registration_Info_UClass_UPlayerAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PlayerAnimInstance"),
			Z_Registration_Info_UClass_UPlayerAnimInstance.InnerSingleton,
			StaticRegisterNativesUPlayerAnimInstance,
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
	return Z_Registration_Info_UClass_UPlayerAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
{
	return UPlayerAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoppingAnimationSet_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAnimationSet_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterMovement_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAnimationData_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPlayerAnimInstance constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoppingAnimationSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartAnimationSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacterMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionAnimationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPlayerAnimInstance constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetLocomotionState"), .Pointer = &UPlayerAnimInstance::execSetLocomotionState },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnimInstance_SetLocomotionState, "SetLocomotionState" }, // 2396409399
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPlayerAnimInstance_Statics

// ********** Begin Class UPlayerAnimInstance Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_StoppingAnimationSet = { "StoppingAnimationSet", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, StoppingAnimationSet), Z_Construct_UClass_ULocomotionAnimationSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoppingAnimationSet_MetaData), NewProp_StoppingAnimationSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_StartAnimationSet = { "StartAnimationSet", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, StartAnimationSet), Z_Construct_UClass_ULocomotionAnimationSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAnimationSet_MetaData), NewProp_StartAnimationSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0124080000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, PlayerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_PlayerCharacterMovement = { "PlayerCharacterMovement", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, PlayerCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacterMovement_MetaData), NewProp_PlayerCharacterMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_LocomotionAnimationData = { "LocomotionAnimationData", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, LocomotionAnimationData), Z_Construct_UScriptStruct_FLocomotionAnimationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionAnimationData_MetaData), NewProp_LocomotionAnimationData_MetaData) }; // 4157412713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_StoppingAnimationSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_StartAnimationSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_PlayerCharacterMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_LocomotionAnimationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers) < 2048);
// ********** End Class UPlayerAnimInstance Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
	&UPlayerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams)
};
void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
{
	UClass* Class = UPlayerAnimInstance::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPlayerAnimInstance_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
}
UPlayerAnimInstance::UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPlayerAnimInstance);
UPlayerAnimInstance::~UPlayerAnimInstance() {}
// ********** End Class UPlayerAnimInstance ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 3095176178U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h__Script_AnimationPlaySpace_3124489878{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
