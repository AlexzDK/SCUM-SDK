// Name: S, Version: N

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FMagicLeapLightEstimationColorTemperatureState::AfterRead()
{
}

void FMagicLeapLightEstimationColorTemperatureState::BeforeDelete()
{
}

void FMagicLeapLightEstimationAmbientGlobalState::AfterRead()
{
}

void FMagicLeapLightEstimationAmbientGlobalState::BeforeDelete()
{
}

void UMagicLeapLightingTrackingComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UMagicLeapLightingTrackingComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapLightEstimationFunctionLibrary::IsTrackerValid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid"));

	UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
// ()
// Parameters:
// struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapLightEstimationFunctionLibrary::GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState"));

	UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ColorTemperatureState != nullptr)
		*ColorTemperatureState = params.ColorTemperatureState;


	return params.ReturnValue;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
// ()
// Parameters:
// struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState             (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapLightEstimationFunctionLibrary::GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState"));

	UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GlobalAmbientState != nullptr)
		*GlobalAmbientState = params.GlobalAmbientState;


	return params.ReturnValue;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
// ()
void UMagicLeapLightEstimationFunctionLibrary::DestroyTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker"));

	UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapLightEstimationFunctionLibrary::CreateTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker"));

	UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapLightEstimationFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapLightEstimationFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
