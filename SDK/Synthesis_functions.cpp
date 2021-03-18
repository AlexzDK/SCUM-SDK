﻿// Name: S, Version: N

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

void FSourceEffectChorusSettings::AfterRead()
{
}

void FSourceEffectChorusSettings::BeforeDelete()
{
}

void FSourceEffectChorusBaseSettings::AfterRead()
{
}

void FSourceEffectChorusBaseSettings::BeforeDelete()
{
}

void FSourceEffectDynamicsProcessorSettings::AfterRead()
{
}

void FSourceEffectDynamicsProcessorSettings::BeforeDelete()
{
}

void FSourceEffectEnvelopeFollowerSettings::AfterRead()
{
}

void FSourceEffectEnvelopeFollowerSettings::BeforeDelete()
{
}

void FSourceEffectEQBand::AfterRead()
{
}

void FSourceEffectEQBand::BeforeDelete()
{
}

void FSourceEffectEQSettings::AfterRead()
{
}

void FSourceEffectEQSettings::BeforeDelete()
{
}

void FSourceEffectFilterAudioBusModulationSettings::AfterRead()
{
	READ_PTR_FULL(AudioBus, UAudioBus);
}

void FSourceEffectFilterAudioBusModulationSettings::BeforeDelete()
{
	DELE_PTR_FULL(AudioBus);
}

void FSourceEffectFilterSettings::AfterRead()
{
}

void FSourceEffectFilterSettings::BeforeDelete()
{
}

void FSourceEffectFoldbackDistortionSettings::AfterRead()
{
}

void FSourceEffectFoldbackDistortionSettings::BeforeDelete()
{
}

void FSourceEffectMidSideSpreaderSettings::AfterRead()
{
}

void FSourceEffectMidSideSpreaderSettings::BeforeDelete()
{
}

void FSourceEffectPannerSettings::AfterRead()
{
}

void FSourceEffectPannerSettings::BeforeDelete()
{
}

void FSourceEffectPhaserSettings::AfterRead()
{
}

void FSourceEffectPhaserSettings::BeforeDelete()
{
}

void FSourceEffectRingModulationSettings::AfterRead()
{
	READ_PTR_FULL(AudioBusModulator, UAudioBus);
}

void FSourceEffectRingModulationSettings::BeforeDelete()
{
	DELE_PTR_FULL(AudioBusModulator);
}

void FSourceEffectSimpleDelaySettings::AfterRead()
{
}

void FSourceEffectSimpleDelaySettings::BeforeDelete()
{
}

void FSourceEffectStereoDelaySettings::AfterRead()
{
}

void FSourceEffectStereoDelaySettings::BeforeDelete()
{
}

void FSourceEffectWaveShaperSettings::AfterRead()
{
}

void FSourceEffectWaveShaperSettings::BeforeDelete()
{
}

void FSubmixEffectConvolutionReverbSettings::AfterRead()
{
	READ_PTR_FULL(ImpulseResponse, UAudioImpulseResponse);
}

void FSubmixEffectConvolutionReverbSettings::BeforeDelete()
{
	DELE_PTR_FULL(ImpulseResponse);
}

void FSubmixEffectDelaySettings::AfterRead()
{
}

void FSubmixEffectDelaySettings::BeforeDelete()
{
}

void FSubmixEffectFilterSettings::AfterRead()
{
}

void FSubmixEffectFilterSettings::BeforeDelete()
{
}

void FSubmixEffectFlexiverbSettings::AfterRead()
{
}

void FSubmixEffectFlexiverbSettings::BeforeDelete()
{
}

void FDynamicsBandSettings::AfterRead()
{
}

void FDynamicsBandSettings::BeforeDelete()
{
}

void FSubmixEffectMultibandCompressorSettings::AfterRead()
{
}

void FSubmixEffectMultibandCompressorSettings::BeforeDelete()
{
}

void FSubmixEffectStereoDelaySettings::AfterRead()
{
}

void FSubmixEffectStereoDelaySettings::BeforeDelete()
{
}

void FTapDelayInfo::AfterRead()
{
}

void FTapDelayInfo::BeforeDelete()
{
}

void FSubmixEffectTapDelaySettings::AfterRead()
{
}

void FSubmixEffectTapDelaySettings::BeforeDelete()
{
}

void FSynth2DSliderStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FSynth2DSliderStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FSynthSlateStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FSynthSlateStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FSynthKnobStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FSynthKnobStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FSynth1PatchCable::AfterRead()
{
}

void FSynth1PatchCable::BeforeDelete()
{
}

void FEpicSynth1Patch::AfterRead()
{
}

void FEpicSynth1Patch::BeforeDelete()
{
}

void FModularSynthPreset::AfterRead()
{
	FTableRowBase::AfterRead();

}

void FModularSynthPreset::BeforeDelete()
{
	FTableRowBase::BeforeDelete();

}

void FModularSynthPresetBankEntry::AfterRead()
{
}

void FModularSynthPresetBankEntry::BeforeDelete()
{
}

void FPatchId::AfterRead()
{
}

void FPatchId::BeforeDelete()
{
}

void FSourceEffectBitCrusherSettings::AfterRead()
{
}

void FSourceEffectBitCrusherSettings::BeforeDelete()
{
}

void FSourceEffectBitCrusherBaseSettings::AfterRead()
{
}

void FSourceEffectBitCrusherBaseSettings::BeforeDelete()
{
}

// Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
// ()
// Parameters:
// float                          InPosition                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition"));

	USynthComponentMonoWaveTable_SetWaveTablePosition_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
// ()
// Parameters:
// bool                           InSustainPedalState            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetSustainPedalState(bool InSustainPedalState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState"));

	USynthComponentMonoWaveTable_SetSustainPedalState_Params params;
	params.InSustainPedalState = InSustainPedalState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
// ()
// Parameters:
// Synthesis_ESynthLFOType        InLfoType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPosLfoType(Synthesis_ESynthLFOType InLfoType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType"));

	USynthComponentMonoWaveTable_SetPosLfoType_Params params;
	params.InLfoType = InLfoType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
// ()
// Parameters:
// float                          InLfoFrequency                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPosLfoFrequency(float InLfoFrequency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency"));

	USynthComponentMonoWaveTable_SetPosLfoFrequency_Params params;
	params.InLfoFrequency = InLfoFrequency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
// ()
// Parameters:
// float                          InLfoDepth                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPosLfoDepth(float InLfoDepth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth"));

	USynthComponentMonoWaveTable_SetPosLfoDepth_Params params;
	params.InLfoDepth = InLfoDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
// ()
// Parameters:
// float                          InSustainGain                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float InSustainGain)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain"));

	USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Params params;
	params.InSustainGain = InSustainGain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
// ()
// Parameters:
// float                          InReleaseTimeMsec              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime"));

	USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Params params;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
// ()
// Parameters:
// bool                           bInInvert                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(bool bInInvert)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert"));

	USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Params params;
	params.bInInvert = bInInvert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
