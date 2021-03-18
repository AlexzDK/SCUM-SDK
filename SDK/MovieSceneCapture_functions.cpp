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

void FCapturedPixelsID::AfterRead()
{
}

void FCapturedPixelsID::BeforeDelete()
{
}

void FCompositionGraphCapturePasses::AfterRead()
{
}

void FCompositionGraphCapturePasses::BeforeDelete()
{
}

void FFrameMetrics::AfterRead()
{
}

void FFrameMetrics::BeforeDelete()
{
}

void FCapturedPixels::AfterRead()
{
}

void FCapturedPixels::BeforeDelete()
{
}

void FCaptureResolution::AfterRead()
{
}

void FCaptureResolution::BeforeDelete()
{
}

void FMovieSceneCaptureSettings::AfterRead()
{
	READ_PTR_FULL(GameModeOverride, UClass);
}

void FMovieSceneCaptureSettings::BeforeDelete()
{
	DELE_PTR_FULL(GameModeOverride);
}

void UMovieSceneCaptureInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneCaptureInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
// ()
// Parameters:
// class UClass*                  ProtocolType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCapture::SetImageCaptureProtocolType(class UClass* ProtocolType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType"));

	UMovieSceneCapture_SetImageCaptureProtocolType_Params params;
	params.ProtocolType = ProtocolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
// ()
// Parameters:
// class UClass*                  ProtocolType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCapture::SetAudioCaptureProtocolType(class UClass* ProtocolType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType"));

	UMovieSceneCapture_SetAudioCaptureProtocolType_Params params;
	params.ProtocolType = ProtocolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
// ()
// Parameters:
// class UMovieSceneCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol"));

	UMovieSceneCapture_GetImageCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
// ()
// Parameters:
// class UMovieSceneCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol"));

	UMovieSceneCapture_GetAudioCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneCapture::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ImageCaptureProtocol, UMovieSceneImageCaptureProtocolBase);
	READ_PTR_FULL(AudioCaptureProtocol, UMovieSceneAudioCaptureProtocolBase);
}

void UMovieSceneCapture::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ImageCaptureProtocol);
	DELE_PTR_FULL(AudioCaptureProtocol);
}

void ULevelCapture::AfterRead()
{
	UMovieSceneCapture::AfterRead();

}

void ULevelCapture::BeforeDelete()
{
	UMovieSceneCapture::BeforeDelete();

}

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneCaptureEnvironment::IsCaptureInProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress"));

	UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber"));

	UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime"));

	UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// ()
// Parameters:
// class UMovieSceneImageCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol"));

	UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// ()
// Parameters:
// class UMovieSceneAudioCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol"));

	UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneCaptureEnvironment::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneCaptureEnvironment::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneCaptureProtocolBase::IsCapturing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing"));

	UMovieSceneCaptureProtocolBase_IsCapturing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
// ()
// Parameters:
// MovieSceneCapture_EMovieSceneCaptureProtocolState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MovieSceneCapture_EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState"));

	UMovieSceneCaptureProtocolBase_GetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneCaptureProtocolBase::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneCaptureProtocolBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneImageCaptureProtocolBase::AfterRead()
{
	UMovieSceneCaptureProtocolBase::AfterRead();

}

void UMovieSceneImageCaptureProtocolBase::BeforeDelete()
{
	UMovieSceneCaptureProtocolBase::BeforeDelete();

}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
// ()
void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels"));

	UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// ()
// Parameters:
// struct FCapturedPixelsID       streamId                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(const struct FCapturedPixelsID& streamId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels"));

	UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params params;
	params.streamId = streamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// ()
// Parameters:
// class UTexture*                Buffer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID       BufferID                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUserDefinedCaptureProtocol::ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer"));

	UUserDefinedCaptureProtocol_ResolveBuffer_Params params;
	params.Buffer = Buffer;
	params.BufferID = BufferID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
// ()
void UUserDefinedCaptureProtocol::OnWarmUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp"));

	UUserDefinedCaptureProtocol_OnWarmUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
// ()
void UUserDefinedCaptureProtocol::OnTick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick"));

	UUserDefinedCaptureProtocol_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
// ()
void UUserDefinedCaptureProtocol::OnStartCapture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture"));

	UUserDefinedCaptureProtocol_OnStartCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserDefinedCaptureProtocol::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup"));

	UUserDefinedCaptureProtocol_OnSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
// ()
void UUserDefinedCaptureProtocol::OnPreTick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick"));

	UUserDefinedCaptureProtocol_OnPreTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
// ()
// Parameters:
// struct FCapturedPixels         Pixels                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID       ID                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFrameMetrics           FrameMetrics                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserDefinedCaptureProtocol::OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived"));

	UUserDefinedCaptureProtocol_OnPixelsReceived_Params params;
	params.Pixels = Pixels;
	params.ID = ID;
	params.FrameMetrics = FrameMetrics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
// ()
void UUserDefinedCaptureProtocol::OnPauseCapture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture"));

	UUserDefinedCaptureProtocol_OnPauseCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
// ()
void UUserDefinedCaptureProtocol::OnFinalize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize"));

	UUserDefinedCaptureProtocol_OnFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
// ()
void UUserDefinedCaptureProtocol::OnCaptureFrame()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame"));

	UUserDefinedCaptureProtocol_OnCaptureFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserDefinedCaptureProtocol::OnCanFinalize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize"));

	UUserDefinedCaptureProtocol_OnCanFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
