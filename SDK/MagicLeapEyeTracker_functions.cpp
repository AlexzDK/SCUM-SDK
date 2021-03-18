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

void FMagicLeapEyeBlinkState::AfterRead()
{
}

void FMagicLeapEyeBlinkState::BeforeDelete()
{
}

// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
// ()
// Parameters:
// struct FMagicLeapEyeBlinkState BlinkState                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapEyeTrackerFunctionLibrary::GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState"));

	UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlinkState != nullptr)
		*BlinkState = params.BlinkState;


	return params.ReturnValue;
}


// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
// ()
// Parameters:
// MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus UMagicLeapEyeTrackerFunctionLibrary::GetCalibrationStatus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus"));

	UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapEyeTrackerFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapEyeTrackerFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
