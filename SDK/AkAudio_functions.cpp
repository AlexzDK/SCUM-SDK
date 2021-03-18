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

void FAKWaapiJsonObject::AfterRead()
{
}

void FAKWaapiJsonObject::BeforeDelete()
{
}

void FAkWaapiSubscriptionId::AfterRead()
{
}

void FAkWaapiSubscriptionId::BeforeDelete()
{
}

void FAkAmbSoundCheckpointRecord::AfterRead()
{
}

void FAkAmbSoundCheckpointRecord::BeforeDelete()
{
}

void FAkSegmentInfo::AfterRead()
{
}

void FAkSegmentInfo::BeforeDelete()
{
}

void FAkMidiEventBase::AfterRead()
{
}

void FAkMidiEventBase::BeforeDelete()
{
}

void FAkMidiProgramChange::AfterRead()
{
	FAkMidiEventBase::AfterRead();

}

void FAkMidiProgramChange::BeforeDelete()
{
	FAkMidiEventBase::BeforeDelete();

}

void FAkMidiChannelAftertouch::AfterRead()
{
	FAkMidiEventBase::AfterRead();

}

void FAkMidiChannelAftertouch::BeforeDelete()
{
	FAkMidiEventBase::BeforeDelete();

}

void FAkMidiNoteAftertouch::AfterRead()
{
	FAkMidiEventBase::AfterRead();

}

void FAkMidiNoteAftertouch::BeforeDelete()
{
	FAkMidiEventBase::BeforeDelete();

}

void FAkMidiPitchBend::AfterRead()
{
	FAkMidiEventBase::AfterRead();

}

void FAkMidiPitchBend::BeforeDelete()
{
	FAkMidiEventBase::BeforeDelete();

}

void FAkMidiCc::AfterRead()
{
	FAkMidiEventBase::AfterRead();

}

void FAkMidiCc::BeforeDelete()
{
	FAkMidiEventBase::BeforeDelete();

}

void FAkMidiNoteOnOff::AfterRead()
{
	FAkMidiEventBase::AfterRead();

}

void FAkMidiNoteOnOff::BeforeDelete()
{
	FAkMidiEventBase::BeforeDelete();

}

void FAkMidiGeneric::AfterRead()
{
	FAkMidiEventBase::AfterRead();

}

void FAkMidiGeneric::BeforeDelete()
{
	FAkMidiEventBase::BeforeDelete();

}

void FAkPoly::AfterRead()
{
	READ_PTR_FULL(Texture, UAkAcousticTexture);
}

void FAkPoly::BeforeDelete()
{
	DELE_PTR_FULL(Texture);
}

void FAkWaapiFieldNames::AfterRead()
{
}

void FAkWaapiFieldNames::BeforeDelete()
{
}

void FAkWaapiUri::AfterRead()
{
}

void FAkWaapiUri::BeforeDelete()
{
}

void FAkAudioEventTrackKey::AfterRead()
{
	READ_PTR_FULL(AkAudioEvent, UAkAudioEvent);
}

void FAkAudioEventTrackKey::BeforeDelete()
{
	DELE_PTR_FULL(AkAudioEvent);
}

void FMovieSceneAkAudioEventTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

	READ_PTR_FULL(Section, UMovieSceneAkAudioEventSection);
}

void FMovieSceneAkAudioEventTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

	DELE_PTR_FULL(Section);
}

void FMovieSceneAkAudioRTPCTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

	READ_PTR_FULL(Section, UMovieSceneAkAudioRTPCSection);
}

void FMovieSceneAkAudioRTPCTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

	DELE_PTR_FULL(Section);
}

void FMovieSceneTangentDataSerializationHelper::AfterRead()
{
}

void FMovieSceneTangentDataSerializationHelper::BeforeDelete()
{
}

void FMovieSceneFloatValueSerializationHelper::AfterRead()
{
}

void FMovieSceneFloatValueSerializationHelper::BeforeDelete()
{
}

void FMovieSceneFloatChannelSerializationHelper::AfterRead()
{
}

void FMovieSceneFloatChannelSerializationHelper::BeforeDelete()
{
}

void FAkPropertyToControl::AfterRead()
{
}

void FAkPropertyToControl::BeforeDelete()
{
}

void FAkWwiseObjectDetails::AfterRead()
{
}

void FAkWwiseObjectDetails::BeforeDelete()
{
}

void FAkWwiseItemToControl::AfterRead()
{
}

void FAkWwiseItemToControl::BeforeDelete()
{
}

void FAkBoolPropertyToControl::AfterRead()
{
}

void FAkBoolPropertyToControl::BeforeDelete()
{
}

// Function AkAudio.AkAcousticPortal.OpenPortal
// ()
void AAkAcousticPortal::OpenPortal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAcousticPortal.OpenPortal"));

	AAkAcousticPortal_OpenPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkAcousticPortal.GetCurrentState
// ()
// Parameters:
// AkAudio_EAkAcousticPortalState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AkAudio_EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAcousticPortal.GetCurrentState"));

	AAkAcousticPortal_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkAcousticPortal.ClosePortal
