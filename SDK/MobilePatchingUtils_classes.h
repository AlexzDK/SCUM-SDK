#pragma once

// Name: S, Version: N


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MobilePatchingUtils.MobileInstalledContent
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UMobileInstalledContent : public UObject
{
public:
	unsigned char                                      UnknownData_19TS[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MobilePatchingUtils.MobileInstalledContent"));
		return ptr;
	}



	bool Mount(int PakOrder, const struct FString& MountPoint);
	float GetInstalledContentSize();
	float GetDiskFreeSpace();
	void AfterRead();
	void BeforeDelete();

};

// Class MobilePatchingUtils.MobilePendingContent
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	unsigned char                                      UnknownData_ZIY3[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MobilePatchingUtils.MobilePendingContent"));
		return ptr;
	}



	void StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	float GetTotalDownloadedSize();
	float GetRequiredDiskSpace();
	float GetInstallProgress();
	struct FText GetDownloadStatusText();
	float GetDownloadSpeed();
	float GetDownloadSize();
	void AfterRead();
	void BeforeDelete();

};

// Class MobilePatchingUtils.MobilePatchingLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MobilePatchingUtils.MobilePatchingLibrary"));
		return ptr;
	}



	void RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	bool HasActiveWiFiConnection();
	TArray<struct FString> GetSupportedPlatformNames();
	class UMobileInstalledContent* GetInstalledContent(const struct FString& InstallDirectory);
	struct FString GetActiveDeviceProfileName();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
