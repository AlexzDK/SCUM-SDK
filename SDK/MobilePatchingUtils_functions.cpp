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

// Function MobilePatchingUtils.MobileInstalledContent.Mount
// ()
// Parameters:
// int                            PakOrder                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MountPoint                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMobileInstalledContent::Mount(int PakOrder, const struct FString& MountPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobileInstalledContent.Mount"));

	UMobileInstalledContent_Mount_Params params;
	params.PakOrder = PakOrder;
	params.MountPoint = MountPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobileInstalledContent::GetInstalledContentSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize"));

	UMobileInstalledContent_GetInstalledContentSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobileInstalledContent::GetDiskFreeSpace()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace"));

	UMobileInstalledContent_GetDiskFreeSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMobileInstalledContent::AfterRead()
{
	UObject::AfterRead();

}

void UMobileInstalledContent::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function MobilePatchingUtils.MobilePendingContent.StartInstall
// ()
// Parameters:
// struct FScriptDelegate         OnSucceeded                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnFailed                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UMobilePendingContent::StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.StartInstall"));

	UMobilePendingContent_StartInstall_Params params;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobilePendingContent::GetTotalDownloadedSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize"));

	UMobilePendingContent_GetTotalDownloadedSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobilePendingContent::GetRequiredDiskSpace()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace"));

	UMobilePendingContent_GetRequiredDiskSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobilePendingContent::GetInstallProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress"));

	UMobilePendingContent_GetInstallProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMobilePendingContent::GetDownloadStatusText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText"));

	UMobilePendingContent_GetDownloadStatusText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobilePendingContent::GetDownloadSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed"));

	UMobilePendingContent_GetDownloadSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobilePendingContent::GetDownloadSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize"));

	UMobilePendingContent_GetDownloadSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMobilePendingContent::AfterRead()
{
	UMobileInstalledContent::AfterRead();

}

void UMobilePendingContent::BeforeDelete()
{
	UMobileInstalledContent::BeforeDelete();

}

// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
// ()
// Parameters:
// struct FString                 RemoteManifestURL              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CloudURL                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InstallDirectory               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnSucceeded                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnFailed                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UMobilePatchingLibrary::RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent"));

	UMobilePatchingLibrary_RequestContent_Params params;
	params.RemoteManifestURL = RemoteManifestURL;
	params.CloudURL = CloudURL;
	params.InstallDirectory = InstallDirectory;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMobilePatchingLibrary::HasActiveWiFiConnection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection"));

	UMobilePatchingLibrary_HasActiveWiFiConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UMobilePatchingLibrary::GetSupportedPlatformNames()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames"));

	UMobilePatchingLibrary_GetSupportedPlatformNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
// ()
// Parameters:
// struct FString                 InstallDirectory               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMobileInstalledContent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(const struct FString& InstallDirectory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent"));

	UMobilePatchingLibrary_GetInstalledContent_Params params;
	params.InstallDirectory = InstallDirectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMobilePatchingLibrary::GetActiveDeviceProfileName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName"));

	UMobilePatchingLibrary_GetActiveDeviceProfileName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMobilePatchingLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMobilePatchingLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
