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

// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
// ()
// Parameters:
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation"));

	UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval"));

	UGooglePADFunctionLibrary_RequestRemoval_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
// ()
// Parameters:
// TArray<struct FString>         AssetPacks                     (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(TArray<struct FString> AssetPacks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.RequestInfo"));

	UGooglePADFunctionLibrary_RequestInfo_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
// ()
// Parameters:
// TArray<struct FString>         AssetPacks                     (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(TArray<struct FString> AssetPacks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.RequestDownload"));

	UGooglePADFunctionLibrary_RequestDownload_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
// ()
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGooglePADFunctionLibrary::ReleaseDownloadState(int State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState"));

	UGooglePADFunctionLibrary_ReleaseDownloadState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
// ()
// Parameters:
// int                            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation"));

	UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
// ()
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGooglePADFunctionLibrary::GetTotalBytesToDownload(int State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload"));

	UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
// ()
// Parameters:
// int                            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADStorageMethod ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod"));

	UGooglePADFunctionLibrary_GetStorageMethod_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
// ()
// Parameters:
// GooglePAD_EGooglePADCellularDataConfirmStatus Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(GooglePAD_EGooglePADCellularDataConfirmStatus* Status)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus"));

	UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
// ()
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADDownloadStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus"));

	UGooglePADFunctionLibrary_GetDownloadStatus_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const struct FString& Name, int* State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState"));

	UGooglePADFunctionLibrary_GetDownloadState_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
// ()
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGooglePADFunctionLibrary::GetBytesDownloaded(int State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded"));

	UGooglePADFunctionLibrary_GetBytesDownloaded_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
// ()
// Parameters:
// int                            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGooglePADFunctionLibrary::GetAssetsPath(int Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath"));

	UGooglePADFunctionLibrary_GetAssetsPath_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const struct FString& Name, int* Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation"));

	UGooglePADFunctionLibrary_GetAssetPackLocation_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
// ()
// Parameters:
// TArray<struct FString>         AssetPacks                     (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(TArray<struct FString> AssetPacks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.CancelDownload"));

	UGooglePADFunctionLibrary_CancelDownload_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGooglePADFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UGooglePADFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
