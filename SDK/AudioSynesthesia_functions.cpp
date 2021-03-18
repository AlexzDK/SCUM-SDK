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

void UAudioSynesthesiaNRTSettings::AfterRead()
{
	UAudioAnalyzerNRTSettings::AfterRead();

}

void UAudioSynesthesiaNRTSettings::BeforeDelete()
{
	UAudioAnalyzerNRTSettings::BeforeDelete();

}

void UAudioSynesthesiaNRT::AfterRead()
{
	UAudioAnalyzerNRT::AfterRead();

}

void UAudioSynesthesiaNRT::BeforeDelete()
{
	UAudioAnalyzerNRT::BeforeDelete();

}

// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
// ()
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime"));

	ULoudnessNRT_GetNormalizedLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
// ()
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime"));

	ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
// ()
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float* OutLoudness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime"));

	ULoudnessNRT_GetLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
// ()
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime"));

	ULoudnessNRT_GetChannelLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;

}


void ULoudnessNRT::AfterRead()
{
	UAudioSynesthesiaNRT::AfterRead();

	READ_PTR_FULL(Settings, ULoudnessNRTSettings);
}

void ULoudnessNRT::BeforeDelete()
{
	UAudioSynesthesiaNRT::BeforeDelete();

	DELE_PTR_FULL(Settings);
}

void UOnsetNRTSettings::AfterRead()
{
	UAudioSynesthesiaNRTSettings::AfterRead();

}

void UOnsetNRTSettings::BeforeDelete()
{
	UAudioSynesthesiaNRTSettings::BeforeDelete();

}

// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
// ()
// Parameters:
// float                          InStartSeconds                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InEndSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  OutOnsetTimestamps             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                  OutOnsetStrengths              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes"));

	UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params params;
	params.InStartSeconds = InStartSeconds;
	params.InEndSeconds = InEndSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = params.OutOnsetTimestamps;
	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = params.OutOnsetStrengths;

}


// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
// ()
// Parameters:
// float                          InStartSeconds                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InEndSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  OutOnsetTimestamps             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                  OutOnsetStrengths              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes"));

	UOnsetNRT_GetChannelOnsetsBetweenTimes_Params params;
	params.InStartSeconds = InStartSeconds;
	params.InEndSeconds = InEndSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = params.OutOnsetTimestamps;
	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = params.OutOnsetStrengths;

}


void UOnsetNRT::AfterRead()
{
	UAudioSynesthesiaNRT::AfterRead();

	READ_PTR_FULL(Settings, UOnsetNRTSettings);
}

void UOnsetNRT::BeforeDelete()
{
	UAudioSynesthesiaNRT::BeforeDelete();

	DELE_PTR_FULL(Settings);
}

void UConstantQNRTSettings::AfterRead()
{
	UAudioSynesthesiaNRTSettings::AfterRead();

}

void UConstantQNRTSettings::BeforeDelete()
{
	UAudioSynesthesiaNRTSettings::BeforeDelete();

}

// Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
// ()
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  OutConstantQ                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime"));

	UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConstantQ != nullptr)
		*OutConstantQ = params.OutConstantQ;

}


// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
// ()
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  OutConstantQ                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime"));

	UConstantQNRT_GetChannelConstantQAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConstantQ != nullptr)
		*OutConstantQ = params.OutConstantQ;

}


void UConstantQNRT::AfterRead()
{
	UAudioSynesthesiaNRT::AfterRead();

	READ_PTR_FULL(Settings, UConstantQNRTSettings);
}

void UConstantQNRT::BeforeDelete()
{
	UAudioSynesthesiaNRT::BeforeDelete();

	DELE_PTR_FULL(Settings);
}

void ULoudnessNRTSettings::AfterRead()
{
	UAudioSynesthesiaNRTSettings::AfterRead();

}

void ULoudnessNRTSettings::BeforeDelete()
{
	UAudioSynesthesiaNRTSettings::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
