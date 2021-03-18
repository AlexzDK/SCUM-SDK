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

void FAudioCaptureDeviceInfo::AfterRead()
{
}

void FAudioCaptureDeviceInfo::BeforeDelete()
{
}

void UAudioCaptureComponent::AfterRead()
{
	USynthComponent::AfterRead();

}

void UAudioCaptureComponent::BeforeDelete()
{
	USynthComponent::BeforeDelete();

}

// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
// ()
// Parameters:
// class UAudioCapture*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAudioCapture* UAudioCaptureFunctionLibrary::CreateAudioCapture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture"));

	UAudioCaptureFunctionLibrary_CreateAudioCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAudioCaptureFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAudioCaptureFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function AudioCapture.AudioCapture.StopCapturingAudio
// ()
void UAudioCapture::StopCapturingAudio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioCapture.AudioCapture.StopCapturingAudio"));

	UAudioCapture_StopCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioCapture.AudioCapture.StartCapturingAudio
// ()
void UAudioCapture::StartCapturingAudio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioCapture.AudioCapture.StartCapturingAudio"));

	UAudioCapture_StartCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioCapture.AudioCapture.IsCapturingAudio
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAudioCapture::IsCapturingAudio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioCapture.AudioCapture.IsCapturingAudio"));

	UAudioCapture_IsCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
// ()
// Parameters:
// struct FAudioCaptureDeviceInfo OutInfo                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo"));

	UAudioCapture_GetAudioCaptureDeviceInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;


	return params.ReturnValue;
}


void UAudioCapture::AfterRead()
{
	UAudioGenerator::AfterRead();

}

void UAudioCapture::BeforeDelete()
{
	UAudioGenerator::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
