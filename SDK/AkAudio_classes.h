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

// Class AkAudio.AkAcousticPortal
// 0x0090 (FullSize[0x02E8] - InheritedSize[0x0258])
class AAkAcousticPortal : public AVolume
{
public:
	AkAudio_EAkAcousticPortalState                     InitialState;                                              // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YMW[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObstructionRefreshInterval;                                // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              ObstructionCollisionChannel;                               // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3P31[0x87];                                    // 0x0261(0x0087) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkAcousticPortal"));
		return ptr;
	}



	void OpenPortal();
	AkAudio_EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkPortalComponent
// 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
class UAkPortalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_M38B[0x8];                                     // 0x01F8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkPortalComponent"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkAcousticTexture
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UAkAcousticTexture : public UPhysicalMaterial
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkAcousticTexture"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkAmbientSound
// 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                              // 0x0220(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                                AkComponent;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StopWhenOwnerIsDestroyed;                                  // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoPost;                                                  // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0DXB[0x2E];                                    // 0x0232(0x002E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkAmbientSound"));
		return ptr;
	}



	void StopAmbientSound();
	void StartAmbientSound();
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkAudioBank
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAkAudioBank : public UObject
{
public:
	bool                                               AutoLoad;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RV26[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioBank"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkAudioEvent
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAttenuationRadius;                                      // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInfinite;                                                // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XTPP[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDuration;                                           // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumDuration;                                           // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioEvent"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkComponent
// 0x01E4 (FullSize[0x03DC] - InheritedSize[0x01F8])
class UAkComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_RH08[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                     // 0x0200(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EarlyReflectionAuxBusName;                                 // 0x0208(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EarlyReflectionOrder;                                      // 0x0218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EarlyReflectionBusSendGain;                                // 0x021C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EarlyReflectionMaxPathLength;                              // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              OcclusionCollisionChannel;                                 // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_25HA[0x7];                                     // 0x0225(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      EnableSpotReflectors : 1;                                  // 0x022C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZCYG[0x3];                                     // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              roomReverbAuxBusGain;                                      // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                diffractionMaxEdges;                                       // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                diffractionMaxPaths;                                       // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              diffractionMaxPathLength;                                  // 0x023C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawFirstOrderReflections : 1;                             // 0x0240(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawSecondOrderReflections : 1;                            // 0x0240(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawHigherOrderReflections : 1;                            // 0x0240(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawGeometricDiffraction : 1;                              // 0x0240(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawSoundPropagation : 1;                                  // 0x0240(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SGQE[0x3];                                     // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               StopWhenOwnerDestroyed;                                    // 0x0244(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7YZ7[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AttenuationScalingFactor;                                  // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionRefreshInterval;                                  // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AkAudioEvent;                                              // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SCX9[0x174];                                   // 0x0268(0x0174) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkComponent"));
		return ptr;
	}



	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	void Stop();
	void SetUseSpatialAudio(bool bNewValue);
	void SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*> Listeners);
	void SetAttenuationScalingFactor(float Value);
	void PostTrigger(const struct FString& Trigger);
	int PostAssociatedAkEventAndWaitForEnd(const struct FLatentActionInfo& LatentInfo);
	int PostAssociatedAkEvent(int CallbackMask, const struct FScriptDelegate& PostEventCallback);
	int PostAkEventByName(const struct FString& in_EventName);
	int PostAkEventAndWaitForEnd(class UAkAudioEvent* akEvent, const struct FString& in_EventName, const struct FLatentActionInfo& LatentInfo);
	int PostAkEvent(class UAkAudioEvent* akEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, const struct FString& in_EventName);
	float GetAttenuationRadius();
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkAudioInputComponent
// 0x0014 (FullSize[0x03F0] - InheritedSize[0x03DC])
class UAkAudioInputComponent : public UAkComponent
{
public:
	unsigned char                                      UnknownData_2LKV[0x4];                                     // 0x03DC(0x0004) Fix Super Size
	unsigned char                                      UnknownData_9MK8[0x10];                                    // 0x03E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioInputComponent"));
		return ptr;
	}



	int PostAssociatedAudioInputEvent();
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkAuxBus
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZR21[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkAuxBus"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkCheckBox
// 0x0A08 (FullSize[0x0B28] - InheritedSize[0x0120])
class UAkCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData_WHMB[0x398];                                   // 0x0120(0x0398) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	SlateCore_ECheckBoxState                           CheckedState;                                              // 0x04B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F87E[0x3];                                     // 0x04B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CheckedStateDelegate;                                      // 0x04BC(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_298K[0x4];                                     // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCheckBoxStyle                              WidgetStyle;                                               // 0x04D0(0x0580) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0A50(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x0A51(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4NSC[0x6];                                     // 0x0A52(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkBoolPropertyToControl                    ThePropertyToControl;                                      // 0x0A58(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                       ItemToControl;                                             // 0x0A68(0x0040) (Edit, Config, EditConst, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AkOnCheckStateChanged;                                     // 0x0AA8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDropped;                                             // 0x0AB8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                         // 0x0AC8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PVQQ[0x50];                                    // 0x0AD8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkCheckBox"));
		return ptr;
	}



	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(SlateCore_ECheckBoxState InCheckedState);
	void SetAkItemId(const struct FGuid& ItemId);
	void SetAkBoolProperty(const struct FString& ItemProperty);
	bool IsPressed();
	bool IsChecked();
	SlateCore_ECheckBoxState GetCheckedState();
	struct FString GetAkProperty();
	struct FGuid GetAkItemId();
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkGameplayStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkGameplayStatics"));
		return ptr;
	}



	void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	void UnloadBankByName(const struct FString& BankName);
	void UnloadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankUnloadedCallback);
	void UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	void StopProfilerCapture();
	void StopOutputCapture();
	void StopAllAmbientSounds(class UObject* WorldContextObject);
	void StopAll();
	void StopActor(class AActor* Actor);
	void StartProfilerCapture(const struct FString& Filename);
	void StartOutputCapture(const struct FString& Filename);
	void StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* akEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy);
	void SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
	void SetState(const struct FName& StateGroup, const struct FName& State);
	void SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const struct FString& DeviceShareset);
	void SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
	void SetPanningRule(AkAudio_EPanningRule PanRule);
	void SetOutputBusVolume(float BusVolume, class AActor* Actor);
	void SetOcclusionScalingFactor(float ScalingFactor);
	void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType);
	void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkAudio_EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType);
	void SetBusConfig(const struct FString& BusName, AkAudio_EAkChannelConfiguration ChannelConfiguration);
	void PostTrigger(const struct FName& Trigger, class AActor* Actor);
	void PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	int PostEventAttached(class UAkAudioEvent* akEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	int PostEventAtLocation(class UAkAudioEvent* akEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject);
	int PostEvent(class UAkAudioEvent* akEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	int PostAndWaitForEndOfEvent(class UAkAudioEvent* akEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName, const struct FLatentActionInfo& LatentInfo);
	void LoadInitBank();
	void LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	void LoadBankByName(const struct FString& BankName);
	void LoadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankLoadedCallback);
	void LoadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	bool IsGame(class UObject* WorldContextObject);
	bool IsEditor();
	void GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const struct FString& DeviceShareset);
	float GetOcclusionScalingFactor();
	class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType);
	void ExecuteActionOnEvent(class UAkAudioEvent* akEvent, AkAudio_EAkActionOnEventType ActionType, class AActor* Actor, int TransitionDuration, AkAudio_EAkCurveInterpolation FadeCurve, int PlayingID);
	void ClearBanks();
	void CancelEventCallback(const struct FScriptDelegate& PostEventCallback);
	void AddOutputCaptureMarker(const struct FString& MarkerText);
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkCallbackInfo
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                                AkComponent;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkCallbackInfo"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkEventCallbackInfo
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventId;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkEventCallbackInfo"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkMIDIEventCallbackInfo
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	unsigned char                                      UnknownData_8GH1[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkMIDIEventCallbackInfo"));
		return ptr;
	}



	AkAudio_EAkMidiEventType GetType();
	bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
	bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
	bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
	bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
	unsigned char GetChannel();
	bool GetCc(struct FAkMidiCc* AsCc);
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkMarkerCallbackInfo
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int                                                Identifier;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                position;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Label;                                                     // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkMarkerCallbackInfo"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkDurationCallbackInfo
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                              Duration;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EstimatedDuration;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AudioNodeID;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MediaID;                                                   // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStreaming;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VG10[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkDurationCallbackInfo"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkMusicSyncCallbackInfo
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkSegmentInfo                              SegmentInfo;                                               // 0x0034(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	AkAudio_EAkCallbackType                            MusicSyncType;                                             // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3JJU[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UserCueName;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkMusicSyncCallbackInfo"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkItemBoolPropertiesConv"));
		return ptr;
	}



	struct FText Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
	struct FString Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkItemBoolProperties
