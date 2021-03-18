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

// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class SoundUtilities.SoundUtilitiesBPFunctionLibrary"));
		return ptr;
	}



	float GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote);
	int GetMIDIPitchFromFrequency(float Frequency);
	float GetFrequencyFromMIDIPitch(int MidiNote);
	float GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote);
	void AfterRead();
	void BeforeDelete();

};

// Class SoundUtilities.SoundSimple
// 0x0018 (FullSize[0x01D0] - InheritedSize[0x01B8])
class USoundSimple : public USoundBase
{
public:
	TArray<struct FSoundVariation>                     Variations;                                                // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundWave*                                  SoundWave;                                                 // 0x01C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class SoundUtilities.SoundSimple"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