// ()
void AAkAcousticPortal::ClosePortal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAcousticPortal.ClosePortal"));

	AAkAcousticPortal_ClosePortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAkAcousticPortal::AfterRead()
{
	AVolume::AfterRead();

}

void AAkAcousticPortal::BeforeDelete()
{
	AVolume::BeforeDelete();

}

void UAkPortalComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UAkPortalComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

void UAkAcousticTexture::AfterRead()
{
	UPhysicalMaterial::AfterRead();

}

void UAkAcousticTexture::BeforeDelete()
{
	UPhysicalMaterial::BeforeDelete();

}

// Function AkAudio.AkAmbientSound.StopAmbientSound
// ()
void AAkAmbientSound::StopAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StopAmbientSound"));

	AAkAmbientSound_StopAmbientSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkAmbientSound.StartAmbientSound
// ()
void AAkAmbientSound::StartAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StartAmbientSound"));

	AAkAmbientSound_StartAmbientSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAkAmbientSound::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(AkAudioEvent, UAkAudioEvent);
	READ_PTR_FULL(AkComponent, UAkComponent);
}

void AAkAmbientSound::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(AkAudioEvent);
	DELE_PTR_FULL(AkComponent);
}

void UAkAudioBank::AfterRead()
{
	UObject::AfterRead();

}

void UAkAudioBank::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAkAudioEvent::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RequiredBank, UAkAudioBank);
}

void UAkAudioEvent::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RequiredBank);
}

// Function AkAudio.AkComponent.UseReverbVolumes
// ()
// Parameters:
// bool                           inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseReverbVolumes"));

	UAkComponent_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.UseEarlyReflections
// ()
// Parameters:
// class UAkAuxBus*               AuxBus                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Order                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BusSendGain                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SpotReflectors                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuxBusName                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseEarlyReflections"));

	UAkComponent_UseEarlyReflections_Params params;
	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.Stop
// ()
void UAkComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.Stop"));

	UAkComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetUseSpatialAudio
// ()
// Parameters:
// bool                           bNewValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetUseSpatialAudio(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetUseSpatialAudio"));

	UAkComponent_SetUseSpatialAudio_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetSwitch
// ()
// Parameters:
// struct FString                 SwitchGroup                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SwitchState                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetSwitch"));

	UAkComponent_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// ()
// Parameters:
// bool                           bStopWhenOwnerDestroyed        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed"));

	UAkComponent_SetStopWhenOwnerDestroyed_Params params;
	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetRTPCValue
// ()
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetRTPCValue"));

	UAkComponent_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetOutputBusVolume
// ()
// Parameters:
// float                          BusVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetOutputBusVolume"));

	UAkComponent_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetListeners
// ()
// Parameters:
// TArray<class UAkComponent*>    Listeners                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UAkComponent::SetListeners(TArray<class UAkComponent*> Listeners)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetListeners"));

	UAkComponent_SetListeners_Params params;
	params.Listeners = Listeners;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetAttenuationScalingFactor"));

	UAkComponent_SetAttenuationScalingFactor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.PostTrigger
// ()
// Parameters:
// struct FString                 Trigger                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::PostTrigger(const struct FString& Trigger)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostTrigger"));

	UAkComponent_PostTrigger_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
// ()
// Parameters:
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAssociatedAkEventAndWaitForEnd(const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd"));

	UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params params;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAssociatedAkEvent
// ()
// Parameters:
// int                            CallbackMask                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAssociatedAkEvent(int CallbackMask, const struct FScriptDelegate& PostEventCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAssociatedAkEvent"));

	UAkComponent_PostAssociatedAkEvent_Params params;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventByName
// ()
// Parameters:
// struct FString                 in_EventName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAkEventByName(const struct FString& in_EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEventByName"));

	UAkComponent_PostAkEventByName_Params params;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
// ()
// Parameters:
// class UAkAudioEvent*           akEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 in_EventName                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent* akEvent, const struct FString& in_EventName, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd"));

	UAkComponent_PostAkEventAndWaitForEnd_Params params;
	params.akEvent = akEvent;
	params.in_EventName = in_EventName;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEvent
// ()
// Parameters:
// class UAkAudioEvent*           akEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CallbackMask                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FString                 in_EventName                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAkEvent(class UAkAudioEvent* akEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, const struct FString& in_EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEvent"));

	UAkComponent_PostAkEvent_Params params;
	params.akEvent = akEvent;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetAttenuationRadius
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkComponent::GetAttenuationRadius()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.GetAttenuationRadius"));

	UAkComponent_GetAttenuationRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(EarlyReflectionAuxBus, UAkAuxBus);
	READ_PTR_FULL(AkAudioEvent, UAkAudioEvent);
}

void UAkComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(EarlyReflectionAuxBus);
	DELE_PTR_FULL(AkAudioEvent);
}

// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkAudioInputComponent::PostAssociatedAudioInputEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent"));

	UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkAudioInputComponent::AfterRead()
{
	UAkComponent::AfterRead();

}

void UAkAudioInputComponent::BeforeDelete()
{
	UAkComponent::BeforeDelete();

}