// 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
class UAkItemBoolProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                         // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ZU3[0x20];                                    // 0x0128(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkItemBoolProperties"));
		return ptr;
	}



	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkItemPropertiesConv
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkItemPropertiesConv"));
		return ptr;
	}



	struct FText Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
	struct FString Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkItemProperties
// 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
class UAkItemProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                         // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MOM4[0x20];                                    // 0x0128(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkItemProperties"));
		return ptr;
	}



	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkLateReverbComponent
// 0x0040 (FullSize[0x0238] - InheritedSize[0x01F8])
class UAkLateReverbComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_G80D[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	class UAkAuxBus*                                   AuxBus;                                                    // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                 // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeRate;                                                  // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Priority;                                                  // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_57XU[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkLateReverbComponent*                      NextLowerPriorityComponent;                                // 0x0228(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PLLK[0x8];                                     // 0x0230(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkLateReverbComponent"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkReverbVolume
// 0x0038 (FullSize[0x0290] - InheritedSize[0x0258])
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                              // 0x0258(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7T09[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAuxBus*                                   AuxBus;                                                    // 0x0260(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // 0x0268(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                 // 0x0278(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeRate;                                                  // 0x027C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Priority;                                                  // 0x0280(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_59TI[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkLateReverbComponent*                      LateReverbComponent;                                       // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkReverbVolume"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkRoomComponent
// 0x0028 (FullSize[0x0220] - InheritedSize[0x01F8])
class UAkRoomComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_0DGJ[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	class UAkRoomComponent*                            NextLowerPriorityComponent;                                // 0x0200(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Priority;                                                  // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WallOcclusion;                                             // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OREC[0x10];                                    // 0x0210(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkRoomComponent"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkSettings
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                              // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1R9P[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFilePath                                   WwiseProjectPath;                                          // 0x0030(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              WwiseSoundBankFolder;                                      // 0x0040(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bAutoConnectToWAAPI;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableMultiCoreRendering;                                 // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              DefaultOcclusionCollisionChannel;                          // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DMJ2[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                              // 0x0058(0x0010) (Config, Deprecated, NativeAccessSpecifierPublic)
	struct FFilePath                                   WwiseMacInstallationPath;                                  // 0x0068(0x0010) (Config, Deprecated, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SL7Y[0x30];                                    // 0x0078(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkSettings"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkSettingsPerUser
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                              // 0x0028(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   WwiseMacInstallationPath;                                  // 0x0038(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               SuppressWwiseProjectPathWarnings;                          // 0x0048(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJ8U[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkSettingsPerUser"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkSlider
// 0x0428 (FullSize[0x0530] - InheritedSize[0x0108])
class UAkSlider : public UWidget
{
public:
	float                                              Value;                                                     // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x010C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PBER[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSliderStyle                                WidgetStyle;                                               // 0x0120(0x0340) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WQD[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SliderBarColor;                                            // 0x0464(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                         // 0x0474(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                              // 0x0484(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // 0x0485(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HPIU[0x2];                                     // 0x0486(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StepSize;                                                  // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x048C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QL9Y[0x3];                                     // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkPropertyToControl                        ThePropertyToControl;                                      // 0x0490(0x0010) (Edit, EditConst, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                       ItemToControl;                                             // 0x04A0(0x0040) (Edit, Config, EditConst, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x04E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDropped;                                             // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                         // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HR5V[0x20];                                    // 0x0510(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkSlider"));
		return ptr;
	}



	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void SetAkSliderItemProperty(const struct FString& ItemProperty);
	void SetAkSliderItemId(const struct FGuid& ItemId);
	float GetValue();
	struct FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkSpatialAudioVolume
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                       // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkLateReverbComponent*                      LateReverb;                                                // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRoomComponent*                            Room;                                                      // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkSpatialAudioVolume"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkSpotReflector
// 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                                   AuxBus;                                                    // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAcousticTexture*                          AcousticTexture;                                           // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceScalingFactor;                                     // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V7PG[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkSpotReflector"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0038 (FullSize[0x0230] - InheritedSize[0x01F8])
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_VO15[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	TArray<struct FAkPoly>                             AcousticPolys;                                             // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffraction : 1;                                    // 0x0210(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                     // 0x0210(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_14EG[0x1F];                                    // 0x0211(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkSurfaceReflectorSetComponent"));
		return ptr;
	}



	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkWaapiCalls
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkWaapiCalls"));
		return ptr;
	}



	struct FAKWaapiJsonObject Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
	struct FAKWaapiJsonObject SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	void SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int ID);
	bool RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& Callback);
	bool RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& Callback);
	int GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
	struct FText Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct FString Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct FAKWaapiJsonObject CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.SAkWaapiFieldNamesConv"));
		return ptr;
	}



	struct FText Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
	struct FString Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkWaapiJsonManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkWaapiJsonManager"));
		return ptr;
	}



	struct FAKWaapiJsonObject SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target);
	struct FString GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	float GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	int GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	bool GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	TArray<struct FAKWaapiJsonObject> GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	struct FText Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	struct FString Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkWaapiUriConv
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkWaapiUriConv"));
		return ptr;
	}



	struct FText Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
	struct FString Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkWwiseTree
