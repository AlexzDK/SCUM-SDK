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

// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ULuminARSessionConfig*   Configuration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULuminARSessionFunctionLibrary::StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession"));

	ULuminARSessionFunctionLibrary_StartLuminARSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Configuration = Configuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULuminARSessionFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void ULuminARSessionFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FARTraceResult>  OutHitResults                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULuminARFrameFunctionLibrary::LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TArray<struct FARTraceResult>* OutHitResults)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace"));

	ULuminARFrameFunctionLibrary_LuminARLineTrace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHitResults != nullptr)
		*OutHitResults = params.OutHitResults;


	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
// ()
// Parameters:
// MagicLeapAR_ELuminARTrackingState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapAR_ELuminARTrackingState ULuminARFrameFunctionLibrary::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState"));

	ULuminARFrameFunctionLibrary_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULuminARFrameFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void ULuminARFrameFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
// ()
// Parameters:
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> ULuminARLightEstimate::GetAmbientIntensityNits()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits"));

	ULuminARLightEstimate_GetAmbientIntensityNits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULuminARLightEstimate::AfterRead()
{
	UARBasicLightEstimate::AfterRead();

}

void ULuminARLightEstimate::BeforeDelete()
{
	UARBasicLightEstimate::BeforeDelete();

}

// Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULuminARCandidateImage::GetUseUnreliablePose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose"));

	ULuminARCandidateImage_GetUseUnreliablePose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULuminARCandidateImage::GetImageIsStationary()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary"));

	ULuminARCandidateImage_GetImageIsStationary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARCandidateImage.GetAxisOrientation
// ()
// Parameters:
// MagicLeapImageTracker_EMagicLeapImageTargetOrientation ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapImageTracker_EMagicLeapImageTargetOrientation ULuminARCandidateImage::GetAxisOrientation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARCandidateImage.GetAxisOrientation"));

	ULuminARCandidateImage_GetAxisOrientation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULuminARCandidateImage::AfterRead()
{
	UARCandidateImage::AfterRead();

}

void ULuminARCandidateImage::BeforeDelete()
{
	UARCandidateImage::BeforeDelete();

}

// Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx
// ()
// Parameters:
// class UARSessionConfig*        SessionConfig                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              CandidateTexture               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FriendlyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PhysicalWidth                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseUnreliablePose             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bImageIsStationary             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapImageTracker_EMagicLeapImageTargetOrientation InAxisOrientation              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULuminARCandidateImage*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, MagicLeapImageTracker_EMagicLeapImageTargetOrientation InAxisOrientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx"));

	ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx_Params params;
	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;
	params.bUseUnreliablePose = bUseUnreliablePose;
	params.bImageIsStationary = bImageIsStationary;
	params.InAxisOrientation = InAxisOrientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
// ()
// Parameters:
// class UARSessionConfig*        SessionConfig                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              CandidateTexture               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FriendlyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PhysicalWidth                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseUnreliablePose             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bImageIsStationary             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULuminARCandidateImage*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage"));

	ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Params params;
	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;
	params.bUseUnreliablePose = bUseUnreliablePose;
	params.bImageIsStationary = bImageIsStationary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULuminARImageTrackingFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void ULuminARImageTrackingFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void ALuminAROrigin::AfterRead()
{
	AAROriginActor::AfterRead();

	READ_PTR_FULL(MRMeshComponent, UMRMeshComponent);
	READ_PTR_FULL(PlaneSurfaceMaterial, UMaterialInterface);
	READ_PTR_FULL(WireframeMaterial, UMaterialInterface);
}

void ALuminAROrigin::BeforeDelete()
{
	AAROriginActor::BeforeDelete();

	DELE_PTR_FULL(MRMeshComponent);
	DELE_PTR_FULL(PlaneSurfaceMaterial);
	DELE_PTR_FULL(WireframeMaterial);
}

void ULuminARSessionConfig::AfterRead()
{
	UARSessionConfig::AfterRead();

}

void ULuminARSessionConfig::BeforeDelete()
{
	UARSessionConfig::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
