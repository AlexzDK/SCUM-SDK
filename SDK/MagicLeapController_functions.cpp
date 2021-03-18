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

void FMagicLeapTouchpadGesture::AfterRead()
{
}

void FMagicLeapTouchpadGesture::BeforeDelete()
{
}

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::SetMotionSourceForHand(InputCore_EControllerHand Hand, const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand"));

	UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Params params;
	params.Hand = Hand;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
// ()
// Parameters:
// MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::SetControllerTrackingMode(MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode"));

	UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Params params;
	params.TrackingMode = TrackingMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
// ()
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDColor LEDColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayLEDPattern(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern"));

	UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Params params;
	params.MotionSource = MotionSource;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
// ()
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDColor LEDColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayLEDEffect(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect"));

	UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Params params;
	params.MotionSource = MotionSource;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
// ()
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayHapticPattern(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern"));

	UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Params params;
	params.MotionSource = MotionSource;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDColor LEDColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayControllerLEDEffect(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect"));

	UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Params params;
	params.Hand = Hand;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerLEDColor LEDColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayControllerLED(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED"));

	UMagicLeapControllerFunctionLibrary_PlayControllerLED_Params params;
	params.Hand = Hand;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayControllerHapticFeedback(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback"));

	UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Params params;
	params.Hand = Hand;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapControllerFunctionLibrary::MaxSupportedMagicLeapControllers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers"));

	UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
// ()
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::IsMLControllerConnected(const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected"));

	UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
// ()
void UMagicLeapControllerFunctionLibrary::InvertControllerMapping()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping"));

	UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMagicLeapControllerFunctionLibrary::GetMotionSourceForHand(InputCore_EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand"));

	UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapController_EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetMLControllerType(InputCore_EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType"));

	UMagicLeapControllerFunctionLibrary_GetMLControllerType_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
// ()
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// InputCore_EControllerHand      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
InputCore_EControllerHand UMagicLeapControllerFunctionLibrary::GetHandForMotionSource(const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource"));

	UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
// ()
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapController_EMagicLeapControllerType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapController_EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetControllerType(const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType"));

	UMagicLeapControllerFunctionLibrary_GetControllerType_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
// ()
// Parameters:
// MagicLeapController_EMagicLeapControllerTrackingMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapController_EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::GetControllerTrackingMode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode"));

	UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
// ()
// Parameters:
// int                            ControllerIndex                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// InputCore_EControllerHand      Hand                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::GetControllerMapping(int ControllerIndex, InputCore_EControllerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping"));

	UMagicLeapControllerFunctionLibrary_GetControllerMapping_Params params;
	params.ControllerIndex = ControllerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hand != nullptr)
		*Hand = params.Hand;


	return params.ReturnValue;
}


void UMagicLeapControllerFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapControllerFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UMagicLeapTouchpadGesturesComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UMagicLeapTouchpadGesturesComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