void UAkAuxBus::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RequiredBank, UAkAudioBank);
}

void UAkAuxBus::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RequiredBank);
}

// Function AkAudio.AkCheckBox.SetIsChecked
// ()
// Parameters:
// bool                           InIsChecked                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetIsChecked(bool InIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetIsChecked"));

	UAkCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkCheckBox.SetCheckedState
// ()
// Parameters:
// SlateCore_ECheckBoxState       InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetCheckedState(SlateCore_ECheckBoxState InCheckedState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetCheckedState"));

	UAkCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkCheckBox.SetAkItemId
// ()
// Parameters:
// struct FGuid                   ItemId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetAkItemId(const struct FGuid& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetAkItemId"));

	UAkCheckBox_SetAkItemId_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkCheckBox.SetAkBoolProperty
// ()
// Parameters:
// struct FString                 ItemProperty                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetAkBoolProperty(const struct FString& ItemProperty)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetAkBoolProperty"));

	UAkCheckBox_SetAkBoolProperty_Params params;
	params.ItemProperty = ItemProperty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkCheckBox.IsPressed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkCheckBox::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.IsPressed"));

	UAkCheckBox_IsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.IsChecked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkCheckBox::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.IsChecked"));

	UAkCheckBox_IsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetCheckedState
// ()
// Parameters:
// SlateCore_ECheckBoxState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UAkCheckBox::GetCheckedState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.GetCheckedState"));

	UAkCheckBox_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetAkProperty
// ()
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkCheckBox::GetAkProperty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.GetAkProperty"));

	UAkCheckBox_GetAkProperty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetAkItemId
// ()
// Parameters:
// struct FGuid                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGuid UAkCheckBox::GetAkItemId()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.GetAkItemId"));

	UAkCheckBox_GetAkItemId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkCheckBox::AfterRead()
{
	UContentWidget::AfterRead();

}

void UAkCheckBox::BeforeDelete()
{
	UContentWidget::BeforeDelete();

}

// Function AkAudio.AkGameplayStatics.UseReverbVolumes
// ()
// Parameters:
// bool                           inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UseReverbVolumes"));

	UAkGameplayStatics_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.UseEarlyReflections
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAuxBus*               AuxBus                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Order                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BusSendGain                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SpotReflectors                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuxBusName                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UseEarlyReflections"));

	UAkGameplayStatics_UseEarlyReflections_Params params;
	params.Actor = Actor;
	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.UnloadBankByName
