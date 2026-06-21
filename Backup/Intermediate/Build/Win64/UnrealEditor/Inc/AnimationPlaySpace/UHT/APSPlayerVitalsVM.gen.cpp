// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSPlayerVitalsVM() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSPlayerVitalsVM();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSPlayerVitalsVM_NoRegister();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSVMBase();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAPSPlayerVitalsVM Function GetHealthPercentage **************************
struct Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics
{
	struct APSPlayerVitalsVM_eventGetHealthPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHealthPercentage constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHealthPercentage constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHealthPercentage Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APSPlayerVitalsVM_eventGetHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::PropPointers) < 2048);
// ********** End Function GetHealthPercentage Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAPSPlayerVitalsVM, nullptr, "GetHealthPercentage", 	Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::APSPlayerVitalsVM_eventGetHealthPercentage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::APSPlayerVitalsVM_eventGetHealthPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAPSPlayerVitalsVM::execGetHealthPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercentage();
	P_NATIVE_END;
}
// ********** End Class UAPSPlayerVitalsVM Function GetHealthPercentage ****************************

// ********** Begin Class UAPSPlayerVitalsVM Function GetPlayerCurrentHealth ***********************
struct Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics
{
	struct APSPlayerVitalsVM_eventGetPlayerCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerCurrentHealth constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerCurrentHealth constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerCurrentHealth Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APSPlayerVitalsVM_eventGetPlayerCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerCurrentHealth Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAPSPlayerVitalsVM, nullptr, "GetPlayerCurrentHealth", 	Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::APSPlayerVitalsVM_eventGetPlayerCurrentHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::APSPlayerVitalsVM_eventGetPlayerCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAPSPlayerVitalsVM::execGetPlayerCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerCurrentHealth();
	P_NATIVE_END;
}
// ********** End Class UAPSPlayerVitalsVM Function GetPlayerCurrentHealth *************************

// ********** Begin Class UAPSPlayerVitalsVM Function GetPlayerCurrentStamina **********************
struct Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics
{
	struct APSPlayerVitalsVM_eventGetPlayerCurrentStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerCurrentStamina constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerCurrentStamina constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerCurrentStamina Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APSPlayerVitalsVM_eventGetPlayerCurrentStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerCurrentStamina Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAPSPlayerVitalsVM, nullptr, "GetPlayerCurrentStamina", 	Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::APSPlayerVitalsVM_eventGetPlayerCurrentStamina_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::APSPlayerVitalsVM_eventGetPlayerCurrentStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAPSPlayerVitalsVM::execGetPlayerCurrentStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerCurrentStamina();
	P_NATIVE_END;
}
// ********** End Class UAPSPlayerVitalsVM Function GetPlayerCurrentStamina ************************

// ********** Begin Class UAPSPlayerVitalsVM Function GetPlayerMaxHealth ***************************
struct Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics
{
	struct APSPlayerVitalsVM_eventGetPlayerMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerMaxHealth constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerMaxHealth constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerMaxHealth Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APSPlayerVitalsVM_eventGetPlayerMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerMaxHealth Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAPSPlayerVitalsVM, nullptr, "GetPlayerMaxHealth", 	Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::APSPlayerVitalsVM_eventGetPlayerMaxHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::APSPlayerVitalsVM_eventGetPlayerMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAPSPlayerVitalsVM::execGetPlayerMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerMaxHealth();
	P_NATIVE_END;
}
// ********** End Class UAPSPlayerVitalsVM Function GetPlayerMaxHealth *****************************

// ********** Begin Class UAPSPlayerVitalsVM Function GetPlayerMaxStamina **************************
struct Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics
{
	struct APSPlayerVitalsVM_eventGetPlayerMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerMaxStamina constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerMaxStamina constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerMaxStamina Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APSPlayerVitalsVM_eventGetPlayerMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerMaxStamina Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAPSPlayerVitalsVM, nullptr, "GetPlayerMaxStamina", 	Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::APSPlayerVitalsVM_eventGetPlayerMaxStamina_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::APSPlayerVitalsVM_eventGetPlayerMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAPSPlayerVitalsVM::execGetPlayerMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerMaxStamina();
	P_NATIVE_END;
}
// ********** End Class UAPSPlayerVitalsVM Function GetPlayerMaxStamina ****************************

// ********** Begin Class UAPSPlayerVitalsVM Function GetStaminaPercentage *************************
struct Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics
{
	struct APSPlayerVitalsVM_eventGetStaminaPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStaminaPercentage constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStaminaPercentage constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStaminaPercentage Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APSPlayerVitalsVM_eventGetStaminaPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::PropPointers) < 2048);
