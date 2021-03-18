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

void FMotoSynthRuntimeSettings::AfterRead()
{
	READ_PTR_FULL(AccelerationSource, UMotoSynthSource);
	READ_PTR_FULL(DecelerationSource, UMotoSynthSource);
}

void FMotoSynthRuntimeSettings::BeforeDelete()
{
	DELE_PTR_FULL(AccelerationSource);
	DELE_PTR_FULL(DecelerationSource);
}

void FGrainTableEntry::AfterRead()
{
}

void FGrainTableEntry::BeforeDelete()
{
}

void UMotoSynthPreset::AfterRead()
{
	UObject::AfterRead();

}

void UMotoSynthPreset::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMotoSynthSource::AfterRead()
{
	UObject::AfterRead();

}

void UMotoSynthSource::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function MotoSynth.SynthComponentMoto.SetSettings
// ()
// Parameters:
// struct FMotoSynthRuntimeSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USynthComponentMoto::SetSettings(const struct FMotoSynthRuntimeSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MotoSynth.SynthComponentMoto.SetSettings"));

	USynthComponentMoto_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MotoSynth.SynthComponentMoto.SetRPM
// ()
// Parameters:
// float                          InRPM                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InTimeSec                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MotoSynth.SynthComponentMoto.SetRPM"));

	USynthComponentMoto_SetRPM_Params params;
	params.InRPM = InRPM;
	params.InTimeSec = InTimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MotoSynth.SynthComponentMoto.IsEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USynthComponentMoto::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MotoSynth.SynthComponentMoto.IsEnabled"));

	USynthComponentMoto_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MotoSynth.SynthComponentMoto.GetRPMRange
// ()
// Parameters:
// float                          OutMinRPM                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutMaxRPM                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMoto::GetRPMRange(float* OutMinRPM, float* OutMaxRPM)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MotoSynth.SynthComponentMoto.GetRPMRange"));

	USynthComponentMoto_GetRPMRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMinRPM != nullptr)
		*OutMinRPM = params.OutMinRPM;
	if (OutMaxRPM != nullptr)
		*OutMaxRPM = params.OutMaxRPM;

}


void USynthComponentMoto::AfterRead()
{
	USynthComponent::AfterRead();

	READ_PTR_FULL(MotoSynthPreset, UMotoSynthPreset);
}

void USynthComponentMoto::BeforeDelete()
{
	USynthComponent::BeforeDelete();

	DELE_PTR_FULL(MotoSynthPreset);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