// ()
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::UnloadBankByName(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UnloadBankByName"));

	UAkGameplayStatics_UnloadBankByName_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.UnloadBankAsync
// ()
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         BankUnloadedCallback           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAkGameplayStatics::UnloadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankUnloadedCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UnloadBankAsync"));

	UAkGameplayStatics_UnloadBankAsync_Params params;
	params.Bank = Bank;
	params.BankUnloadedCallback = BankUnloadedCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.UnloadBank
// ()
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BankName                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UnloadBank"));

	UAkGameplayStatics_UnloadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StopProfilerCapture
// ()
void UAkGameplayStatics::StopProfilerCapture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopProfilerCapture"));

	UAkGameplayStatics_StopProfilerCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StopOutputCapture
// ()
void UAkGameplayStatics::StopOutputCapture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopOutputCapture"));

	UAkGameplayStatics_StopOutputCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::StopAllAmbientSounds(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds"));

	UAkGameplayStatics_StopAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StopAll
// ()
void UAkGameplayStatics::StopAll()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopAll"));

	UAkGameplayStatics_StopAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StopActor
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::StopActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopActor"));

	UAkGameplayStatics_StopActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// ()
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::StartProfilerCapture(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StartProfilerCapture"));

	UAkGameplayStatics_StartProfilerCapture_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StartOutputCapture
// ()
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::StartOutputCapture(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StartOutputCapture"));

	UAkGameplayStatics_StartOutputCapture_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::StartAllAmbientSounds(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds"));

	UAkGameplayStatics_StartAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           akEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAuxBus*               EarlyReflectionsBus            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           AutoPost                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EarlyReflectionsBusName        (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AutoDestroy                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* akEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation"));

	UAkGameplayStatics_SpawnAkComponentAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.akEvent = akEvent;
	params.EarlyReflectionsBus = EarlyReflectionsBus;
	params.Location = Location;
	params.Orientation = Orientation;
	params.AutoPost = AutoPost;
	params.EventName = EventName;
	params.EarlyReflectionsBusName = EarlyReflectionsBusName;
	params.AutoDestroy = AutoDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.SetSwitch
// ()
// Parameters:
// struct FName                   SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SwitchState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetSwitch"));

	UAkGameplayStatics_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetState
// ()
// Parameters:
// struct FName                   StateGroup                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetState(const struct FName& StateGroup, const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetState"));

	UAkGameplayStatics_SetState_Params params;
	params.StateGroup = StateGroup;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetSpeakerAngles
// ()
// Parameters:
// TArray<float>                  SpeakerAngles                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                          HeightAngle                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceShareset                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const struct FString& DeviceShareset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetSpeakerAngles"));

	UAkGameplayStatics_SetSpeakerAngles_Params params;
	params.SpeakerAngles = SpeakerAngles;
	params.HeightAngle = HeightAngle;
	params.DeviceShareset = DeviceShareset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetRTPCValue
// ()
// Parameters:
// struct FName                   RTPC                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetRTPCValue"));

	UAkGameplayStatics_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetPanningRule
// ()
// Parameters:
// AkAudio_EPanningRule           PanRule                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetPanningRule(AkAudio_EPanningRule PanRule)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetPanningRule"));

	UAkGameplayStatics_SetPanningRule_Params params;
	params.PanRule = PanRule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
// ()
// Parameters:
// float                          BusVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetOutputBusVolume"));

	UAkGameplayStatics_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
// ()
// Parameters:
// float                          ScalingFactor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor"));

	UAkGameplayStatics_SetOcclusionScalingFactor_Params params;
	params.ScalingFactor = ScalingFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
// ()
// Parameters:
// float                          RefreshInterval                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval"));

	UAkGameplayStatics_SetOcclusionRefreshInterval_Params params;
	params.RefreshInterval = RefreshInterval;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetMultiplePositions
// ()
// Parameters:
// class UAkComponent*            GameObjectAkComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Positions                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// AkAudio_EAkMultiPositionType   MultiPositionType              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetMultiplePositions"));

	UAkGameplayStatics_SetMultiplePositions_Params params;
	params.GameObjectAkComponent = GameObjectAkComponent;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
// ()
// Parameters:
// class UAkComponent*            GameObjectAkComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<AkAudio_EAkChannelConfiguration> ChannelMasks                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Positions                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// AkAudio_EAkMultiPositionType   MultiPositionType              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkAudio_EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions"));

	UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params params;
	params.GameObjectAkComponent = GameObjectAkComponent;
	params.ChannelMasks = ChannelMasks;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.SetBusConfig
// ()
// Parameters:
// struct FString                 BusName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_EAkChannelConfiguration ChannelConfiguration           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::SetBusConfig(const struct FString& BusName, AkAudio_EAkChannelConfiguration ChannelConfiguration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetBusConfig"));

	UAkGameplayStatics_SetBusConfig_Params params;
	params.BusName = BusName;
	params.ChannelConfiguration = ChannelConfiguration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.PostTrigger
// ()
// Parameters:
// struct FName                   Trigger                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::PostTrigger(const struct FName& Trigger, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostTrigger"));

	UAkGameplayStatics_PostTrigger_Params params;
	params.Trigger = Trigger;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.PostEventByName
// ()
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventByName"));

	UAkGameplayStatics_PostEventByName_Params params;
	params.EventName = EventName;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.PostEventAttached
// ()
// Parameters:
// class UAkAudioEvent*           akEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::PostEventAttached(class UAkAudioEvent* akEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventAttached"));

	UAkGameplayStatics_PostEventAttached_Params params;
	params.akEvent = akEvent;
	params.Actor = Actor;
	params.AttachPointName = AttachPointName;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
// ()
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName"));

	UAkGameplayStatics_PostEventAtLocationByName_Params params;
	params.EventName = EventName;
	params.Location = Location;
	params.Orientation = Orientation;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.PostEventAtLocation
// ()
// Parameters:
// class UAkAudioEvent*           akEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::PostEventAtLocation(class UAkAudioEvent* akEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventAtLocation"));

	UAkGameplayStatics_PostEventAtLocation_Params params;
	params.akEvent = akEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEvent
// ()
// Parameters:
// class UAkAudioEvent*           akEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::PostEvent(class UAkAudioEvent* akEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEvent"));

	UAkGameplayStatics_PostEvent_Params params;
	params.akEvent = akEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
// ()
// Parameters:
// class UAkAudioEvent*           akEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventName                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::PostAndWaitForEndOfEvent(class UAkAudioEvent* akEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent"));

	UAkGameplayStatics_PostAndWaitForEndOfEvent_Params params;
	params.akEvent = akEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.LoadInitBank
// ()
void UAkGameplayStatics::LoadInitBank()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadInitBank"));

	UAkGameplayStatics_LoadInitBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.LoadBanks
// ()
// Parameters:
// TArray<class UAkAudioBank*>    SoundBanks                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           SynchronizeSoundBanks          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBanks"));

	UAkGameplayStatics_LoadBanks_Params params;
	params.SoundBanks = SoundBanks;
	params.SynchronizeSoundBanks = SynchronizeSoundBanks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.LoadBankByName
// ()
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::LoadBankByName(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBankByName"));

	UAkGameplayStatics_LoadBankByName_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.LoadBankAsync
// ()
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         BankLoadedCallback             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAkGameplayStatics::LoadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankLoadedCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBankAsync"));

	UAkGameplayStatics_LoadBankAsync_Params params;
	params.Bank = Bank;
	params.BankLoadedCallback = BankLoadedCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.LoadBank
// ()
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 BankName                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::LoadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBank"));

	UAkGameplayStatics_LoadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.IsGame
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkGameplayStatics::IsGame(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.IsGame"));

	UAkGameplayStatics_IsGame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.IsEditor
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkGameplayStatics::IsEditor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.IsEditor"));

	UAkGameplayStatics_IsEditor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetSpeakerAngles
// ()
// Parameters:
// TArray<float>                  SpeakerAngles                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                          HeightAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceShareset                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const struct FString& DeviceShareset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetSpeakerAngles"));

	UAkGameplayStatics_GetSpeakerAngles_Params params;
	params.DeviceShareset = DeviceShareset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpeakerAngles != nullptr)
		*SpeakerAngles = params.SpeakerAngles;
	if (HeightAngle != nullptr)
		*HeightAngle = params.HeightAngle;

}


// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkGameplayStatics::GetOcclusionScalingFactor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor"));

	UAkGameplayStatics_GetOcclusionScalingFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetAkComponent
// ()
// Parameters:
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EAttachLocation> LocationType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkComponent* UAkGameplayStatics::GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetAkComponent"));

	UAkGameplayStatics_GetAkComponent_Params params;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
// ()
// Parameters:
// class UAkAudioEvent*           akEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_EAkActionOnEventType   ActionType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AkAudio_EAkCurveInterpolation  FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::ExecuteActionOnEvent(class UAkAudioEvent* akEvent, AkAudio_EAkActionOnEventType ActionType, class AActor* Actor, int TransitionDuration, AkAudio_EAkCurveInterpolation FadeCurve, int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent"));

	UAkGameplayStatics_ExecuteActionOnEvent_Params params;
	params.akEvent = akEvent;
	params.ActionType = ActionType;
	params.Actor = Actor;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.ClearBanks
// ()
void UAkGameplayStatics::ClearBanks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.ClearBanks"));

	UAkGameplayStatics_ClearBanks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.CancelEventCallback
// ()
// Parameters:
// struct FScriptDelegate         PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAkGameplayStatics::CancelEventCallback(const struct FScriptDelegate& PostEventCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.CancelEventCallback"));

	UAkGameplayStatics_CancelEventCallback_Params params;
	params.PostEventCallback = PostEventCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// ()
// Parameters:
// struct FString                 MarkerText                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::AddOutputCaptureMarker(const struct FString& MarkerText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker"));

	UAkGameplayStatics_AddOutputCaptureMarker_Params params;
	params.MarkerText = MarkerText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAkGameplayStatics::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAkGameplayStatics::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UAkCallbackInfo::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(AkComponent, UAkComponent);
}

void UAkCallbackInfo::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(AkComponent);
}

void UAkEventCallbackInfo::AfterRead()
{
	UAkCallbackInfo::AfterRead();

}

void UAkEventCallbackInfo::BeforeDelete()
{
	UAkCallbackInfo::BeforeDelete();

}

// Function AkAudio.AkMIDIEventCallbackInfo.GetType
// ()
// Parameters:
// AkAudio_EAkMidiEventType       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AkAudio_EAkMidiEventType UAkMIDIEventCallbackInfo::GetType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetType"));

	UAkMIDIEventCallbackInfo_GetType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
// ()
// Parameters:
// struct FAkMidiProgramChange    AsProgramChange                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange* AsProgramChange)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange"));

	UAkMIDIEventCallbackInfo_GetProgramChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsProgramChange != nullptr)
		*AsProgramChange = params.AsProgramChange;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
// ()
// Parameters:
// struct FAkMidiPitchBend        AsPitchBend                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend* AsPitchBend)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend"));

	UAkMIDIEventCallbackInfo_GetPitchBend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsPitchBend != nullptr)
		*AsPitchBend = params.AsPitchBend;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
// ()
// Parameters:
// struct FAkMidiNoteOnOff        AsNoteOn                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn"));

	UAkMIDIEventCallbackInfo_GetNoteOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsNoteOn != nullptr)
		*AsNoteOn = params.AsNoteOn;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
// ()
// Parameters:
// struct FAkMidiNoteOnOff        AsNoteOff                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff"));

	UAkMIDIEventCallbackInfo_GetNoteOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsNoteOff != nullptr)
		*AsNoteOff = params.AsNoteOff;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
