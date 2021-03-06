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

void FMediaSoundComponentSpectralData::AfterRead()
{
}

void FMediaSoundComponentSpectralData::BeforeDelete()
{
}

void FMediaCaptureDevice::AfterRead()
{
}

void FMediaCaptureDevice::BeforeDelete()
{
}

// Function MediaAssets.MediaSource.Validate
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaSource::Validate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.Validate"));

	UMediaSource_Validate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaSource.SetMediaOptionString
// ()
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionString(const struct FName& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionString"));

	UMediaSource_SetMediaOptionString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaSource.SetMediaOptionInt64
// ()
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionInt64(const struct FName& Key, int64_t Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionInt64"));

	UMediaSource_SetMediaOptionInt64_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaSource.SetMediaOptionFloat
// ()
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionFloat(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionFloat"));

	UMediaSource_SetMediaOptionFloat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaSource.SetMediaOptionBool
// ()
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionBool(const struct FName& Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionBool"));

	UMediaSource_SetMediaOptionBool_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaSource.GetUrl
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaSource::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.GetUrl"));

	UMediaSource_GetUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMediaSource::AfterRead()
{
	UObject::AfterRead();

}

void UMediaSource::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UBaseMediaSource::AfterRead()
{
	UMediaSource::AfterRead();

}

void UBaseMediaSource::BeforeDelete()
{
	UMediaSource::BeforeDelete();

}

void UTimeSynchronizableMediaSource::AfterRead()
{
	UBaseMediaSource::AfterRead();

}

void UTimeSynchronizableMediaSource::BeforeDelete()
{
	UBaseMediaSource::BeforeDelete();

}

// Function MediaAssets.FileMediaSource.SetFilePath
// ()
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFileMediaSource::SetFilePath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.FileMediaSource.SetFilePath"));

	UFileMediaSource_SetFilePath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UFileMediaSource::AfterRead()
{
	UBaseMediaSource::AfterRead();

}

void UFileMediaSource::BeforeDelete()
{
	UBaseMediaSource::BeforeDelete();

}

// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
// ()
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices"));

	UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
// ()
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices"));

	UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
// ()
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices"));

	UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


void UMediaBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMediaBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function MediaAssets.MediaComponent.GetMediaTexture
// ()
// Parameters:
// class UMediaTexture*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaTexture* UMediaComponent::GetMediaTexture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaComponent.GetMediaTexture"));

	UMediaComponent_GetMediaTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaComponent.GetMediaPlayer
// ()
// Parameters:
// class UMediaPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlayer* UMediaComponent::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaComponent.GetMediaPlayer"));

	UMediaComponent_GetMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMediaComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(MediaTexture, UMediaTexture);
	READ_PTR_FULL(MediaPlayer, UMediaPlayer);
}

void UMediaComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(MediaTexture);
	DELE_PTR_FULL(MediaPlayer);
}

void UMediaTimeStampInfo::AfterRead()
{
	UObject::AfterRead();

}

void UMediaTimeStampInfo::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function MediaAssets.MediaPlayer.SupportsSeeking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsSeeking()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsSeeking"));

	UMediaPlayer_SupportsSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsScrubbing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsScrubbing"));

	UMediaPlayer_SupportsScrubbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsRate
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsRate"));

	UMediaPlayer_SupportsRate_Params params;
	params.Rate = Rate;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetViewRotation
// ()
// Parameters:
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetViewRotation"));

	UMediaPlayer_SetViewRotation_Params params;
	params.Rotation = Rotation;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetViewField
// ()
// Parameters:
// float                          Horizontal                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Vertical                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetViewField"));

	UMediaPlayer_SetViewField_Params params;
	params.Horizontal = Horizontal;
	params.Vertical = Vertical;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FrameRate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate"));

	UMediaPlayer_SetVideoTrackFrameRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetTrackFormat
// ()
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetTrackFormat"));

	UMediaPlayer_SetTrackFormat_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetTimeDelay
// ()
// Parameters:
// struct FTimespan               TimeDelay                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetTimeDelay"));

	UMediaPlayer_SetTimeDelay_Params params;
	params.TimeDelay = TimeDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaPlayer.SetRate
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetRate"));

	UMediaPlayer_SetRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetNativeVolume
// ()
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetNativeVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetNativeVolume"));

	UMediaPlayer_SetNativeVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetMediaOptions
// ()
// Parameters:
// class UMediaSource*            Options                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetMediaOptions(class UMediaSource* Options)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetMediaOptions"));

	UMediaPlayer_SetMediaOptions_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaPlayer.SetLooping
// ()
// Parameters:
// bool                           Looping                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetLooping(bool Looping)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetLooping"));

	UMediaPlayer_SetLooping_Params params;
	params.Looping = Looping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
// ()
// Parameters:
// struct FName                   PlayerName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetDesiredPlayerName(const struct FName& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetDesiredPlayerName"));

	UMediaPlayer_SetDesiredPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaPlayer.SetBlockOnTime
// ()
// Parameters:
// struct FTimespan               Time                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetBlockOnTime"));

	UMediaPlayer_SetBlockOnTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaPlayer.SelectTrack
// ()
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SelectTrack(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SelectTrack"));

	UMediaPlayer_SelectTrack_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Seek
// ()
// Parameters:
// struct FTimespan               Time                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Seek(const struct FTimespan& Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Seek"));

	UMediaPlayer_Seek_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Rewind
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Rewind()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Rewind"));

	UMediaPlayer_Rewind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Reopen
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Reopen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Reopen"));

	UMediaPlayer_Reopen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Previous
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Previous()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Previous"));

	UMediaPlayer_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.PlayAndSeek
// ()
void UMediaPlayer::PlayAndSeek()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.PlayAndSeek"));

	UMediaPlayer_PlayAndSeek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaPlayer.Play
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Play"));

	UMediaPlayer_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Pause
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Pause"));

	UMediaPlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenUrl
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenUrl"));

	UMediaPlayer_OpenUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenSourceWithOptions
// ()
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMediaPlayerOptions     Options                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSourceWithOptions"));

	UMediaPlayer_OpenSourceWithOptions_Params params;
	params.MediaSource = MediaSource;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenSourceLatent
// ()
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMediaPlayerOptions     Options                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSourceLatent"));

	UMediaPlayer_OpenSourceLatent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.MediaSource = MediaSource;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function MediaAssets.MediaPlayer.OpenSource
// ()
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSource"));

	UMediaPlayer_OpenSource_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
// ()
// Parameters:
// class UMediaPlaylist*          InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenPlaylistIndex"));

	UMediaPlayer_OpenPlaylistIndex_Params params;
	params.InPlaylist = InPlaylist;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylist
// ()
// Parameters:
// class UMediaPlaylist*          InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenPlaylist"));

	UMediaPlayer_OpenPlaylist_Params params;
	params.InPlaylist = InPlaylist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenFile
// ()
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenFile"));

	UMediaPlayer_OpenFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Next
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Next()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Next"));

	UMediaPlayer_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsReady
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsReady"));

	UMediaPlayer_IsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPreparing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPreparing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPreparing"));

	UMediaPlayer_IsPreparing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPlaying"));

	UMediaPlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPaused"));

	UMediaPlayer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsLooping
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsLooping"));

	UMediaPlayer_IsLooping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsConnecting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsConnecting()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsConnecting"));

	UMediaPlayer_IsConnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsClosed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsClosed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsClosed"));

	UMediaPlayer_IsClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsBuffering
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsBuffering()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsBuffering"));

	UMediaPlayer_IsBuffering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.HasError
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::HasError()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.HasError"));

	UMediaPlayer_HasError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetViewRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UMediaPlayer::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetViewRotation"));

	UMediaPlayer_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackType
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetVideoTrackType(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackType"));

	UMediaPlayer_GetVideoTrackType_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFloatRange             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates"));

	UMediaPlayer_GetVideoTrackFrameRates_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVideoTrackFrameRate(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate"));

	UMediaPlayer_GetVideoTrackFrameRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions"));

	UMediaPlayer_GetVideoTrackDimensions_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio"));

	UMediaPlayer_GetVideoTrackAspectRatio_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVerticalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView"));

	UMediaPlayer_GetVerticalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetUrl
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetUrl"));

	UMediaPlayer_GetUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackLanguage
// ()
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetTrackLanguage(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackLanguage"));

	UMediaPlayer_GetTrackLanguage_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackFormat
// ()
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackFormat"));

	UMediaPlayer_GetTrackFormat_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackDisplayName
// ()
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMediaPlayer::GetTrackDisplayName(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackDisplayName"));

	UMediaPlayer_GetTrackDisplayName_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTimeStamp
// ()
// Parameters:
// class UMediaTimeStampInfo*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaTimeStampInfo* UMediaPlayer::GetTimeStamp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTimeStamp"));

	UMediaPlayer_GetTimeStamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTimeDelay
// ()
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetTimeDelay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTimeDelay"));

	UMediaPlayer_GetTimeDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTime
// ()
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTime"));

	UMediaPlayer_GetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetSupportedRates
// ()
// Parameters:
// TArray<struct FFloatRange>     OutRates                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetSupportedRates"));

	UMediaPlayer_GetSupportedRates_Params params;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRates != nullptr)
		*OutRates = params.OutRates;

}


// Function MediaAssets.MediaPlayer.GetSelectedTrack
// ()
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetSelectedTrack(MediaAssets_EMediaPlayerTrack TrackType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetSelectedTrack"));

	UMediaPlayer_GetSelectedTrack_Params params;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetRate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetRate"));

	UMediaPlayer_GetRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlaylistIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetPlaylistIndex()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlaylistIndex"));

	UMediaPlayer_GetPlaylistIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlaylist
// ()
// Parameters:
// class UMediaPlaylist*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlaylist* UMediaPlayer::GetPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlaylist"));

	UMediaPlayer_GetPlaylist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlayerName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMediaPlayer::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlayerName"));

	UMediaPlayer_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTracks
// ()
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetNumTracks(MediaAssets_EMediaPlayerTrack TrackType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetNumTracks"));

	UMediaPlayer_GetNumTracks_Params params;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTrackFormats
// ()
// Parameters:
// MediaAssets_EMediaPlayerTrack  TrackType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetNumTrackFormats(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetNumTrackFormats"));

	UMediaPlayer_GetNumTrackFormats_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetMediaName
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMediaPlayer::GetMediaName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetMediaName"));

	UMediaPlayer_GetMediaName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetHorizontalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView"));

	UMediaPlayer_GetHorizontalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDuration
// ()
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDuration"));

	UMediaPlayer_GetDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMediaPlayer::GetDesiredPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDesiredPlayerName"));

	UMediaPlayer_GetDesiredPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackType
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetAudioTrackType(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackType"));

	UMediaPlayer_GetAudioTrackType_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetAudioTrackSampleRate(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate"));

	UMediaPlayer_GetAudioTrackSampleRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetAudioTrackChannels(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackChannels"));

	UMediaPlayer_GetAudioTrackChannels_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Close
// ()
void UMediaPlayer::Close()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Close"));

	UMediaPlayer_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaPlayer.CanPlayUrl
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPlayUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlayUrl"));

	UMediaPlayer_CanPlayUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPlaySource
// ()
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlaySource"));

	UMediaPlayer_CanPlaySource_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPause
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPause()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPause"));

	UMediaPlayer_CanPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMediaPlayer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Playlist, UMediaPlaylist);
}

void UMediaPlayer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Playlist);
}

// Function MediaAssets.MediaPlaylist.Replace
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*            Replacement                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Replace(int Index, class UMediaSource* Replacement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Replace"));

	UMediaPlaylist_Replace_Params params;
	params.Index = Index;
	params.Replacement = Replacement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.RemoveAt
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::RemoveAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.RemoveAt"));

	UMediaPlaylist_RemoveAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Remove
// ()
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Remove(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Remove"));

	UMediaPlaylist_Remove_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Num
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlaylist::Num()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Num"));

	UMediaPlaylist_Num_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Insert
// ()
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Insert"));

	UMediaPlaylist_Insert_Params params;
	params.MediaSource = MediaSource;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaPlaylist.GetRandom
// ()
// Parameters:
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetRandom(int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetRandom"));

	UMediaPlaylist_GetRandom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetPrevious
// ()
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetPrevious(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetPrevious"));

	UMediaPlaylist_GetPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetNext
// ()
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetNext(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetNext"));

	UMediaPlaylist_GetNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Get
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::Get(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Get"));

	UMediaPlaylist_Get_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.AddUrl
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::AddUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.AddUrl"));

	UMediaPlaylist_AddUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.AddFile
// ()
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::AddFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.AddFile"));

	UMediaPlaylist_AddFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Add
// ()
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Add(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Add"));

	UMediaPlaylist_Add_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMediaPlaylist::AfterRead()
{
	UObject::AfterRead();

}

void UMediaPlaylist::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
// ()
// Parameters:
// TArray<float>                  InFrequenciesToAnalyze         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// MediaAssets_EMediaSoundComponentFFTSize InFFTSize                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, MediaAssets_EMediaSoundComponentFFTSize InFFTSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings"));

	UMediaSoundComponent_SetSpectralAnalysisSettings_Params params;
	params.InFrequenciesToAnalyze = InFrequenciesToAnalyze;
	params.InFFTSize = InFFTSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaSoundComponent.SetMediaPlayer
// ()
// Parameters:
// class UMediaPlayer*            NewMediaPlayer                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetMediaPlayer"));

	UMediaSoundComponent_SetMediaPlayer_Params params;
	params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
// ()
// Parameters:
// int                            AttackTimeMsec                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReleaseTimeMsec                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetEnvelopeFollowingsettings(int AttackTimeMsec, int ReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings"));

	UMediaSoundComponent_SetEnvelopeFollowingsettings_Params params;
	params.AttackTimeMsec = AttackTimeMsec;
	params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
// ()
// Parameters:
// bool                           bInSpectralAnalysisEnabled     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis"));

	UMediaSoundComponent_SetEnableSpectralAnalysis_Params params;
	params.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
// ()
// Parameters:
// bool                           bInEnvelopeFollowing           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing"));

	UMediaSoundComponent_SetEnableEnvelopeFollowing_Params params;
	params.bInEnvelopeFollowing = bInEnvelopeFollowing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaSoundComponent.GetSpectralData
// ()
// Parameters:
// TArray<struct FMediaSoundComponentSpectralData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetSpectralData"));

	UMediaSoundComponent_GetSpectralData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
// ()
// Parameters:
// TArray<struct FMediaSoundComponentSpectralData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetNormalizedSpectralData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData"));

	UMediaSoundComponent_GetNormalizedSpectralData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundComponent.GetMediaPlayer
// ()
// Parameters:
// class UMediaPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlayer* UMediaSoundComponent::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetMediaPlayer"));

	UMediaSoundComponent_GetMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaSoundComponent::GetEnvelopeValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetEnvelopeValue"));

	UMediaSoundComponent_GetEnvelopeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
// ()
// Parameters:
// struct FSoundAttenuationSettings OutAttenuationSettings         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply"));

	UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAttenuationSettings != nullptr)
		*OutAttenuationSettings = params.OutAttenuationSettings;


	return params.ReturnValue;
}


void UMediaSoundComponent::AfterRead()
{
	USynthComponent::AfterRead();

	READ_PTR_FULL(MediaPlayer, UMediaPlayer);
}

void UMediaSoundComponent::BeforeDelete()
{
	USynthComponent::BeforeDelete();

	DELE_PTR_FULL(MediaPlayer);
}

// Function MediaAssets.MediaTexture.SetMediaPlayer
// ()
// Parameters:
// class UMediaPlayer*            NewMediaPlayer                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaTexture::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.SetMediaPlayer"));

	UMediaTexture_SetMediaPlayer_Params params;
	params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaAssets.MediaTexture.GetWidth
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaTexture::GetWidth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetWidth"));

	UMediaTexture_GetWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetMediaPlayer
// ()
// Parameters:
// class UMediaPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlayer* UMediaTexture::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetMediaPlayer"));

	UMediaTexture_GetMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetHeight
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaTexture::GetHeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetHeight"));

	UMediaTexture_GetHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetAspectRatio
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaTexture::GetAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetAspectRatio"));

	UMediaTexture_GetAspectRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMediaTexture::AfterRead()
{
	UTexture::AfterRead();

	READ_PTR_FULL(MediaPlayer, UMediaPlayer);
}

void UMediaTexture::BeforeDelete()
{
	UTexture::BeforeDelete();

	DELE_PTR_FULL(MediaPlayer);
}

void UPlatformMediaSource::AfterRead()
{
	UMediaSource::AfterRead();

	READ_PTR_FULL(MediaSource, UMediaSource);
}

void UPlatformMediaSource::BeforeDelete()
{
	UMediaSource::BeforeDelete();

	DELE_PTR_FULL(MediaSource);
}

void UStreamMediaSource::AfterRead()
{
	UBaseMediaSource::AfterRead();

}

void UStreamMediaSource::BeforeDelete()
{
	UBaseMediaSource::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