// ()
// Parameters:
// float                          InDepth                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float InDepth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth"));

	USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Params params;
	params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
// ()
// Parameters:
// float                          InDecayTimeMsec                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float InDecayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime"));

	USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Params params;
	params.InDecayTimeMsec = InDecayTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
// ()
// Parameters:
// bool                           bInBiasInvert                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(bool bInBiasInvert)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert"));

	USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Params params;
	params.bInBiasInvert = bInBiasInvert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
// ()
// Parameters:
// float                          InDepth                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float InDepth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth"));

	USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Params params;
	params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
// ()
// Parameters:
// float                          InAttackTimeMsec               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float InAttackTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime"));

	USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Params params;
	params.InAttackTimeMsec = InAttackTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
// ()
// Parameters:
// float                          InNewQ                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance"));

	USynthComponentMonoWaveTable_SetLowPassFilterResonance_Params params;
	params.InNewQ = InNewQ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
// ()
// Parameters:
// float                          InMidiNote                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float InMidiNote)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote"));

	USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Params params;
	params.InMidiNote = InMidiNote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
// ()
// Parameters:
// float                          FrequencyOffsetCents           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFrequencyPitchBend(float FrequencyOffsetCents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend"));

	USynthComponentMonoWaveTable_SetFrequencyPitchBend_Params params;
	params.FrequencyOffsetCents = FrequencyOffsetCents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
// ()
// Parameters:
// float                          FrequencyHz                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFrequency(float FrequencyHz)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFrequency"));

	USynthComponentMonoWaveTable_SetFrequency_Params params;
	params.FrequencyHz = FrequencyHz;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
// ()
// Parameters:
// float                          InSustainGain                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float InSustainGain)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain"));

	USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Params params;
	params.InSustainGain = InSustainGain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
// ()
// Parameters:
// float                          InReleaseTimeMsec              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime"));

	USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Params params;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
// ()
// Parameters:
// float                          InDecayTimeMsec                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float InDecayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime"));

	USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Params params;
	params.InDecayTimeMsec = InDecayTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
// ()
// Parameters:
// bool                           bInInvert                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(bool bInInvert)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert"));

	USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Params params;
	params.bInInvert = bInInvert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
// ()
// Parameters:
// float                          InDepth                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float InDepth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth"));

	USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Params params;
	params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
// ()
// Parameters:
// bool                           bInBiasInvert                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(bool bInBiasInvert)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert"));

	USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Params params;
	params.bInBiasInvert = bInBiasInvert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
// ()
// Parameters:
// float                          InDepth                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float InDepth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth"));

	USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Params params;
	params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
// ()
// Parameters:
// float                          InAttackTimeMsec               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float InAttackTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime"));

	USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Params params;
	params.InAttackTimeMsec = InAttackTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
// ()
// Parameters:
// int                            TableIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            KeyframeIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USynthComponentMonoWaveTable::SetCurveValue(int TableIndex, int KeyframeIndex, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue"));

	USynthComponentMonoWaveTable_SetCurveValue_Params params;
	params.TableIndex = TableIndex;
	params.KeyframeIndex = KeyframeIndex;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
// ()
// Parameters:
// int                            TableIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InNewTangent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USynthComponentMonoWaveTable::SetCurveTangent(int TableIndex, float InNewTangent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent"));

	USynthComponentMonoWaveTable_SetCurveTangent_Params params;
	params.TableIndex = TableIndex;
	params.InNewTangent = InNewTangent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
// ()
// Parameters:
// Synthesis_ECurveInterpolationType InterpolationType              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TableIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USynthComponentMonoWaveTable::SetCurveInterpolationType(Synthesis_ECurveInterpolationType InterpolationType, int TableIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType"));

	USynthComponentMonoWaveTable_SetCurveInterpolationType_Params params;
	params.InterpolationType = InterpolationType;
	params.TableIndex = TableIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
// ()
// Parameters:
// float                          InSustainGain                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float InSustainGain)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain"));

	USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Params params;
	params.InSustainGain = InSustainGain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
// ()
// Parameters:
// float                          InReleaseTimeMsec              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime"));

	USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Params params;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
// ()
// Parameters:
// bool                           bInInvert                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(bool bInInvert)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert"));

	USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Params params;
	params.bInInvert = bInInvert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
// ()
// Parameters:
// float                          InDepth                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float InDepth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth"));

	USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Params params;
	params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
// ()
// Parameters:
// float                          InDecayTimeMsec                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float InDecayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime"));

	USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Params params;
	params.InDecayTimeMsec = InDecayTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
// ()
// Parameters:
// bool                           bInBiasInvert                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(bool bInBiasInvert)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert"));

	USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Params params;
	params.bInBiasInvert = bInBiasInvert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
// ()
// Parameters:
// float                          InDepth                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float InDepth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth"));

	USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Params params;
	params.InDepth = InDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