// ()
// Parameters:
// struct FAkMidiNoteAftertouch   AsNoteAftertouch               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch"));

	UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsNoteAftertouch != nullptr)
		*AsNoteAftertouch = params.AsNoteAftertouch;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
// ()
// Parameters:
// struct FAkMidiGeneric          AsGeneric                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric* AsGeneric)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric"));

	UAkMIDIEventCallbackInfo_GetGeneric_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGeneric != nullptr)
		*AsGeneric = params.AsGeneric;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
// ()
// Parameters:
// struct FAkMidiChannelAftertouch AsChannelAftertouch            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch"));

	UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsChannelAftertouch != nullptr)
		*AsChannelAftertouch = params.AsChannelAftertouch;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UAkMIDIEventCallbackInfo::GetChannel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetChannel"));

	UAkMIDIEventCallbackInfo_GetChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
// ()
// Parameters:
// struct FAkMidiCc               AsCc                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc* AsCc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetCc"));

	UAkMIDIEventCallbackInfo_GetCc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsCc != nullptr)
		*AsCc = params.AsCc;


	return params.ReturnValue;
}


void UAkMIDIEventCallbackInfo::AfterRead()
{
	UAkEventCallbackInfo::AfterRead();

}

void UAkMIDIEventCallbackInfo::BeforeDelete()
{
	UAkEventCallbackInfo::BeforeDelete();

}

