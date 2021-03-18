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

void FTimedDataInputEvaluationData::AfterRead()
{
}

void FTimedDataInputEvaluationData::BeforeDelete()
{
}

void FTimedDataChannelSampleTime::AfterRead()
{
}

void FTimedDataChannelSampleTime::BeforeDelete()
{
}

void UGenlockedTimecodeProvider::AfterRead()
{
	UTimecodeProvider::AfterRead();

}

void UGenlockedTimecodeProvider::BeforeDelete()
{
	UTimecodeProvider::BeforeDelete();

}

// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
// ()
// Parameters:
// struct FFrameTime              SourceTime                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              SourceRate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              DestinationRate                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameTime UTimeManagementBlueprintLibrary::TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime"));

	UTimeManagementBlueprintLibrary_TransformTime_Params params;
	params.SourceTime = SourceTime;
	params.SourceRate = SourceRate;
	params.DestinationRate = DestinationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
// ()
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger"));

	UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
// ()
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber"));

	UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
// ()
// Parameters:
// struct FFrameTime              SourceTime                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              SourceRate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              SnapToRate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameTime UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate"));

	UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params params;
	params.SourceTime = SourceTime;
	params.SourceRate = SourceRate;
	params.SnapToRate = SnapToRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// ()
// Parameters:
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              FrameRate                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate"));

	UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params params;
	params.TimeInSeconds = TimeInSeconds;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
// ()
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameNumber UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger"));

	UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
// ()
// Parameters:
// struct FFrameRate              InFrameRate                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              OtherFramerate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTimeManagementBlueprintLibrary::IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf"));

	UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params params;
	params.InFrameRate = InFrameRate;
	params.OtherFramerate = OtherFramerate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
// ()
// Parameters:
// struct FFrameRate              InFrameRate                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTimeManagementBlueprintLibrary::IsValid_Framerate(const struct FFrameRate& InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate"));

	UTimeManagementBlueprintLibrary_IsValid_Framerate_Params params;
	params.InFrameRate = InFrameRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
// ()
// Parameters:
// struct FFrameRate              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameRate UTimeManagementBlueprintLibrary::GetTimecodeFrameRate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate"));

	UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// ()
// Parameters:
// struct FTimecode               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimecode UTimeManagementBlueprintLibrary::GetTimecode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode"));

	UTimeManagementBlueprintLibrary_GetTimecode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
// ()
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameNumber UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger"));

	UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// ()
// Parameters:
// struct FTimecode               InTimecode                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForceSignDisplay              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString"));

	UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params params;
	params.InTimecode = InTimecode;
	params.bForceSignDisplay = bForceSignDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// ()
// Parameters:
// struct FQualifiedFrameTime     InFrameTime                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds"));

	UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params params;
	params.InFrameTime = InFrameTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// ()
// Parameters:
// struct FFrameRate              InFrameRate                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds"));

	UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params params;
	params.InFrameRate = InFrameRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
// ()
// Parameters:
// struct FFrameNumber            InFrameNumber                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger"));

	UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params params;
	params.InFrameNumber = InFrameNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
// ()
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger"));

	UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
// ()
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber"));

	UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTimeManagementBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UTimeManagementBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UTimeSynchronizationSource::AfterRead()
{
	UObject::AfterRead();

}

void UTimeSynchronizationSource::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UFixedFrameRateCustomTimeStep::AfterRead()
{
	UEngineCustomTimeStep::AfterRead();

}

void UFixedFrameRateCustomTimeStep::BeforeDelete()
{
	UEngineCustomTimeStep::BeforeDelete();

}

void UGenlockedCustomTimeStep::AfterRead()
{
	UFixedFrameRateCustomTimeStep::AfterRead();

}

void UGenlockedCustomTimeStep::BeforeDelete()
{
	UFixedFrameRateCustomTimeStep::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