// ********** End Function GetStaminaPercentage Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAPSPlayerVitalsVM, nullptr, "GetStaminaPercentage", 	Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::APSPlayerVitalsVM_eventGetStaminaPercentage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::APSPlayerVitalsVM_eventGetStaminaPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAPSPlayerVitalsVM::execGetStaminaPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStaminaPercentage();
	P_NATIVE_END;
}
// ********** End Class UAPSPlayerVitalsVM Function GetStaminaPercentage ***************************

// ********** Begin Class UAPSPlayerVitalsVM *******************************************************
void UAPSPlayerVitalsVM::GetPlayerCurrentHealth_WrapperImpl(const void* Object, void* OutValue)
{
	const UAPSPlayerVitalsVM* Obj = (const UAPSPlayerVitalsVM*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPlayerCurrentHealth();
}
void UAPSPlayerVitalsVM::SetPlayerCurrentHealth_WrapperImpl(void* Object, const void* InValue)
{
	UAPSPlayerVitalsVM* Obj = (UAPSPlayerVitalsVM*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPlayerCurrentHealth(Value);
}
void UAPSPlayerVitalsVM::GetPlayerMaxHealth_WrapperImpl(const void* Object, void* OutValue)
{
	const UAPSPlayerVitalsVM* Obj = (const UAPSPlayerVitalsVM*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPlayerMaxHealth();
}
void UAPSPlayerVitalsVM::SetPlayerMaxHealth_WrapperImpl(void* Object, const void* InValue)
{
	UAPSPlayerVitalsVM* Obj = (UAPSPlayerVitalsVM*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPlayerMaxHealth(Value);
}
void UAPSPlayerVitalsVM::GetPlayerCurrentStamina_WrapperImpl(const void* Object, void* OutValue)
{
	const UAPSPlayerVitalsVM* Obj = (const UAPSPlayerVitalsVM*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPlayerCurrentStamina();
}
void UAPSPlayerVitalsVM::SetPlayerCurrentStamina_WrapperImpl(void* Object, const void* InValue)
{
	UAPSPlayerVitalsVM* Obj = (UAPSPlayerVitalsVM*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPlayerCurrentStamina(Value);
}
void UAPSPlayerVitalsVM::GetPlayerMaxStamina_WrapperImpl(const void* Object, void* OutValue)
{
	const UAPSPlayerVitalsVM* Obj = (const UAPSPlayerVitalsVM*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPlayerMaxStamina();
}
void UAPSPlayerVitalsVM::SetPlayerMaxStamina_WrapperImpl(void* Object, const void* InValue)
{
	UAPSPlayerVitalsVM* Obj = (UAPSPlayerVitalsVM*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPlayerMaxStamina(Value);
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAPSPlayerVitalsVM;
UClass* UAPSPlayerVitalsVM::GetPrivateStaticClass()
{
	using TClass = UAPSPlayerVitalsVM;
	if (!Z_Registration_Info_UClass_UAPSPlayerVitalsVM.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSPlayerVitalsVM"),
			Z_Registration_Info_UClass_UAPSPlayerVitalsVM.InnerSingleton,
			StaticRegisterNativesUAPSPlayerVitalsVM,
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
	return Z_Registration_Info_UClass_UAPSPlayerVitalsVM.InnerSingleton;
}
UClass* Z_Construct_UClass_UAPSPlayerVitalsVM_NoRegister()
{
	return UAPSPlayerVitalsVM::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAPSPlayerVitalsVM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCurrentHealth_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "APSPlayerVitalsVM" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "APSPlayerVitalsVM" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCurrentStamina_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "APSPlayerVitalsVM" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMaxStamina_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "APSPlayerVitalsVM" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAPSPlayerVitalsVM constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerCurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerMaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerCurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerMaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAPSPlayerVitalsVM constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetHealthPercentage"), .Pointer = &UAPSPlayerVitalsVM::execGetHealthPercentage },
		{ .NameUTF8 = UTF8TEXT("GetPlayerCurrentHealth"), .Pointer = &UAPSPlayerVitalsVM::execGetPlayerCurrentHealth },
		{ .NameUTF8 = UTF8TEXT("GetPlayerCurrentStamina"), .Pointer = &UAPSPlayerVitalsVM::execGetPlayerCurrentStamina },
		{ .NameUTF8 = UTF8TEXT("GetPlayerMaxHealth"), .Pointer = &UAPSPlayerVitalsVM::execGetPlayerMaxHealth },
		{ .NameUTF8 = UTF8TEXT("GetPlayerMaxStamina"), .Pointer = &UAPSPlayerVitalsVM::execGetPlayerMaxStamina },
		{ .NameUTF8 = UTF8TEXT("GetStaminaPercentage"), .Pointer = &UAPSPlayerVitalsVM::execGetStaminaPercentage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAPSPlayerVitalsVM_GetHealthPercentage, "GetHealthPercentage" }, // 427306091
		{ &Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentHealth, "GetPlayerCurrentHealth" }, // 3121012820
		{ &Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerCurrentStamina, "GetPlayerCurrentStamina" }, // 2665383301
		{ &Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxHealth, "GetPlayerMaxHealth" }, // 1146847629
		{ &Z_Construct_UFunction_UAPSPlayerVitalsVM_GetPlayerMaxStamina, "GetPlayerMaxStamina" }, // 1876179873
		{ &Z_Construct_UFunction_UAPSPlayerVitalsVM_GetStaminaPercentage, "GetStaminaPercentage" }, // 2926326491
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSPlayerVitalsVM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAPSPlayerVitalsVM_Statics

// ********** Begin Class UAPSPlayerVitalsVM Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::NewProp_PlayerCurrentHealth = { "PlayerCurrentHealth", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UAPSPlayerVitalsVM::SetPlayerCurrentHealth_WrapperImpl, &UAPSPlayerVitalsVM::GetPlayerCurrentHealth_WrapperImpl, 1, STRUCT_OFFSET(UAPSPlayerVitalsVM, PlayerCurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCurrentHealth_MetaData), NewProp_PlayerCurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::NewProp_PlayerMaxHealth = { "PlayerMaxHealth", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UAPSPlayerVitalsVM::SetPlayerMaxHealth_WrapperImpl, &UAPSPlayerVitalsVM::GetPlayerMaxHealth_WrapperImpl, 1, STRUCT_OFFSET(UAPSPlayerVitalsVM, PlayerMaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMaxHealth_MetaData), NewProp_PlayerMaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::NewProp_PlayerCurrentStamina = { "PlayerCurrentStamina", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UAPSPlayerVitalsVM::SetPlayerCurrentStamina_WrapperImpl, &UAPSPlayerVitalsVM::GetPlayerCurrentStamina_WrapperImpl, 1, STRUCT_OFFSET(UAPSPlayerVitalsVM, PlayerCurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCurrentStamina_MetaData), NewProp_PlayerCurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::NewProp_PlayerMaxStamina = { "PlayerMaxStamina", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UAPSPlayerVitalsVM::SetPlayerMaxStamina_WrapperImpl, &UAPSPlayerVitalsVM::GetPlayerMaxStamina_WrapperImpl, 1, STRUCT_OFFSET(UAPSPlayerVitalsVM, PlayerMaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMaxStamina_MetaData), NewProp_PlayerMaxStamina_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::NewProp_PlayerCurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::NewProp_PlayerMaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::NewProp_PlayerCurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::NewProp_PlayerMaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::PropPointers) < 2048);
// ********** End Class UAPSPlayerVitalsVM Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAPSVMBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::ClassParams = {
	&UAPSPlayerVitalsVM::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::Class_MetaDataParams), Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::Class_MetaDataParams)
};
void UAPSPlayerVitalsVM::StaticRegisterNativesUAPSPlayerVitalsVM()
{
	UClass* Class = UAPSPlayerVitalsVM::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAPSPlayerVitalsVM()
{
	if (!Z_Registration_Info_UClass_UAPSPlayerVitalsVM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAPSPlayerVitalsVM.OuterSingleton, Z_Construct_UClass_UAPSPlayerVitalsVM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAPSPlayerVitalsVM.OuterSingleton;
}
UAPSPlayerVitalsVM::UAPSPlayerVitalsVM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAPSPlayerVitalsVM);
UAPSPlayerVitalsVM::~UAPSPlayerVitalsVM() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVitalsVM, PlayerCurrentHealth)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVitalsVM, PlayerMaxHealth)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVitalsVM, PlayerCurrentStamina)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVitalsVM, PlayerMaxStamina)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVitalsVM, GetPlayerCurrentHealth)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVitalsVM, GetPlayerMaxHealth)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVitalsVM, GetPlayerCurrentStamina)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVitalsVM, GetPlayerMaxStamina)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVitalsVM, GetHealthPercentage)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVitalsVM, GetStaminaPercentage)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UAPSPlayerVitalsVM)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVitalsVM, PlayerCurrentHealth)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVitalsVM, PlayerMaxHealth)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVitalsVM, PlayerCurrentStamina)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVitalsVM, PlayerMaxStamina)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVitalsVM, GetPlayerCurrentHealth)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVitalsVM, GetPlayerMaxHealth)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVitalsVM, GetPlayerCurrentStamina)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVitalsVM, GetPlayerMaxStamina)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVitalsVM, GetHealthPercentage)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVitalsVM, GetStaminaPercentage)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UAPSPlayerVitalsVM);
// ********** End Class UAPSPlayerVitalsVM *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAPSPlayerVitalsVM, UAPSPlayerVitalsVM::StaticClass, TEXT("UAPSPlayerVitalsVM"), &Z_Registration_Info_UClass_UAPSPlayerVitalsVM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAPSPlayerVitalsVM), 1438483191U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h__Script_AnimationPlaySpace_1193810551{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