void UAkMarkerCallbackInfo::AfterRead()
{
	UAkEventCallbackInfo::AfterRead();

}

void UAkMarkerCallbackInfo::BeforeDelete()
{
	UAkEventCallbackInfo::BeforeDelete();

}

void UAkDurationCallbackInfo::AfterRead()
{
	UAkEventCallbackInfo::AfterRead();

}

void UAkDurationCallbackInfo::BeforeDelete()
{
	UAkEventCallbackInfo::BeforeDelete();

}

void UAkMusicSyncCallbackInfo::AfterRead()
{
	UAkCallbackInfo::AfterRead();

}

void UAkMusicSyncCallbackInfo::BeforeDelete()
{
	UAkCallbackInfo::BeforeDelete();

}

// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
// ()
// Parameters:
// struct FAkBoolPropertyToControl INAkBoolPropertyToControl      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText"));

	UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params params;
	params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
// ()
// Parameters:
// struct FAkBoolPropertyToControl INAkBoolPropertyToControl      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString"));

	UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params params;
	params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkItemBoolPropertiesConv::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAkItemBoolPropertiesConv::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function AkAudio.AkItemBoolProperties.SetSearchText
// ()
// Parameters:
// struct FString                 newText                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkItemBoolProperties::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolProperties.SetSearchText"));

	UAkItemBoolProperties_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemBoolProperties::GetSelectedProperty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolProperties.GetSelectedProperty"));

	UAkItemBoolProperties_GetSelectedProperty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolProperties.GetSearchText
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemBoolProperties::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolProperties.GetSearchText"));

	UAkItemBoolProperties_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkItemBoolProperties::AfterRead()
{
	UWidget::AfterRead();

}

void UAkItemBoolProperties::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
// ()
// Parameters:
// struct FAkPropertyToControl    INAkPropertyToControl          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText"));

	UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params params;
	params.INAkPropertyToControl = INAkPropertyToControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
// ()
// Parameters:
// struct FAkPropertyToControl    INAkPropertyToControl          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString"));

	UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params params;
	params.INAkPropertyToControl = INAkPropertyToControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkItemPropertiesConv::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAkItemPropertiesConv::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function AkAudio.AkItemProperties.SetSearchText
// ()
// Parameters:
// struct FString                 newText                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkItemProperties::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemProperties.SetSearchText"));

	UAkItemProperties_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkItemProperties.GetSelectedProperty
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemProperties::GetSelectedProperty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemProperties.GetSelectedProperty"));

	UAkItemProperties_GetSelectedProperty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkItemProperties.GetSearchText
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemProperties::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemProperties.GetSearchText"));

	UAkItemProperties_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkItemProperties::AfterRead()
{
	UWidget::AfterRead();

}

void UAkItemProperties::BeforeDelete()
{
	UWidget::BeforeDelete();

}

void UAkLateReverbComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(AuxBus, UAkAuxBus);
	READ_PTR_FULL(NextLowerPriorityComponent, UAkLateReverbComponent);
}

void UAkLateReverbComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(AuxBus);
	DELE_PTR_FULL(NextLowerPriorityComponent);
}

void AAkReverbVolume::AfterRead()
{
	AVolume::AfterRead();

	READ_PTR_FULL(AuxBus, UAkAuxBus);
	READ_PTR_FULL(LateReverbComponent, UAkLateReverbComponent);
}

void AAkReverbVolume::BeforeDelete()
{
	AVolume::BeforeDelete();

	DELE_PTR_FULL(AuxBus);
	DELE_PTR_FULL(LateReverbComponent);
}

void UAkRoomComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(NextLowerPriorityComponent, UAkRoomComponent);
}

void UAkRoomComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(NextLowerPriorityComponent);
}

void UAkSettings::AfterRead()
{
	UObject::AfterRead();

}

void UAkSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAkSettingsPerUser::AfterRead()
{
	UObject::AfterRead();

}

void UAkSettingsPerUser::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function AkAudio.AkSlider.SetValue
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetValue"));

	UAkSlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetStepSize
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetStepSize"));

	UAkSlider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetSliderHandleColor
// ()
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetSliderHandleColor"));

	UAkSlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetSliderBarColor
// ()
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetSliderBarColor"));

	UAkSlider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetLocked
// ()
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetLocked"));

	UAkSlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetIndentHandle
