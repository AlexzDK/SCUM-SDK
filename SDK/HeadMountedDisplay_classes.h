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

// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
class UVRNotificationsComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;     // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDTrackingInitializedDelegate;                            // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDRecenteredDelegate;                                     // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDLostDelegate;                                           // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDReconnectedDelegate;                                    // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDConnectCanceledDelegate;                                // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDPutOnHeadDelegate;                                      // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDRemovedFromHeadDelegate;                                // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    VRControllerRecenteredDelegate;                            // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class HeadMountedDisplay.VRNotificationsComponent"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary"));
		return ptr;
	}



	void UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);
	void SetXRTimedInputActionDelegate(const struct FName& ActionName, const struct FScriptDelegate& InDelegate);
	void SetXRDisconnectDelegate(const struct FScriptDelegate& InDisconnectedDelegate);
	void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void SetTrackingOrigin(TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> Origin);
	void SetSpectatorScreenTexture(class UTexture* InTexture);
	void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void SetSpectatorScreenMode(HeadMountedDisplay_ESpectatorScreenMode Mode);
	void SetClippingPlanes(float Near, float Far);
	void ResetOrientationAndPosition(float Yaw, TEnumAsByte<HeadMountedDisplay_EOrientPositionSelector> Options);
	bool IsSpectatorScreenModeControllable();
	bool IsInLowPersistenceMode();
	bool IsHeadMountedDisplayEnabled();
	bool IsHeadMountedDisplayConnected();
	bool IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	bool HasValidTrackingPosition();
	int GetXRSystemFlags();
	float GetWorldToMetersScale(class UObject* WorldContext);
	void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	struct FString GetVersionString();
	struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	void GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int Index);
	TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> GetTrackingOrigin();
	float GetScreenPercentage();
	void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	float GetPixelDensity();
	void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	int GetNumOfTrackingSensors();
	void GetMotionControllerData(class UObject* WorldContext, InputCore_EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData);
	TEnumAsByte<HeadMountedDisplay_EHMDWornState> GetHMDWornState();
	struct FName GetHMDDeviceName();
	void GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData);
	void GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* position);
	void GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* position);
	bool GetControllerTransformForTime(class UObject* WorldContext, int ControllerIndex, const struct FName& MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec);
	TArray<struct FXRDeviceId> EnumerateTrackedDevices(const struct FName& SystemId, HeadMountedDisplay_EXRTrackedDeviceType DeviceType);
	void EnableLowPersistenceMode(bool bEnable);
	bool EnableHMD(bool bEnable);
	void DisconnectRemoteXRDevice();
	TEnumAsByte<HeadMountedDisplay_EXRDeviceConnectionResult> ConnectRemoteXRDevice(const struct FString& IpAddress, int BitRate);
	bool ConfigureGestures(const struct FXRGestureConfig& GestureConfig);
	void ClearXRTimedInputActionDelegate(const struct FName& ActionPath);
	void CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
	void AfterRead();
	void BeforeDelete();

};

// Class HeadMountedDisplay.MotionControllerComponent
// 0x00C0 (FullSize[0x0500] - InheritedSize[0x0440])
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int                                                PlayerIndex;                                               // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	InputCore_EControllerHand                          Hand;                                                      // 0x0444(0x0001) (BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QTS1[0x3];                                     // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       MotionSource;                                              // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableLowLatencyUpdate : 1;                              // 0x0450(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZS3U[0x3];                                     // 0x0451(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	HeadMountedDisplay_ETrackingStatus                 CurrentTrackingStatus;                                     // 0x0454(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayDeviceModel;                                       // 0x0455(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NSR0[0x2];                                     // 0x0456(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DisplayModelSource;                                        // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 CustomDisplayMesh;                                         // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                              // 0x0468(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I9W4[0x68];                                    // 0x0478(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         DisplayComponent;                                          // 0x04E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UW49[0x18];                                    // 0x04E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class HeadMountedDisplay.MotionControllerComponent"));
		return ptr;
	}



	void SetTrackingSource(InputCore_EControllerHand NewSource);
	void SetTrackingMotionSource(const struct FName& NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(const struct FName& NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	InputCore_EControllerHand GetTrackingSource();
	float GetParameterValue(const struct FName& InName, bool* bValueFound);
	struct FVector GetHandJointPosition(int jointIndex, bool* bValueFound);
	void AfterRead();
	void BeforeDelete();

};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary"));
		return ptr;
	}



	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName);
	bool IsMotionTrackingEnabledForDevice(int PlayerIndex, InputCore_EControllerHand Hand);
	bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	bool IsMotionTrackedDeviceCountManagementNecessary();
	bool IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName);
	int GetMotionTrackingEnabledControllerCount();
	int GetMaximumMotionTrackedControllerCount();
	struct FName GetActiveTrackingSystemName();
	TArray<struct FName> EnumerateMotionSources();
	bool EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	bool EnableMotionTrackingOfDevice(int PlayerIndex, InputCore_EControllerHand Hand);
	bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	void DisableMotionTrackingOfDevice(int PlayerIndex, InputCore_EControllerHand Hand);
	void DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void AfterRead();
	void BeforeDelete();

};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class HeadMountedDisplay.XRAssetFunctionLibrary"));
		return ptr;
	}



	class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
	class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
	void AfterRead();
	void BeforeDelete();

};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnModelLoaded;                                             // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadFailure;                                             // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I3PC[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         SpawnedComponent;                                          // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent"));
		return ptr;
	}



	class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
	class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
	void AfterRead();
	void BeforeDelete();

};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary"));
		return ptr;
	}



	void ShowLoadingScreen();
	void SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	void AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