// ()
void UUserDefinedCaptureProtocol::OnBeginFinalize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize"));

	UUserDefinedCaptureProtocol_OnBeginFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// ()
// Parameters:
// struct FFrameMetrics           ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics"));

	UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// ()
// Parameters:
// struct FFrameMetrics           InFrameMetrics                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUserDefinedCaptureProtocol::GenerateFilename(const struct FFrameMetrics& InFrameMetrics)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename"));

	UUserDefinedCaptureProtocol_GenerateFilename_Params params;
	params.InFrameMetrics = InFrameMetrics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUserDefinedCaptureProtocol::AfterRead()
{
	UMovieSceneImageCaptureProtocolBase::AfterRead();

	READ_PTR_FULL(World, UWorld);
}

void UUserDefinedCaptureProtocol::BeforeDelete()
{
	UMovieSceneImageCaptureProtocolBase::BeforeDelete();

	DELE_PTR_FULL(World);
}

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
// ()
// Parameters:
// struct FCapturedPixels         PixelData                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID       streamId                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFrameMetrics           FrameMetrics                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bCopyImageData                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& streamId, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk"));

	UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params params;
	params.PixelData = PixelData;
	params.streamId = streamId;
	params.FrameMetrics = FrameMetrics;
	params.bCopyImageData = bCopyImageData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame"));

	UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
// ()
// Parameters:
// class UTexture*                Buffer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID       streamId                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& streamId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer"));

	UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params params;
	params.Buffer = Buffer;
	params.streamId = streamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUserDefinedImageCaptureProtocol::AfterRead()
{
	UUserDefinedCaptureProtocol::AfterRead();

}

void UUserDefinedImageCaptureProtocol::BeforeDelete()
{
	UUserDefinedCaptureProtocol::BeforeDelete();

}

void UFrameGrabberProtocol::AfterRead()
{
	UMovieSceneImageCaptureProtocolBase::AfterRead();

}

void UFrameGrabberProtocol::BeforeDelete()
{
	UMovieSceneImageCaptureProtocolBase::BeforeDelete();

}

void UVideoCaptureProtocol::AfterRead()
{
	UFrameGrabberProtocol::AfterRead();

}

void UVideoCaptureProtocol::BeforeDelete()
{
	UFrameGrabberProtocol::BeforeDelete();

}

void UImageSequenceProtocol::AfterRead()
{
	UFrameGrabberProtocol::AfterRead();

}

void UImageSequenceProtocol::BeforeDelete()
{
	UFrameGrabberProtocol::BeforeDelete();

}

void UCompressedImageSequenceProtocol::AfterRead()
{
	UImageSequenceProtocol::AfterRead();

}

void UCompressedImageSequenceProtocol::BeforeDelete()
{
	UImageSequenceProtocol::BeforeDelete();

}

void UImageSequenceProtocol_BMP::AfterRead()
{
	UImageSequenceProtocol::AfterRead();

}

void UImageSequenceProtocol_BMP::BeforeDelete()
{
	UImageSequenceProtocol::BeforeDelete();

}

void UImageSequenceProtocol_PNG::AfterRead()
{
	UCompressedImageSequenceProtocol::AfterRead();

}

void UImageSequenceProtocol_PNG::BeforeDelete()
{
	UCompressedImageSequenceProtocol::BeforeDelete();

}

void UImageSequenceProtocol_JPG::AfterRead()
{
	UCompressedImageSequenceProtocol::AfterRead();

}

void UImageSequenceProtocol_JPG::BeforeDelete()
{
	UCompressedImageSequenceProtocol::BeforeDelete();

}

void UImageSequenceProtocol_EXR::AfterRead()
{
	UImageSequenceProtocol::AfterRead();

}

void UImageSequenceProtocol_EXR::BeforeDelete()
{
	UImageSequenceProtocol::BeforeDelete();

}

void UMovieSceneAudioCaptureProtocolBase::AfterRead()
{
	UMovieSceneCaptureProtocolBase::AfterRead();

}

void UMovieSceneAudioCaptureProtocolBase::BeforeDelete()
{
	UMovieSceneCaptureProtocolBase::BeforeDelete();

}

void UNullAudioCaptureProtocol::AfterRead()
{
	UMovieSceneAudioCaptureProtocolBase::AfterRead();

}

void UNullAudioCaptureProtocol::BeforeDelete()
{
	UMovieSceneAudioCaptureProtocolBase::BeforeDelete();

}

void UMasterAudioSubmixCaptureProtocol::AfterRead()
{
	UMovieSceneAudioCaptureProtocolBase::AfterRead();

}

void UMasterAudioSubmixCaptureProtocol::BeforeDelete()
{
	UMovieSceneAudioCaptureProtocolBase::BeforeDelete();

}

void UCompositionGraphCaptureProtocol::AfterRead()
{
	UMovieSceneImageCaptureProtocolBase::AfterRead();

	READ_PTR_FULL(PostProcessingMaterialPtr, UMaterialInterface);
}

void UCompositionGraphCaptureProtocol::BeforeDelete()
{
	UMovieSceneImageCaptureProtocolBase::BeforeDelete();

	DELE_PTR_FULL(PostProcessingMaterialPtr);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