// ()
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetIndentHandle(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetIndentHandle"));

	UAkSlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetAkSliderItemProperty
// ()
// Parameters:
// struct FString                 ItemProperty                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetAkSliderItemProperty(const struct FString& ItemProperty)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetAkSliderItemProperty"));

	UAkSlider_SetAkSliderItemProperty_Params params;
	params.ItemProperty = ItemProperty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.SetAkSliderItemId
// ()
// Parameters:
// struct FGuid                   ItemId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetAkSliderItemId(const struct FGuid& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetAkSliderItemId"));

	UAkSlider_SetAkSliderItemId_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSlider.GetValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkSlider::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.GetValue"));

	UAkSlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkSlider.GetAkSliderItemProperty
// ()
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkSlider::GetAkSliderItemProperty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.GetAkSliderItemProperty"));

	UAkSlider_GetAkSliderItemProperty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkSlider.GetAkSliderItemId
// ()
// Parameters:
// struct FGuid                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGuid UAkSlider::GetAkSliderItemId()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.GetAkSliderItemId"));

	UAkSlider_GetAkSliderItemId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkSlider::AfterRead()
{
	UWidget::AfterRead();

}

void UAkSlider::BeforeDelete()
{
	UWidget::BeforeDelete();

}

void AAkSpatialAudioVolume::AfterRead()
{
	AVolume::AfterRead();

	READ_PTR_FULL(SurfaceReflectorSet, UAkSurfaceReflectorSetComponent);
	READ_PTR_FULL(LateReverb, UAkLateReverbComponent);
	READ_PTR_FULL(Room, UAkRoomComponent);
}

void AAkSpatialAudioVolume::BeforeDelete()
{
	AVolume::BeforeDelete();

	DELE_PTR_FULL(SurfaceReflectorSet);
	DELE_PTR_FULL(LateReverb);
	DELE_PTR_FULL(Room);
}

void AAkSpotReflector::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(AuxBus, UAkAuxBus);
	READ_PTR_FULL(AcousticTexture, UAkAcousticTexture);
}

void AAkSpotReflector::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(AuxBus);
	DELE_PTR_FULL(AcousticTexture);
}

// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
// ()
void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet"));

	UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
// ()
void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet"));

	UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
// ()
void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet"));

	UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAkSurfaceReflectorSetComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UAkSurfaceReflectorSetComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

// Function AkAudio.AkWaapiCalls.Unsubscribe
// ()
// Parameters:
// struct FAkWaapiSubscriptionId  SubscriptionId                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           UnsubscriptionDone             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.Unsubscribe"));

	UAkWaapiCalls_Unsubscribe_Params params;
	params.SubscriptionId = SubscriptionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UnsubscriptionDone != nullptr)
		*UnsubscriptionDone = params.UnsubscriptionDone;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
// ()
// Parameters:
// struct FAkWaapiUri             WaapiUri                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      WaapiOptions                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAkWaapiSubscriptionId  SubscriptionId                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           SubscriptionDone               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.SubscribeToWaapi"));

	UAkWaapiCalls_SubscribeToWaapi_Params params;
	params.WaapiUri = WaapiUri;
	params.WaapiOptions = WaapiOptions;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubscriptionId != nullptr)
		*SubscriptionId = params.SubscriptionId;
	if (SubscriptionDone != nullptr)
		*SubscriptionDone = params.SubscriptionDone;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.SetSubscriptionID
// ()
// Parameters:
// struct FAkWaapiSubscriptionId  Subscription                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkWaapiCalls::SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int ID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.SetSubscriptionID"));

	UAkWaapiCalls_SetSubscriptionID_Params params;
	params.Subscription = Subscription;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
// ()
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback"));

	UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
// ()
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback"));

	UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.GetSubscriptionID
// ()
// Parameters:
// struct FAkWaapiSubscriptionId  Subscription                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkWaapiCalls::GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.GetSubscriptionID"));

	UAkWaapiCalls_GetSubscriptionID_Params params;
	params.Subscription = Subscription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
// ()
// Parameters:
// struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText"));

	UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params params;
	params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
// ()
// Parameters:
// struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString"));

	UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params params;
	params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.CallWaapi
// ()
// Parameters:
// struct FAkWaapiUri             WaapiUri                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      WaapiArgs                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      WaapiOptions                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.CallWaapi"));

	UAkWaapiCalls_CallWaapi_Params params;
	params.WaapiUri = WaapiUri;
	params.WaapiArgs = WaapiArgs;
	params.WaapiOptions = WaapiOptions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkWaapiCalls::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAkWaapiCalls::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
// ()
// Parameters:
// struct FAkWaapiFieldNames      INAkWaapiFieldNames            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText"));

	USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params params;
	params.INAkWaapiFieldNames = INAkWaapiFieldNames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
