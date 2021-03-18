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

void FEyeTrackerGazeData::AfterRead()
{
}

void FEyeTrackerGazeData::BeforeDelete()
{
}

void FEyeTrackerStereoGazeData::AfterRead()
{
}

void FEyeTrackerStereoGazeData::BeforeDelete()
{
}

// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer"));

	UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable"));

	UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::IsEyeTrackerConnected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected"));

	UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// ()
// Parameters:
// struct FEyeTrackerStereoGazeData OutGazeData                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData"));

	UEyeTrackerFunctionLibrary_GetStereoGazeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutGazeData != nullptr)
		*OutGazeData = params.OutGazeData;


	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// ()
// Parameters:
// struct FEyeTrackerGazeData     OutGazeData                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::GetGazeData(struct FEyeTrackerGazeData* OutGazeData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData"));

	UEyeTrackerFunctionLibrary_GetGazeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutGazeData != nullptr)
		*OutGazeData = params.OutGazeData;


	return params.ReturnValue;
}


void UEyeTrackerFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UEyeTrackerFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