// ()
// Parameters:
// float                          InAttackTimeMsec               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float InAttackTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime"));

	USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Params params;
	params.InAttackTimeMsec = InAttackTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::RefreshWaveTable(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable"));

	USynthComponentMonoWaveTable_RefreshWaveTable_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
// ()
void USynthComponentMonoWaveTable::RefreshAllWaveTables()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables"));

	USynthComponentMonoWaveTable_RefreshAllWaveTables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOn
// ()
// Parameters:
// float                          InMidiNote                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InVelocity                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::NoteOn(float InMidiNote, float InVelocity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.NoteOn"));

	USynthComponentMonoWaveTable_NoteOn_Params params;
	params.InMidiNote = InMidiNote;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOff
// ()
// Parameters:
// float                          InMidiNote                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMonoWaveTable::NoteOff(float InMidiNote)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.NoteOff"));

	USynthComponentMonoWaveTable_NoteOff_Params params;
	params.InMidiNote = InMidiNote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USynthComponentMonoWaveTable::GetNumTableEntries()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries"));

	USynthComponentMonoWaveTable_GetNumTableEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USynthComponentMonoWaveTable::GetMaxTableIndex()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex"));

	USynthComponentMonoWaveTable_GetMaxTableIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
// ()
// Parameters:
// float                          TableIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable"));

	USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Params params;
	params.TableIndex = TableIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
// ()
// Parameters:
// int                            TableIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USynthComponentMonoWaveTable::GetCurveTangent(int TableIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent"));

	USynthComponentMonoWaveTable_GetCurveTangent_Params params;
	params.TableIndex = TableIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USynthComponentMonoWaveTable::AfterRead()
{
	USynthComponent::AfterRead();

	READ_PTR_FULL(CurrentPreset, UMonoWaveTableSynthPreset);
}

void USynthComponentMonoWaveTable::BeforeDelete()
{
	USynthComponent::BeforeDelete();

	DELE_PTR_FULL(CurrentPreset);
}

// Function Synthesis.SynthComponentToneGenerator.SetVolume
// ()
// Parameters:
// float                          InVolume                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentToneGenerator::SetVolume(float InVolume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentToneGenerator.SetVolume"));

	USynthComponentToneGenerator_SetVolume_Params params;
	params.InVolume = InVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthComponentToneGenerator.SetFrequency
// ()
// Parameters:
// float                          InFrequency                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentToneGenerator::SetFrequency(float InFrequency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentToneGenerator.SetFrequency"));

	USynthComponentToneGenerator_SetFrequency_Params params;
	params.InFrequency = InFrequency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USynthComponentToneGenerator::AfterRead()
{
	USynthComponent::AfterRead();

}

void USynthComponentToneGenerator::BeforeDelete()
{
	USynthComponent::BeforeDelete();

}

// Function Synthesis.SynthSamplePlayer.SetSoundWave
// ()
// Parameters:
// class USoundWave*              InSoundWave                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthSamplePlayer::SetSoundWave(class USoundWave* InSoundWave)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.SetSoundWave"));

	USynthSamplePlayer_SetSoundWave_Params params;
	params.InSoundWave = InSoundWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
// ()
// Parameters:
// float                          InScrubTimeWidthSec            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth"));

	USynthSamplePlayer_SetScrubTimeWidth_Params params;
	params.InScrubTimeWidthSec = InScrubTimeWidthSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthSamplePlayer.SetScrubMode
// ()
// Parameters:
// bool                           bScrubMode                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthSamplePlayer::SetScrubMode(bool bScrubMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.SetScrubMode"));

	USynthSamplePlayer_SetScrubMode_Params params;
	params.bScrubMode = bScrubMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthSamplePlayer.SetPitch
// ()
// Parameters:
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TimeSec                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.SetPitch"));

	USynthSamplePlayer_SetPitch_Params params;
	params.InPitch = InPitch;
	params.TimeSec = TimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthSamplePlayer.SeekToTime
// ()
// Parameters:
// float                          TimeSec                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Synthesis_ESamplePlayerSeekType SeekType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWrap                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthSamplePlayer::SeekToTime(float TimeSec, Synthesis_ESamplePlayerSeekType SeekType, bool bWrap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.SeekToTime"));

	USynthSamplePlayer_SeekToTime_Params params;
	params.TimeSec = TimeSec;
	params.SeekType = SeekType;
	params.bWrap = bWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthSamplePlayer.IsLoaded
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USynthSamplePlayer::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.IsLoaded"));

	USynthSamplePlayer_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SynthSamplePlayer.GetSampleDuration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USynthSamplePlayer::GetSampleDuration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.GetSampleDuration"));

	USynthSamplePlayer_GetSampleDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USynthSamplePlayer::GetCurrentPlaybackProgressTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime"));

	USynthSamplePlayer_GetCurrentPlaybackProgressTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USynthSamplePlayer::GetCurrentPlaybackProgressPercent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent"));

	USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USynthSamplePlayer::AfterRead()
{
	USynthComponent::AfterRead();

	READ_PTR_FULL(SoundWave, USoundWave);
}

void USynthSamplePlayer::BeforeDelete()
{
	USynthComponent::BeforeDelete();

	DELE_PTR_FULL(SoundWave);
}

// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
// ()
// Parameters:
// float                          InLinearValue                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InDomainMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InDomainMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InRangeMin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InRangeMax                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency"));

	USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Params params;
	params.InLinearValue = InLinearValue;
	params.InDomainMin = InDomainMin;
	params.InDomainMax = InDomainMax;
	params.InRangeMin = InRangeMin;
	params.InRangeMax = InRangeMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
// ()
// Parameters:
// float                          InLogFrequencyValue            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InDomainMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InDomainMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InRangeMin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InRangeMax                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency"));

	USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Params params;
	params.InLogFrequencyValue = InLogFrequencyValue;
	params.InDomainMin = InDomainMin;
	params.InDomainMax = InDomainMax;
	params.InRangeMin = InRangeMin;
	params.InRangeMax = InRangeMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USynthesisUtilitiesBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void USynthesisUtilitiesBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Synthesis.SynthKnob.SetValue
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthKnob::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthKnob.SetValue"));

	USynthKnob_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthKnob.SetStepSize
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthKnob::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthKnob.SetStepSize"));

	USynthKnob_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthKnob.SetLocked
// ()
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthKnob::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthKnob.SetLocked"));

	USynthKnob_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SynthKnob.GetValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USynthKnob::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthKnob.GetValue"));

	USynthKnob_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USynthKnob::AfterRead()
{
	UWidget::AfterRead();

}

void USynthKnob::BeforeDelete()
{
	UWidget::BeforeDelete();

}

void UModularSynthPresetBank::AfterRead()
{
	UObject::AfterRead();

}

void UModularSynthPresetBank::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
// ()
// Parameters:
// class UModularSynthPresetBank* InBank                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularSynthPreset     preset                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 PresetName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthLibrary::AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& preset, const struct FString& PresetName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset"));

	UModularSynthLibrary_AddModularSynthPresetToBankAsset_Params params;
	params.InBank = InBank;
	params.preset = preset;
	params.PresetName = PresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UModularSynthLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UModularSynthLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Synthesis.ModularSynthComponent.SetSynthPreset
// ()
// Parameters:
// struct FModularSynthPreset     SynthPreset                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetSynthPreset(const struct FModularSynthPreset& SynthPreset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetSynthPreset"));

	UModularSynthComponent_SetSynthPreset_Params params;
	params.SynthPreset = SynthPreset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetSustainGain
// ()
// Parameters:
// float                          SustainGain                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetSustainGain(float SustainGain)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetSustainGain"));

	UModularSynthComponent_SetSustainGain_Params params;
	params.SustainGain = SustainGain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
// ()
// Parameters:
// float                          DelayWetlevel                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel"));

	UModularSynthComponent_SetStereoDelayWetlevel_Params params;
	params.DelayWetlevel = DelayWetlevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
// ()
// Parameters:
// float                          DelayTimeMsec                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayTime"));

	UModularSynthComponent_SetStereoDelayTime_Params params;
	params.DelayTimeMsec = DelayTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
// ()
// Parameters:
// float                          DelayRatio                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayRatio"));

	UModularSynthComponent_SetStereoDelayRatio_Params params;
	params.DelayRatio = DelayRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
// ()
// Parameters:
// Synthesis_ESynthStereoDelayMode StereoDelayMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetStereoDelayMode(Synthesis_ESynthStereoDelayMode StereoDelayMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayMode"));

	UModularSynthComponent_SetStereoDelayMode_Params params;
	params.StereoDelayMode = StereoDelayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
// ()
// Parameters:
// bool                           StereoDelayEnabled             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled"));

	UModularSynthComponent_SetStereoDelayIsEnabled_Params params;
	params.StereoDelayEnabled = StereoDelayEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
// ()
// Parameters:
// float                          DelayFeedback                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback"));

	UModularSynthComponent_SetStereoDelayFeedback_Params params;
	params.DelayFeedback = DelayFeedback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetSpread
// ()
// Parameters:
// float                          Spread                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetSpread(float Spread)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetSpread"));

	UModularSynthComponent_SetSpread_Params params;
	params.Spread = Spread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetReleaseTime
// ()
// Parameters:
// float                          ReleaseTimeMsec                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetReleaseTime"));

	UModularSynthComponent_SetReleaseTime_Params params;
	params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetPortamento
// ()
// Parameters:
// float                          Portamento                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetPortamento(float Portamento)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetPortamento"));

	UModularSynthComponent_SetPortamento_Params params;
	params.Portamento = Portamento;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetPitchBend
// ()
// Parameters:
// float                          PitchBend                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetPitchBend(float PitchBend)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetPitchBend"));

	UModularSynthComponent_SetPitchBend_Params params;
	params.PitchBend = PitchBend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetPan
// ()
// Parameters:
// float                          Pan                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetPan(float Pan)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetPan"));

	UModularSynthComponent_SetPan_Params params;
	params.Pan = Pan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetOscType
// ()
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Synthesis_ESynth1OscType       OscType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetOscType(int OscIndex, Synthesis_ESynth1OscType OscType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscType"));

	UModularSynthComponent_SetOscType_Params params;
	params.OscIndex = OscIndex;
	params.OscType = OscType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetOscSync
// ()
// Parameters:
// bool                           bIsSynced                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetOscSync(bool bIsSynced)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscSync"));

	UModularSynthComponent_SetOscSync_Params params;
	params.bIsSynced = bIsSynced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetOscSemitones
// ()
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Semitones                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetOscSemitones(int OscIndex, float Semitones)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscSemitones"));

	UModularSynthComponent_SetOscSemitones_Params params;
	params.OscIndex = OscIndex;
	params.Semitones = Semitones;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
// ()
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Pulsewidth                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetOscPulsewidth(int OscIndex, float Pulsewidth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscPulsewidth"));

	UModularSynthComponent_SetOscPulsewidth_Params params;
	params.OscIndex = OscIndex;
	params.Pulsewidth = Pulsewidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetOscOctave
// ()
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          octave                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetOscOctave(int OscIndex, float octave)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscOctave"));

	UModularSynthComponent_SetOscOctave_Params params;
	params.OscIndex = OscIndex;
	params.octave = octave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetOscGainMod
// ()
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OscGainMod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetOscGainMod(int OscIndex, float OscGainMod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscGainMod"));

	UModularSynthComponent_SetOscGainMod_Params params;
	params.OscIndex = OscIndex;
	params.OscGainMod = OscGainMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetOscGain
// ()
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OscGain                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetOscGain(int OscIndex, float OscGain)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscGain"));

	UModularSynthComponent_SetOscGain_Params params;
	params.OscIndex = OscIndex;
	params.OscGain = OscGain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
// ()
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OscFreqMod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetOscFrequencyMod(int OscIndex, float OscFreqMod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscFrequencyMod"));

	UModularSynthComponent_SetOscFrequencyMod_Params params;
	params.OscIndex = OscIndex;
	params.OscFreqMod = OscFreqMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetOscCents
// ()
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Cents                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetOscCents(int OscIndex, float Cents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscCents"));

	UModularSynthComponent_SetOscCents_Params params;
	params.OscIndex = OscIndex;
	params.Cents = Cents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
// ()
// Parameters:
// float                          SustainGain                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetModEnvSustainGain(float SustainGain)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvSustainGain"));

	UModularSynthComponent_SetModEnvSustainGain_Params params;
	params.SustainGain = SustainGain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
// ()
// Parameters:
// float                          Release                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetModEnvReleaseTime(float Release)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime"));

	UModularSynthComponent_SetModEnvReleaseTime_Params params;
	params.Release = Release;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvPatch
// ()
// Parameters:
// Synthesis_ESynthModEnvPatch    InPatchType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetModEnvPatch(Synthesis_ESynthModEnvPatch InPatchType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvPatch"));

	UModularSynthComponent_SetModEnvPatch_Params params;
	params.InPatchType = InPatchType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvInvert
// ()
// Parameters:
// bool                           bInvert                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetModEnvInvert(bool bInvert)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvInvert"));

	UModularSynthComponent_SetModEnvInvert_Params params;
	params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDepth
// ()
// Parameters:
// float                          Depth                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetModEnvDepth(float Depth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvDepth"));

	UModularSynthComponent_SetModEnvDepth_Params params;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
// ()
// Parameters:
// float                          DecayTimeMsec                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetModEnvDecayTime(float DecayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvDecayTime"));

	UModularSynthComponent_SetModEnvDecayTime_Params params;
	params.DecayTimeMsec = DecayTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
// ()
// Parameters:
// Synthesis_ESynthModEnvBiasPatch InPatchType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetModEnvBiasPatch(Synthesis_ESynthModEnvBiasPatch InPatchType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch"));

	UModularSynthComponent_SetModEnvBiasPatch_Params params;
	params.InPatchType = InPatchType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
// ()
// Parameters:
// bool                           bInvert                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetModEnvBiasInvert(bool bInvert)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert"));

	UModularSynthComponent_SetModEnvBiasInvert_Params params;
	params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
// ()
// Parameters:
// float                          AttackTimeMsec                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetModEnvAttackTime(float AttackTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvAttackTime"));

	UModularSynthComponent_SetModEnvAttackTime_Params params;
	params.AttackTimeMsec = AttackTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOType
// ()
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Synthesis_ESynthLFOType        LFOType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetLFOType(int LFOIndex, Synthesis_ESynthLFOType LFOType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOType"));

	UModularSynthComponent_SetLFOType_Params params;
	params.LFOIndex = LFOIndex;
	params.LFOType = LFOType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOPatch
// ()
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Synthesis_ESynthLFOPatchType   LFOPatchType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetLFOPatch(int LFOIndex, Synthesis_ESynthLFOPatchType LFOPatchType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOPatch"));

	UModularSynthComponent_SetLFOPatch_Params params;
	params.LFOIndex = LFOIndex;
	params.LFOPatchType = LFOPatchType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOMode
// ()
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Synthesis_ESynthLFOMode        LFOMode                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetLFOMode(int LFOIndex, Synthesis_ESynthLFOMode LFOMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOMode"));

	UModularSynthComponent_SetLFOMode_Params params;
	params.LFOIndex = LFOIndex;
	params.LFOMode = LFOMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOGainMod
// ()
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          GainMod                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetLFOGainMod(int LFOIndex, float GainMod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOGainMod"));

	UModularSynthComponent_SetLFOGainMod_Params params;
	params.LFOIndex = LFOIndex;
	params.GainMod = GainMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOGain
// ()
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Gain                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetLFOGain(int LFOIndex, float Gain)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOGain"));

	UModularSynthComponent_SetLFOGain_Params params;
	params.LFOIndex = LFOIndex;
	params.Gain = Gain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
// ()
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FrequencyModHz                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetLFOFrequencyMod(int LFOIndex, float FrequencyModHz)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod"));

	UModularSynthComponent_SetLFOFrequencyMod_Params params;
	params.LFOIndex = LFOIndex;
	params.FrequencyModHz = FrequencyModHz;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOFrequency
// ()
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FrequencyHz                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetLFOFrequency(int LFOIndex, float FrequencyHz)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOFrequency"));

	UModularSynthComponent_SetLFOFrequency_Params params;
	params.LFOIndex = LFOIndex;
	params.FrequencyHz = FrequencyHz;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetGainDb
// ()
// Parameters:
// float                          GainDb                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetGainDb(float GainDb)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetGainDb"));

	UModularSynthComponent_SetGainDb_Params params;
	params.GainDb = GainDb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterType
// ()
// Parameters:
// Synthesis_ESynthFilterType     FilterType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetFilterType(Synthesis_ESynthFilterType FilterType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterType"));

	UModularSynthComponent_SetFilterType_Params params;
	params.FilterType = FilterType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterQMod
// ()
// Parameters:
// float                          FilterQ                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetFilterQMod(float FilterQ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterQMod"));

	UModularSynthComponent_SetFilterQMod_Params params;
	params.FilterQ = FilterQ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterQ
// ()
// Parameters:
// float                          FilterQ                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetFilterQ(float FilterQ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterQ"));

	UModularSynthComponent_SetFilterQ_Params params;
	params.FilterQ = FilterQ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
// ()
// Parameters:
// float                          FilterFrequencyHz              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod"));

	UModularSynthComponent_SetFilterFrequencyMod_Params params;
	params.FilterFrequencyHz = FilterFrequencyHz;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequency
// ()
// Parameters:
// float                          FilterFrequencyHz              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterFrequency"));

	UModularSynthComponent_SetFilterFrequency_Params params;
	params.FilterFrequencyHz = FilterFrequencyHz;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
// ()
// Parameters:
// Synthesis_ESynthFilterAlgorithm FilterAlgorithm                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetFilterAlgorithm(Synthesis_ESynthFilterAlgorithm FilterAlgorithm)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterAlgorithm"));

	UModularSynthComponent_SetFilterAlgorithm_Params params;
	params.FilterAlgorithm = FilterAlgorithm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetEnableUnison
// ()
// Parameters:
// bool                           EnableUnison                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetEnableUnison(bool EnableUnison)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetEnableUnison"));

	UModularSynthComponent_SetEnableUnison_Params params;
	params.EnableUnison = EnableUnison;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
// ()
// Parameters:
// bool                           RetriggerEnabled               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetEnableRetrigger"));

	UModularSynthComponent_SetEnableRetrigger_Params params;
	params.RetriggerEnabled = RetriggerEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
// ()
// Parameters:
// bool                           bEnablePolyphony               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetEnablePolyphony"));

	UModularSynthComponent_SetEnablePolyphony_Params params;
	params.bEnablePolyphony = bEnablePolyphony;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetEnablePatch
// ()
// Parameters:
// struct FPatchId                PatchId                        (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bIsEnabled                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UModularSynthComponent::SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetEnablePatch"));

	UModularSynthComponent_SetEnablePatch_Params params;
	params.PatchId = PatchId;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.ModularSynthComponent.SetEnableLegato
// ()
// Parameters:
// bool                           LegatoEnabled                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetEnableLegato(bool LegatoEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetEnableLegato"));

	UModularSynthComponent_SetEnableLegato_Params params;
	params.LegatoEnabled = LegatoEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetDecayTime
// ()
// Parameters:
// float                          DecayTimeMsec                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetDecayTime(float DecayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetDecayTime"));

	UModularSynthComponent_SetDecayTime_Params params;
	params.DecayTimeMsec = DecayTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusFrequency
// ()
// Parameters:
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetChorusFrequency(float Frequency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetChorusFrequency"));

	UModularSynthComponent_SetChorusFrequency_Params params;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusFeedback
// ()
// Parameters:
// float                          Feedback                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetChorusFeedback(float Feedback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetChorusFeedback"));

	UModularSynthComponent_SetChorusFeedback_Params params;
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusEnabled
// ()
// Parameters:
// bool                           EnableChorus                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetChorusEnabled(bool EnableChorus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetChorusEnabled"));

	UModularSynthComponent_SetChorusEnabled_Params params;
	params.EnableChorus = EnableChorus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusDepth
// ()
// Parameters:
// float                          Depth                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetChorusDepth(float Depth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetChorusDepth"));

	UModularSynthComponent_SetChorusDepth_Params params;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.SetAttackTime
// ()
// Parameters:
// float                          AttackTimeMsec                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::SetAttackTime(float AttackTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetAttackTime"));

	UModularSynthComponent_SetAttackTime_Params params;
	params.AttackTimeMsec = AttackTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.NoteOn
// ()
// Parameters:
// float                          Note                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Velocity                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::NoteOn(float Note, int Velocity, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.NoteOn"));

	UModularSynthComponent_NoteOn_Params params;
	params.Note = Note;
	params.Velocity = Velocity;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.NoteOff
// ()
// Parameters:
// float                          Note                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllNotesOff                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bKillAllNotes                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModularSynthComponent::NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.NoteOff"));

	UModularSynthComponent_NoteOff_Params params;
	params.Note = Note;
	params.bAllNotesOff = bAllNotesOff;
	params.bKillAllNotes = bKillAllNotes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.ModularSynthComponent.CreatePatch
// ()
// Parameters:
// Synthesis_ESynth1PatchSource   PatchSource                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSynth1PatchCable> PatchCables                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bEnableByDefault               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPatchId                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FPatchId UModularSynthComponent::CreatePatch(Synthesis_ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.CreatePatch"));

	UModularSynthComponent_CreatePatch_Params params;
	params.PatchSource = PatchSource;
	params.PatchCables = PatchCables;
	params.bEnableByDefault = bEnableByDefault;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UModularSynthComponent::AfterRead()
{
	USynthComponent::AfterRead();

}

void UModularSynthComponent::BeforeDelete()
{
	USynthComponent::BeforeDelete();

}

// Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectBitCrusherBaseSettings Settings                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectBitCrusherPreset::SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetSettings"));

	USourceEffectBitCrusherPreset_SetSettings_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
// ()
// Parameters:
// class USoundModulatorBase*     Modulator                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectBitCrusherPreset::SetSampleRateModulator(class USoundModulatorBase* Modulator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator"));

	USourceEffectBitCrusherPreset_SetSampleRateModulator_Params params;
	params.Modulator = Modulator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
// ()
// Parameters:
// float                          SampleRate                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectBitCrusherPreset::SetSampleRate(float SampleRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate"));

	USourceEffectBitCrusherPreset_SetSampleRate_Params params;
	params.SampleRate = SampleRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
// ()
// Parameters:
// struct FSourceEffectBitCrusherSettings ModulationSettings             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectBitCrusherPreset::SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings"));

	USourceEffectBitCrusherPreset_SetModulationSettings_Params params;
	params.ModulationSettings = ModulationSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBits
// ()
// Parameters:
// float                          Bits                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectBitCrusherPreset::SetBits(float Bits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetBits"));

	USourceEffectBitCrusherPreset_SetBits_Params params;
	params.Bits = Bits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
// ()
// Parameters:
// class USoundModulatorBase*     Modulator                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectBitCrusherPreset::SetBitModulator(class USoundModulatorBase* Modulator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator"));

	USourceEffectBitCrusherPreset_SetBitModulator_Params params;
	params.Modulator = Modulator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectBitCrusherPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectBitCrusherPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectChorusPreset.SetWetModulator
// ()
// Parameters:
// class USoundModulatorBase*     Modulator                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetWetModulator(class USoundModulatorBase* Modulator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetWetModulator"));

	USourceEffectChorusPreset_SetWetModulator_Params params;
	params.Modulator = Modulator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetWet
// ()
// Parameters:
// float                          WetAmount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetWet(float WetAmount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetWet"));

	USourceEffectChorusPreset_SetWet_Params params;
	params.WetAmount = WetAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
// ()
// Parameters:
// class USoundModulatorBase*     Modulator                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetSpreadModulator(class USoundModulatorBase* Modulator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator"));

	USourceEffectChorusPreset_SetSpreadModulator_Params params;
	params.Modulator = Modulator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpread
// ()
// Parameters:
// float                          Spread                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetSpread(float Spread)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetSpread"));

	USourceEffectChorusPreset_SetSpread_Params params;
	params.Spread = Spread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectChorusBaseSettings Settings                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetSettings(const struct FSourceEffectChorusBaseSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetSettings"));

	USourceEffectChorusPreset_SetSettings_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
// ()
// Parameters:
// struct FSourceEffectChorusSettings ModulationSettings             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetModulationSettings"));

	USourceEffectChorusPreset_SetModulationSettings_Params params;
	params.ModulationSettings = ModulationSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
// ()
// Parameters:
// class USoundModulatorBase*     Modulator                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetFrequencyModulator(class USoundModulatorBase* Modulator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator"));

	USourceEffectChorusPreset_SetFrequencyModulator_Params params;
	params.Modulator = Modulator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetFrequency
// ()
// Parameters:
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetFrequency(float Frequency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetFrequency"));

	USourceEffectChorusPreset_SetFrequency_Params params;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
// ()
// Parameters:
// class USoundModulatorBase*     Modulator                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetFeedbackModulator(class USoundModulatorBase* Modulator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator"));

	USourceEffectChorusPreset_SetFeedbackModulator_Params params;
	params.Modulator = Modulator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedback
// ()
// Parameters:
// float                          Feedback                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetFeedback(float Feedback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetFeedback"));

	USourceEffectChorusPreset_SetFeedback_Params params;
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetDryModulator
// ()
// Parameters:
// class USoundModulatorBase*     Modulator                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetDryModulator(class USoundModulatorBase* Modulator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetDryModulator"));

	USourceEffectChorusPreset_SetDryModulator_Params params;
	params.Modulator = Modulator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetDry
// ()
// Parameters:
// float                          DryAmount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetDry(float DryAmount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetDry"));

	USourceEffectChorusPreset_SetDry_Params params;
	params.DryAmount = DryAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
// ()
// Parameters:
// class USoundModulatorBase*     Modulator                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetDepthModulator(class USoundModulatorBase* Modulator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetDepthModulator"));

	USourceEffectChorusPreset_SetDepthModulator_Params params;
	params.Modulator = Modulator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepth
// ()
// Parameters:
// float                          Depth                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectChorusPreset::SetDepth(float Depth)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetDepth"));

	USourceEffectChorusPreset_SetDepth_Params params;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectChorusPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectChorusPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectDynamicsProcessorSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectDynamicsProcessorPreset::SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings"));

	USourceEffectDynamicsProcessorPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectDynamicsProcessorPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectDynamicsProcessorPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

void UEnvelopeFollowerListener::AfterRead()
{
	UActorComponent::AfterRead();

}

void UEnvelopeFollowerListener::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
// ()
// Parameters:
// class UEnvelopeFollowerListener* EnvelopeFollowerListener       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener"));

	USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Params params;
	params.EnvelopeFollowerListener = EnvelopeFollowerListener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectEnvelopeFollowerSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectEnvelopeFollowerPreset::SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings"));

	USourceEffectEnvelopeFollowerPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
// ()
// Parameters:
// class UEnvelopeFollowerListener* EnvelopeFollowerListener       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener"));

	USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Params params;
	params.EnvelopeFollowerListener = EnvelopeFollowerListener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectEnvelopeFollowerPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectEnvelopeFollowerPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectEQPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectEQSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USourceEffectEQPreset::SetSettings(const struct FSourceEffectEQSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectEQPreset.SetSettings"));

	USourceEffectEQPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectEQPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectEQPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectFilterPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectFilterSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USourceEffectFilterPreset::SetSettings(const struct FSourceEffectFilterSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectFilterPreset.SetSettings"));

	USourceEffectFilterPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectFilterPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectFilterPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectFoldbackDistortionSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectFoldbackDistortionPreset::SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings"));

	USourceEffectFoldbackDistortionPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectFoldbackDistortionPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectFoldbackDistortionPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectMidSideSpreaderSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectMidSideSpreaderPreset::SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings"));

	USourceEffectMidSideSpreaderPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectMidSideSpreaderPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectMidSideSpreaderPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectPannerPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectPannerSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectPannerPreset::SetSettings(const struct FSourceEffectPannerSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectPannerPreset.SetSettings"));

	USourceEffectPannerPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectPannerPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectPannerPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectPhaserPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectPhaserSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectPhaserPreset::SetSettings(const struct FSourceEffectPhaserSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectPhaserPreset.SetSettings"));

	USourceEffectPhaserPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectPhaserPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectPhaserPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectRingModulationPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectRingModulationSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectRingModulationPreset::SetSettings(const struct FSourceEffectRingModulationSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectRingModulationPreset.SetSettings"));

	USourceEffectRingModulationPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectRingModulationPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectRingModulationPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectSimpleDelaySettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectSimpleDelayPreset::SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings"));

	USourceEffectSimpleDelayPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectSimpleDelayPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectSimpleDelayPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectStereoDelaySettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectStereoDelayPreset::SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectStereoDelayPreset.SetSettings"));

	USourceEffectStereoDelayPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectStereoDelayPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectStereoDelayPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

// Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
// ()
// Parameters:
// struct FSourceEffectWaveShaperSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USourceEffectWaveShaperPreset::SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectWaveShaperPreset.SetSettings"));

	USourceEffectWaveShaperPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USourceEffectWaveShaperPreset::AfterRead()
{
	USoundEffectSourcePreset::AfterRead();

}

void USourceEffectWaveShaperPreset::BeforeDelete()
{
	USoundEffectSourcePreset::BeforeDelete();

}

void UAudioImpulseResponse::AfterRead()
{
	UObject::AfterRead();

}

void UAudioImpulseResponse::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
// ()
// Parameters:
// struct FSubmixEffectConvolutionReverbSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USubmixEffectConvolutionReverbPreset::SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings"));

	USubmixEffectConvolutionReverbPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
// ()
// Parameters:
// class UAudioImpulseResponse*   InImpulseResponse              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse"));

	USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Params params;
	params.InImpulseResponse = InImpulseResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USubmixEffectConvolutionReverbPreset::AfterRead()
{
	USoundEffectSubmixPreset::AfterRead();

	READ_PTR_FULL(ImpulseResponse, UAudioImpulseResponse);
}

void USubmixEffectConvolutionReverbPreset::BeforeDelete()
{
	USoundEffectSubmixPreset::BeforeDelete();

	DELE_PTR_FULL(ImpulseResponse);
}

// Function Synthesis.SubmixEffectDelayPreset.SetSettings
// ()
// Parameters:
// struct FSubmixEffectDelaySettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USubmixEffectDelayPreset::SetSettings(const struct FSubmixEffectDelaySettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectDelayPreset.SetSettings"));

	USubmixEffectDelayPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectDelayPreset::SetInterpolationTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime"));

	USubmixEffectDelayPreset_SetInterpolationTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectDelayPreset.SetDelay
// ()
// Parameters:
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectDelayPreset::SetDelay(float Length)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectDelayPreset.SetDelay"));

	USubmixEffectDelayPreset_SetDelay_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds"));

	USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USubmixEffectDelayPreset::AfterRead()
{
	USoundEffectSubmixPreset::AfterRead();

}

void USubmixEffectDelayPreset::BeforeDelete()
{
	USoundEffectSubmixPreset::BeforeDelete();

}

// Function Synthesis.SubmixEffectFilterPreset.SetSettings
// ()
// Parameters:
// struct FSubmixEffectFilterSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USubmixEffectFilterPreset::SetSettings(const struct FSubmixEffectFilterSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetSettings"));

	USubmixEffectFilterPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
// ()
// Parameters:
// Synthesis_ESubmixFilterType    InType                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectFilterPreset::SetFilterType(Synthesis_ESubmixFilterType InType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterType"));

	USubmixEffectFilterPreset_SetFilterType_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
// ()
// Parameters:
// float                          InQ                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectFilterPreset::SetFilterQMod(float InQ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod"));

	USubmixEffectFilterPreset_SetFilterQMod_Params params;
	params.InQ = InQ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
// ()
// Parameters:
// float                          InQ                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectFilterPreset::SetFilterQ(float InQ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterQ"));

	USubmixEffectFilterPreset_SetFilterQ_Params params;
	params.InQ = InQ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
// ()
// Parameters:
// float                          InFrequency                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod"));

	USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Params params;
	params.InFrequency = InFrequency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
// ()
// Parameters:
// float                          InFrequency                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency"));

	USubmixEffectFilterPreset_SetFilterCutoffFrequency_Params params;
	params.InFrequency = InFrequency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
// ()
// Parameters:
// Synthesis_ESubmixFilterAlgorithm InAlgorithm                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectFilterPreset::SetFilterAlgorithm(Synthesis_ESubmixFilterAlgorithm InAlgorithm)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm"));

	USubmixEffectFilterPreset_SetFilterAlgorithm_Params params;
	params.InAlgorithm = InAlgorithm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USubmixEffectFilterPreset::AfterRead()
{
	USoundEffectSubmixPreset::AfterRead();

}

void USubmixEffectFilterPreset::BeforeDelete()
{
	USoundEffectSubmixPreset::BeforeDelete();

}

// Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
// ()
// Parameters:
// struct FSubmixEffectFlexiverbSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USubmixEffectFlexiverbPreset::SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings"));

	USubmixEffectFlexiverbPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USubmixEffectFlexiverbPreset::AfterRead()
{
	USoundEffectSubmixPreset::AfterRead();

}

void USubmixEffectFlexiverbPreset::BeforeDelete()
{
	USoundEffectSubmixPreset::BeforeDelete();

}

// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
// ()
// Parameters:
// struct FSubmixEffectMultibandCompressorSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USubmixEffectMultibandCompressorPreset::SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings"));

	USubmixEffectMultibandCompressorPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USubmixEffectMultibandCompressorPreset::AfterRead()
{
	USoundEffectSubmixPreset::AfterRead();

}

void USubmixEffectMultibandCompressorPreset::BeforeDelete()
{
	USoundEffectSubmixPreset::BeforeDelete();

}

// Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings
// ()
// Parameters:
// struct FSubmixEffectStereoDelaySettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USubmixEffectStereoDelayPreset::SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings"));

	USubmixEffectStereoDelayPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USubmixEffectStereoDelayPreset::AfterRead()
{
	USoundEffectSubmixPreset::AfterRead();

}

void USubmixEffectStereoDelayPreset::BeforeDelete()
{
	USoundEffectSubmixPreset::BeforeDelete();

}

// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
// ()
// Parameters:
// int                            TapId                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTapDelayInfo           TapInfo                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USubmixEffectTapDelayPreset::SetTap(int TapId, const struct FTapDelayInfo& TapInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.SetTap"));

	USubmixEffectTapDelayPreset_SetTap_Params params;
	params.TapId = TapId;
	params.TapInfo = TapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
// ()
// Parameters:
// struct FSubmixEffectTapDelaySettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USubmixEffectTapDelayPreset::SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.SetSettings"));

	USubmixEffectTapDelayPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectTapDelayPreset::SetInterpolationTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime"));

	USubmixEffectTapDelayPreset_SetInterpolationTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
// ()
// Parameters:
// int                            TapId                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectTapDelayPreset::RemoveTap(int TapId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap"));

	USubmixEffectTapDelayPreset_RemoveTap_Params params;
	params.TapId = TapId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
// ()
// Parameters:
// TArray<int>                    TapIds                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USubmixEffectTapDelayPreset::GetTapIds(TArray<int>* TapIds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds"));

	USubmixEffectTapDelayPreset_GetTapIds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TapIds != nullptr)
		*TapIds = params.TapIds;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
// ()
// Parameters:
// int                            TapId                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTapDelayInfo           TapInfo                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void USubmixEffectTapDelayPreset::GetTap(int TapId, struct FTapDelayInfo* TapInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.GetTap"));

	USubmixEffectTapDelayPreset_GetTap_Params params;
	params.TapId = TapId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TapInfo != nullptr)
		*TapInfo = params.TapInfo;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds"));

	USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
// ()
// Parameters:
// int                            TapId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectTapDelayPreset::AddTap(int* TapId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.AddTap"));

	USubmixEffectTapDelayPreset_AddTap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TapId != nullptr)
		*TapId = params.TapId;

}


void USubmixEffectTapDelayPreset::AfterRead()
{
	USoundEffectSubmixPreset::AfterRead();

}

void USubmixEffectTapDelayPreset::BeforeDelete()
{
	USoundEffectSubmixPreset::BeforeDelete();

}

// Function Synthesis.Synth2DSlider.SetValue
// ()
// Parameters:
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynth2DSlider::SetValue(const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.SetValue"));

	USynth2DSlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.Synth2DSlider.SetStepSize
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynth2DSlider::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.SetStepSize"));

	USynth2DSlider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.Synth2DSlider.SetSliderHandleColor
// ()
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynth2DSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.SetSliderHandleColor"));

	USynth2DSlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.Synth2DSlider.SetLocked
// ()
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynth2DSlider::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.SetLocked"));

	USynth2DSlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.Synth2DSlider.SetIndentHandle
// ()
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynth2DSlider::SetIndentHandle(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.SetIndentHandle"));

	USynth2DSlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.Synth2DSlider.GetValue
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USynth2DSlider::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.GetValue"));

	USynth2DSlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USynth2DSlider::AfterRead()
{
	UWidget::AfterRead();

}

void USynth2DSlider::BeforeDelete()
{
	UWidget::BeforeDelete();

}

// Function Synthesis.GranularSynth.SetSustainGain
// ()
// Parameters:
// float                          SustainGain                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetSustainGain(float SustainGain)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetSustainGain"));

	UGranularSynth_SetSustainGain_Params params;
	params.SustainGain = SustainGain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetSoundWave
// ()
// Parameters:
// class USoundWave*              InSoundWave                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetSoundWave(class USoundWave* InSoundWave)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetSoundWave"));

	UGranularSynth_SetSoundWave_Params params;
	params.InSoundWave = InSoundWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetScrubMode
// ()
// Parameters:
// bool                           bScrubMode                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetScrubMode(bool bScrubMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetScrubMode"));

	UGranularSynth_SetScrubMode_Params params;
	params.bScrubMode = bScrubMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetReleaseTimeMsec
// ()
// Parameters:
// float                          ReleaseTimeMsec                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetReleaseTimeMsec(float ReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetReleaseTimeMsec"));

	UGranularSynth_SetReleaseTimeMsec_Params params;
	params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetPlayheadTime
// ()
// Parameters:
// float                          InPositionSec                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LerpTimeSec                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Synthesis_EGranularSynthSeekType SeekType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, Synthesis_EGranularSynthSeekType SeekType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetPlayheadTime"));

	UGranularSynth_SetPlayheadTime_Params params;
	params.InPositionSec = InPositionSec;
	params.LerpTimeSec = LerpTimeSec;
	params.SeekType = SeekType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetPlaybackSpeed
// ()
// Parameters:
// float                          InPlayheadRate                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetPlaybackSpeed(float InPlayheadRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetPlaybackSpeed"));

	UGranularSynth_SetPlaybackSpeed_Params params;
	params.InPlayheadRate = InPlayheadRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetGrainVolume
// ()
// Parameters:
// float                          BaseVolume                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               VolumeRange                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainVolume"));

	UGranularSynth_SetGrainVolume_Params params;
	params.BaseVolume = BaseVolume;
	params.VolumeRange = VolumeRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetGrainsPerSecond
// ()
// Parameters:
// float                          InGrainsPerSecond              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetGrainsPerSecond(float InGrainsPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainsPerSecond"));

	UGranularSynth_SetGrainsPerSecond_Params params;
	params.InGrainsPerSecond = InGrainsPerSecond;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetGrainProbability
// ()
// Parameters:
// float                          InGrainProbability             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetGrainProbability(float InGrainProbability)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainProbability"));

	UGranularSynth_SetGrainProbability_Params params;
	params.InGrainProbability = InGrainProbability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetGrainPitch
// ()
// Parameters:
// float                          BasePitch                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               PitchRange                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainPitch"));

	UGranularSynth_SetGrainPitch_Params params;
	params.BasePitch = BasePitch;
	params.PitchRange = PitchRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetGrainPan
// ()
// Parameters:
// float                          BasePan                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               PanRange                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetGrainPan(float BasePan, const struct FVector2D& PanRange)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainPan"));

	UGranularSynth_SetGrainPan_Params params;
	params.BasePan = BasePan;
	params.PanRange = PanRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetGrainEnvelopeType
// ()
// Parameters:
// Synthesis_EGranularSynthEnvelopeType EnvelopeType                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetGrainEnvelopeType(Synthesis_EGranularSynthEnvelopeType EnvelopeType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainEnvelopeType"));

	UGranularSynth_SetGrainEnvelopeType_Params params;
	params.EnvelopeType = EnvelopeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetGrainDuration
// ()
// Parameters:
// float                          BaseDurationMsec               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               DurationRange                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainDuration"));

	UGranularSynth_SetGrainDuration_Params params;
	params.BaseDurationMsec = BaseDurationMsec;
	params.DurationRange = DurationRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetDecayTime
// ()
// Parameters:
// float                          DecayTimeMsec                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetDecayTime(float DecayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetDecayTime"));

	UGranularSynth_SetDecayTime_Params params;
	params.DecayTimeMsec = DecayTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.SetAttackTime
// ()
// Parameters:
// float                          AttackTimeMsec                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::SetAttackTime(float AttackTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetAttackTime"));

	UGranularSynth_SetAttackTime_Params params;
	params.AttackTimeMsec = AttackTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.NoteOn
// ()
// Parameters:
// float                          Note                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Velocity                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::NoteOn(float Note, int Velocity, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.NoteOn"));

	UGranularSynth_NoteOn_Params params;
	params.Note = Note;
	params.Velocity = Velocity;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.NoteOff
// ()
// Parameters:
// float                          Note                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bKill                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGranularSynth::NoteOff(float Note, bool bKill)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.NoteOff"));

	UGranularSynth_NoteOff_Params params;
	params.Note = Note;
	params.bKill = bKill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Synthesis.GranularSynth.IsLoaded
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGranularSynth::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.IsLoaded"));

	UGranularSynth_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.GranularSynth.GetSampleDuration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGranularSynth::GetSampleDuration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.GetSampleDuration"));

	UGranularSynth_GetSampleDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGranularSynth::GetCurrentPlayheadTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.GetCurrentPlayheadTime"));

	UGranularSynth_GetCurrentPlayheadTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGranularSynth::AfterRead()
{
	USynthComponent::AfterRead();

	READ_PTR_FULL(GranulatedSoundWave, USoundWave);
}

void UGranularSynth::BeforeDelete()
{
	USynthComponent::BeforeDelete();

	DELE_PTR_FULL(GranulatedSoundWave);
}

void UMonoWaveTableSynthPreset::AfterRead()
{
	UObject::AfterRead();

}

void UMonoWaveTableSynthPreset::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif