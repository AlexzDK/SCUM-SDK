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

void FMagicLeapAudioDummyStruct::AfterRead()
{
}

void FMagicLeapAudioDummyStruct::BeforeDelete()
{
}

// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
// ()
// Parameters:
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackUnpluggedDelegate(const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate"));

	UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Params params;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
// ()
// Parameters:
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackPluggedDelegate(const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate"));

	UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Params params;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
// ()
// Parameters:
// bool                           IsMuted                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapAudioFunctionLibrary::SetMicMute(bool IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute"));

	UMagicLeapAudioFunctionLibrary_SetMicMute_Params params;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapAudioFunctionLibrary::IsMicMuted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted"));

	UMagicLeapAudioFunctionLibrary_IsMicMuted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapAudioFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapAudioFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
