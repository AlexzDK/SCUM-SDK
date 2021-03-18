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

void ULiveLinkMagicLeapHandTrackingSourceFactory::AfterRead()
{
	ULiveLinkSourceFactory::AfterRead();

}

void ULiveLinkMagicLeapHandTrackingSourceFactory::BeforeDelete()
{
	ULiveLinkSourceFactory::BeforeDelete();

}

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
// ()
// Parameters:
// MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Confidence                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHandTrackingFunctionLibrary::SetStaticGestureConfidenceThreshold(MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture, float Confidence)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold"));

	UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Params params;
	params.Gesture = Gesture;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
// ()
// Parameters:
// TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTrackingEnabled               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::SetConfiguration(TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate, MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration"));

	UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Params params;
	params.StaticGesturesToActivate = StaticGesturesToActivate;
	params.KeypointsFilterLevel = KeypointsFilterLevel;
	params.GestureFilterLevel = GestureFilterLevel;
	params.bTrackingEnabled = bTrackingEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::IsHoldingControl(InputCore_EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl"));

	UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
// ()
// Parameters:
// MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMagicLeapHandTrackingFunctionLibrary::GetStaticGestureConfidenceThreshold(MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold"));

	UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Params params;
	params.Gesture = Gesture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OutMotionSource                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetMotionSourceForHandKeypoint(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, struct FName* OutMotionSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint"));

	UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Params params;
	params.Hand = Hand;
	params.Keypoint = Keypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMotionSource != nullptr)
		*OutMotionSource = params.OutMotionSource;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
// ()
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource"));

	UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              secondary                      (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetHandThumbTip(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* secondary)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip"));

	UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Params params;
	params.Hand = Hand;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (secondary != nullptr)
		*secondary = params.secondary;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
// ()
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint OutKeyPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetHandKeypointForMotionSource(const struct FName& MotionSource, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint* OutKeyPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource"));

	UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutKeyPoint != nullptr)
		*OutKeyPoint = params.OutKeyPoint;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Pointer                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetHandIndexFingerTip(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip"));

	UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Params params;
	params.Hand = Hand;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pointer != nullptr)
		*Pointer = params.Pointer;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HandCenterNormalized           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenterNormalized(InputCore_EControllerHand Hand, struct FVector* HandCenterNormalized)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized"));

	UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HandCenterNormalized != nullptr)
		*HandCenterNormalized = params.HandCenterNormalized;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              HandCenter                     (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenter(InputCore_EControllerHand Hand, struct FTransform* HandCenter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter"));

	UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HandCenter != nullptr)
		*HandCenter = params.HandCenter;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypointTransform(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform"));

	UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Params params;
	params.Hand = Hand;
	params.Keypoint = Keypoint;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Keypoints                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypoints(InputCore_EControllerHand Hand, TArray<struct FTransform>* Keypoints)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints"));

	UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Keypoints != nullptr)
		*Keypoints = params.Keypoints;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Confidence                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGestureConfidence(InputCore_EControllerHand Hand, float* Confidence)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence"));

	UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Confidence != nullptr)
		*Confidence = params.Confidence;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
// ()
// Parameters:
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGesture(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingGesture* Gesture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture"));

	UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Gesture != nullptr)
		*Gesture = params.Gesture;


	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
// ()
// Parameters:
// TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> ActiveStaticGestures           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTrackingEnabled               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::GetConfiguration(TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture>* ActiveStaticGestures, MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration"));

	UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveStaticGestures != nullptr)
		*ActiveStaticGestures = params.ActiveStaticGestures;
	if (KeypointsFilterLevel != nullptr)
		*KeypointsFilterLevel = params.KeypointsFilterLevel;
	if (GestureFilterLevel != nullptr)
		*GestureFilterLevel = params.GestureFilterLevel;
	if (bTrackingEnabled != nullptr)
		*bTrackingEnabled = params.bTrackingEnabled;


	return params.ReturnValue;
}


void UMagicLeapHandTrackingFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapHandTrackingFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
