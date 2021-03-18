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

void FMagicLeapMeshBlockRequest::AfterRead()
{
}

void FMagicLeapMeshBlockRequest::BeforeDelete()
{
}

void FMagicLeapRaycastQueryParams::AfterRead()
{
}

void FMagicLeapRaycastQueryParams::BeforeDelete()
{
}

void FMagicLeapGraphicsClientPerformanceInfo::AfterRead()
{
}

void FMagicLeapGraphicsClientPerformanceInfo::BeforeDelete()
{
}

void FMagicLeapHeadTrackingState::AfterRead()
{
}

void FMagicLeapHeadTrackingState::BeforeDelete()
{
}

void FMagicLeapResult::AfterRead()
{
}

void FMagicLeapResult::BeforeDelete()
{
}

void FMagicLeapMeshBlockInfo::AfterRead()
{
}

void FMagicLeapMeshBlockInfo::BeforeDelete()
{
}

void FMagicLeapTrackingMeshInfo::AfterRead()
{
}

void FMagicLeapTrackingMeshInfo::BeforeDelete()
{
}

void FMagicLeapRaycastHitResult::AfterRead()
{
}

void FMagicLeapRaycastHitResult::BeforeDelete()
{
}

void FPurchaseConfirmation::AfterRead()
{
}

void FPurchaseConfirmation::BeforeDelete()
{
}

void FPurchaseItemDetails::AfterRead()
{
}

void FPurchaseItemDetails::BeforeDelete()
{
}

// Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
// ()
// Parameters:
// struct FMagicLeapTrackingMeshInfo NewMeshInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMagicLeapMeshBlockSelectorInterface::SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks"));

	UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params params;
	params.NewMeshInfo = NewMeshInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;

}


void UMagicLeapMeshBlockSelectorInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMagicLeapMeshBlockSelectorInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
// ()
// Parameters:
// struct FMagicLeapRaycastQueryParams RequestParams                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapRaycastComponent::RequestRaycast(const struct FMagicLeapRaycastQueryParams& RequestParams, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast"));

	UMagicLeapRaycastComponent_RequestRaycast_Params params;
	params.RequestParams = RequestParams;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
// ()
// Parameters:
// struct FMagicLeapRaycastHitResult HitResult                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapRaycastComponent::RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature"));

	UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMagicLeapRaycastComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UMagicLeapRaycastComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
