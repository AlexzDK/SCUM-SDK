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

void FSoundVariation::AfterRead()
{
	READ_PTR_FULL(SoundWave, USoundWave);
}

void FSoundVariation::BeforeDelete()
{
	DELE_PTR_FULL(SoundWave);
}

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
// ()
// Parameters:
// int                            BaseMidiNote                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TargetMidiNote                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch"));

	USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Params params;
	params.BaseMidiNote = BaseMidiNote;
	params.TargetMidiNote = TargetMidiNote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
// ()
// Parameters:
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(float Frequency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency"));

	USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Params params;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
// ()
// Parameters:
// int                            MidiNote                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(int MidiNote)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch"));

	USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Params params;
	params.MidiNote = MidiNote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
// ()
// Parameters:
// float                          BeatsPerMinute                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BeatMultiplier                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DivisionsOfWholeNote           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USoundUtilitiesBPFunctionLibrary::GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo"));

	USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Params params;
	params.BeatsPerMinute = BeatsPerMinute;
	params.BeatMultiplier = BeatMultiplier;
	params.DivisionsOfWholeNote = DivisionsOfWholeNote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USoundUtilitiesBPFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void USoundUtilitiesBPFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void USoundSimple::AfterRead()
{
	USoundBase::AfterRead();

	READ_PTR_FULL(SoundWave, USoundWave);
}

void USoundSimple::BeforeDelete()
{
	USoundBase::BeforeDelete();

	DELE_PTR_FULL(SoundWave);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