// ()
// Parameters:
// struct FAkWaapiFieldNames      INAkWaapiFieldNames            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString"));

	USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params params;
	params.INAkWaapiFieldNames = INAkWaapiFieldNames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USAkWaapiFieldNamesConv::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void USAkWaapiFieldNamesConv::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function AkAudio.AkWaapiJsonManager.SetStringField
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 FieldValue                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetStringField"));

	UAkWaapiJsonManager_SetStringField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetObjectField
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      FieldValue                     (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetObjectField"));

	UAkWaapiJsonManager_SetObjectField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetNumberField
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          FieldValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetNumberField"));

	UAkWaapiJsonManager_SetNumberField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetBoolField
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           FieldValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetBoolField"));

	UAkWaapiJsonManager_SetBoolField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FString>         FieldStringValues              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetArrayStringFields"));

	UAkWaapiJsonManager_SetArrayStringFields_Params params;
	params.FieldName = FieldName;
	params.FieldStringValues = FieldStringValues;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FAKWaapiJsonObject> FieldObjectValues              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields"));

	UAkWaapiJsonManager_SetArrayObjectFields_Params params;
	params.FieldName = FieldName;
	params.FieldObjectValues = FieldObjectValues;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetStringField
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiJsonManager::GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetStringField"));

	UAkWaapiJsonManager_GetStringField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetObjectField
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetObjectField"));

	UAkWaapiJsonManager_GetObjectField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetNumberField
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkWaapiJsonManager::GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetNumberField"));

	UAkWaapiJsonManager_GetNumberField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetIntegerField
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkWaapiJsonManager::GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetIntegerField"));

	UAkWaapiJsonManager_GetIntegerField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetBoolField
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkWaapiJsonManager::GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetBoolField"));

	UAkWaapiJsonManager_GetBoolField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetArrayField
// ()
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (Parm, NativeAccessSpecifierPublic)
// TArray<struct FAKWaapiJsonObject> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetArrayField"));

	UAkWaapiJsonManager_GetArrayField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
// ()
// Parameters:
// struct FAKWaapiJsonObject      INAKWaapiJsonObject            (Parm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText"));

	UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params params;
	params.INAKWaapiJsonObject = INAKWaapiJsonObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
// ()
// Parameters:
// struct FAKWaapiJsonObject      INAKWaapiJsonObject            (Parm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString"));

	UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params params;
	params.INAKWaapiJsonObject = INAKWaapiJsonObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkWaapiJsonManager::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAkWaapiJsonManager::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
// ()
// Parameters:
// struct FAkWaapiUri             INAkWaapiUri                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkWaapiUriConv::Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText"));

	UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params params;
	params.INAkWaapiUri = INAkWaapiUri;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
// ()
// Parameters:
// struct FAkWaapiUri             INAkWaapiUri                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiUriConv::Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString"));

	UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params params;
	params.INAkWaapiUri = INAkWaapiUri;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkWaapiUriConv::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAkWaapiUriConv::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function AkAudio.AkWwiseTree.SetSearchText
// ()
// Parameters:
// struct FString                 newText                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkWwiseTree::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWwiseTree.SetSearchText"));

	UAkWwiseTree_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AkAudio.AkWwiseTree.GetSelectedItem
// ()
// Parameters:
// struct FAkWwiseObjectDetails   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWwiseTree.GetSelectedItem"));

	UAkWwiseTree_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AkAudio.AkWwiseTree.GetSearchText
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWwiseTree::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWwiseTree.GetSearchText"));

	UAkWwiseTree_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAkWwiseTree::AfterRead()
{
	UWidget::AfterRead();

}

void UAkWwiseTree::BeforeDelete()
{
	UWidget::BeforeDelete();

}

void UAkWwiseTreeSelector::AfterRead()
{
	UWidget::AfterRead();

}

void UAkWwiseTreeSelector::BeforeDelete()
{
	UWidget::BeforeDelete();

}

void UInterpTrackAkAudioEvent::AfterRead()
{
	UInterpTrackVectorBase::AfterRead();

}

void UInterpTrackAkAudioEvent::BeforeDelete()
{
	UInterpTrackVectorBase::BeforeDelete();

}

void UInterpTrackAkAudioRTPC::AfterRead()
{
	UInterpTrackFloatBase::AfterRead();

}

void UInterpTrackAkAudioRTPC::BeforeDelete()
{
	UInterpTrackFloatBase::BeforeDelete();

}

void UInterpTrackInstAkAudioEvent::AfterRead()
{
	UInterpTrackInst::AfterRead();

}

void UInterpTrackInstAkAudioEvent::BeforeDelete()
{
	UInterpTrackInst::BeforeDelete();

}

void UInterpTrackInstAkAudioRTPC::AfterRead()
{
	UInterpTrackInst::AfterRead();

}

void UInterpTrackInstAkAudioRTPC::BeforeDelete()
{
	UInterpTrackInst::BeforeDelete();

}

void UMovieSceneAkAudioEventSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(Event, UAkAudioEvent);
}

void UMovieSceneAkAudioEventSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(Event);
}

void UMovieSceneAkTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieSceneAkTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UMovieSceneAkAudioEventTrack::AfterRead()
{
	UMovieSceneAkTrack::AfterRead();

}

void UMovieSceneAkAudioEventTrack::BeforeDelete()
{
	UMovieSceneAkTrack::BeforeDelete();

}

void UMovieSceneAkAudioRTPCSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneAkAudioRTPCSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneAkAudioRTPCTrack::AfterRead()
{
	UMovieSceneAkTrack::AfterRead();

}

void UMovieSceneAkAudioRTPCTrack::BeforeDelete()
{
	UMovieSceneAkTrack::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
