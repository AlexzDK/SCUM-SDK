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

void FMagicLeapImageTargetState::AfterRead()
{
}

void FMagicLeapImageTargetState::BeforeDelete()
{
}

void FMagicLeapImageTargetSettings::AfterRead()
{
	READ_PTR_FULL(ImageTexture, UTexture2D);
}

void FMagicLeapImageTargetSettings::BeforeDelete()
{
	DELE_PTR_FULL(ImageTexture);
}

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
// ()
// Parameters:
// class UTexture2D*              ImageTarget                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapImageTrackerComponent::SetTargetAsync(class UTexture2D* ImageTarget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync"));

	UMagicLeapImageTrackerComponent_SetTargetAsync_Params params;
	params.ImageTarget = ImageTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapImageTrackerComponent::RemoveTargetAsync()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync"));

	UMagicLeapImageTrackerComponent_RemoveTargetAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapImageTrackerComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(TargetImageTexture, UTexture2D);
}

void UMagicLeapImageTrackerComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(TargetImageTexture);
}

// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
// ()
// Parameters:
// int                            MaxSimultaneousTargets         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapImageTrackerFunctionLibrary::SetMaxSimultaneousTargets(int MaxSimultaneousTargets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets"));

	UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Params params;
	params.MaxSimultaneousTargets = MaxSimultaneousTargets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapImageTrackerFunctionLibrary::IsImageTrackingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled"));

	UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapImageTrackerFunctionLibrary::GetMaxSimultaneousTargets()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets"));

	UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapImageTrackerFunctionLibrary::EnableImageTracking(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking"));

	UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMagicLeapImageTrackerFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapImageTrackerFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