// ()
// Parameters:
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 UpVector                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          HorizontalFovDegrees           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           CollideWithUnobserved          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserData                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMagicLeapRaycastQueryParams ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FMagicLeapRaycastQueryParams UMagicLeapRaycastFunctionLibrary::MakeRaycastQueryParams(const struct FVector& position, const struct FVector& Direction, const struct FVector& UpVector, int Width, int Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int UserData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams"));

	UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params params;
	params.position = position;
	params.Direction = Direction;
	params.UpVector = UpVector;
	params.Width = Width;
	params.Height = Height;
	params.HorizontalFovDegrees = HorizontalFovDegrees;
	params.CollideWithUnobserved = CollideWithUnobserved;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapRaycastFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapRaycastFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
// ()
// Parameters:
// struct FPurchaseItemDetails    ItemDetails                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInAppPurchaseComponent::TryPurchaseItemAsync(const struct FPurchaseItemDetails& ItemDetails)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync"));

	UInAppPurchaseComponent_TryPurchaseItemAsync_Params params;
	params.ItemDetails = ItemDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
// ()
// Parameters:
// int                            InNumPages                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInAppPurchaseComponent::TryGetPurchaseHistoryAsync(int InNumPages)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync"));

	UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params params;
	params.InNumPages = InNumPages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
// ()
// Parameters:
// TArray<struct FString>         ItemIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInAppPurchaseComponent::TryGetItemsDetailsAsync(TArray<struct FString> ItemIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync"));

	UInAppPurchaseComponent_TryGetItemsDetailsAsync_Params params;
	params.ItemIDs = ItemIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
// ()
// Parameters:
// struct FPurchaseConfirmation   PurchaseConfirmations          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::PurchaseConfirmationSuccess__DelegateSignature(const struct FPurchaseConfirmation& PurchaseConfirmations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature"));

	UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params params;
	params.PurchaseConfirmations = PurchaseConfirmations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
// ()
void UInAppPurchaseComponent::PurchaseConfirmationFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature"));

	UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
// ()
// Parameters:
// struct FString                 LogMessage                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::InAppPurchaseLogMessage__DelegateSignature(const struct FString& LogMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature"));

	UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params params;
	params.LogMessage = LogMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
// ()
// Parameters:
// TArray<struct FPurchaseConfirmation> PurchaseHistory                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation> PurchaseHistory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature"));

	UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params params;
	params.PurchaseHistory = PurchaseHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
// ()
void UInAppPurchaseComponent::GetPurchaseHistoryFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature"));

	UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
// ()
// Parameters:
// TArray<struct FPurchaseItemDetails> ItemsDetails                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails> ItemsDetails)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature"));

	UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params params;
	params.ItemsDetails = ItemsDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
// ()
void UInAppPurchaseComponent::GetItemsDetailsFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature"));

	UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UInAppPurchaseComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UInAppPurchaseComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void ULuminApplicationLifecycleComponent::AfterRead()
{
	UApplicationLifecycleComponent::AfterRead();

}

void ULuminApplicationLifecycleComponent::BeforeDelete()
{
	UApplicationLifecycleComponent::BeforeDelete();

}

void UMagicLeapHeadTrackingNotificationsComponent::AfterRead()
{
	UVRNotificationsComponent::AfterRead();

}

void UMagicLeapHeadTrackingNotificationsComponent::BeforeDelete()
{
	UVRNotificationsComponent::BeforeDelete();

}

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
// ()
// Parameters:
// class AActor*                  InStabilizationDepthActor      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSetFocusActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor"));

	UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params params;
	params.InStabilizationDepthActor = InStabilizationDepthActor;
	params.bSetFocusActor = bSetFocusActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
// ()
// Parameters:
// class AActor*                  InFocusActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSetStabilizationActor         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor"));

	UMagicLeapHMDFunctionLibrary_SetFocusActor_Params params;
	params.InFocusActor = InFocusActor;
	params.bSetStabilizationActor = bSetStabilizationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
// ()
// Parameters:
// struct FRotator                InBaseRotation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::SetBaseRotation(const struct FRotator& InBaseRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation"));

	UMagicLeapHMDFunctionLibrary_SetBaseRotation_Params params;
	params.InBaseRotation = InBaseRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
// ()
// Parameters:
// struct FVector                 InBasePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::SetBasePosition(const struct FVector& InBasePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition"));

	UMagicLeapHMDFunctionLibrary_SetBasePosition_Params params;
	params.InBasePosition = InBasePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
// ()
// Parameters:
// struct FQuat                   InBaseOrientation              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::SetBaseOrientation(const struct FQuat& InBaseOrientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation"));

	UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Params params;
	params.InBaseOrientation = InBaseOrientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::SetAppReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady"));

	UMagicLeapHMDFunctionLibrary_SetAppReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::IsRunningOnMagicLeapHMD()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD"));

	UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::GetPlatformAPILevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel"));

	UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::GetMLSDKVersionRevision()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision"));

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMinor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor"));

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMajor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor"));

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMagicLeapHMDFunctionLibrary::GetMLSDKVersion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion"));

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::GetMinimumAPILevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel"));

	UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
// ()
// Parameters:
// struct FMagicLeapHeadTrackingState State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState"));

	UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::GetHeadTrackingMapEvents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents"));

	UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
// ()
// Parameters:
// struct FMagicLeapGraphicsClientPerformanceInfo PerformanceInfo                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo* PerformanceInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo"));

	UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerformanceInfo != nullptr)
		*PerformanceInfo = params.PerformanceInfo;


	return params.ReturnValue;
}


void UMagicLeapHMDFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapHMDFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
// ()
// Parameters:
// struct FMagicLeapTrackingMeshInfo NewMeshInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks"));

	UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Params params;
	params.NewMeshInfo = NewMeshInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;

}


// DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
// ()
// Parameters:
// struct FGuid                   ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                  Confidence                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature"));

	UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params params;
	params.ID = ID;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapMeshTrackerComponent::GetNumQueuedBlockUpdates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates"));

	UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
// ()
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh"));

	UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
// ()
void UMagicLeapMeshTrackerComponent::DisconnectBlockSelector()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector"));

	UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
// ()
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh"));

	UMagicLeapMeshTrackerComponent_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
// ()
// Parameters:
// TScriptInterface<class UMagicLeapMeshBlockSelectorInterface> Selector                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::ConnectBlockSelector(const TScriptInterface<class UMagicLeapMeshBlockSelectorInterface>& Selector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector"));

	UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Params params;
	params.Selector = Selector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMagicLeapMeshTrackerComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(BoundingVolume, UBoxComponent);
	READ_PTR_FULL(MRMesh, UMRMeshComponent);
}

void UMagicLeapMeshTrackerComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(BoundingVolume);
	DELE_PTR_FULL(MRMesh);
}

void UMagicLeapSettings::AfterRead()
{
	UObject::AfterRead();

}

void UMagicLeapSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
