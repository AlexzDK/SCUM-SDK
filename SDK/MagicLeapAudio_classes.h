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

// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapAudio.MagicLeapAudioFunctionLibrary"));
		return ptr;
	}



	bool SetOnAudioJackUnpluggedDelegate(const struct FScriptDelegate& ResultDelegate);
	bool SetOnAudioJackPluggedDelegate(const struct FScriptDelegate& ResultDelegate);
	bool SetMicMute(bool IsMuted);
	bool IsMicMuted();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