// 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
class UAkWwiseTree : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDragged;                                             // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R1UV[0x20];                                    // 0x0128(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkWwiseTree"));
		return ptr;
	}



	void SetSearchText(const struct FString& newText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	struct FString GetSearchText();
	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.AkWwiseTreeSelector
// 0x0060 (FullSize[0x0168] - InheritedSize[0x0108])
class UAkWwiseTreeSelector : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDragged;                                             // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SI4H[0x40];                                    // 0x0128(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.AkWwiseTreeSelector"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                    // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                            // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4KKD[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackAkAudioEvent"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                     // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPlayOnReverse : 1;                                        // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                             // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MRUK[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackAkAudioRTPC"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_98GV[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackInstAkAudioEvent"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_87E8[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackInstAkAudioRTPC"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.MovieSceneAkAudioEventSection
// 0x00E8 (FullSize[0x01D0] - InheritedSize[0x00E8])
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_J17R[0x40];                                    // 0x00E8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               Event;                                                     // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               RetriggerEvent;                                            // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GV89[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ScrubTailLengthMs;                                         // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               StopAtSectionEnd;                                          // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HEAU[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EventName;                                                 // 0x0140(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J2S4[0x20];                                    // 0x0150(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxSourceDuration;                                         // 0x0170(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8S7I[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MaxDurationSourceID;                                       // 0x0178(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R4W4[0x48];                                    // 0x0188(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioEventSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.MovieSceneAkTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bIsAMasterTrack : 1;                                       // 0x0088(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8IWK[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioEventTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0160 (FullSize[0x0248] - InheritedSize[0x00E8])
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	struct FString                                     Name;                                                      // 0x00E8(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRichCurve                                  FloatCurve;                                                // 0x00F8(0x0080) (Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannelSerializationHelper  FloatChannelSerializationHelper;                           // 0x0178(0x0030) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8ESO[0xA0];                                    // 0x01A8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioRTPCSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioRTPCTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
