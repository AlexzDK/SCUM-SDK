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

void FTemplateSequenceBindingOverrideData::AfterRead()
{
}

void FTemplateSequenceBindingOverrideData::BeforeDelete()
{
}

void USequenceCameraShakeCameraStandIn::AfterRead()
{
	UObject::AfterRead();

}

void USequenceCameraShakeCameraStandIn::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USequenceCameraShake::AfterRead()
{
	UCameraShakeBase::AfterRead();

	READ_PTR_FULL(Sequence, UCameraAnimationSequence);
	READ_PTR_FULL(Player, USequenceCameraShakeSequencePlayer);
	READ_PTR_FULL(CameraStandIn, USequenceCameraShakeCameraStandIn);
}

void USequenceCameraShake::BeforeDelete()
{
	UCameraShakeBase::BeforeDelete();

	DELE_PTR_FULL(Sequence);
	DELE_PTR_FULL(Player);
	DELE_PTR_FULL(CameraStandIn);
}

void USequenceCameraShakeSequencePlayer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(BoundObjectOverride, UObject);
	READ_PTR_FULL(Sequence, UMovieSceneSequence);
}

void USequenceCameraShakeSequencePlayer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(BoundObjectOverride);
	DELE_PTR_FULL(Sequence);
}

void UTemplateSequenceSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UTemplateSequenceSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UTemplateSequenceTrack::AfterRead()
{
	UMovieSceneSubTrack::AfterRead();

}

void UTemplateSequenceTrack::BeforeDelete()
{
	UMovieSceneSubTrack::BeforeDelete();

}

void UTemplateSequence::AfterRead()
{
	UMovieSceneSequence::AfterRead();

	READ_PTR_FULL(MovieScene, UMovieScene);
}

void UTemplateSequence::BeforeDelete()
{
	UMovieSceneSequence::BeforeDelete();

	DELE_PTR_FULL(MovieScene);
}

void UCameraAnimationSequence::AfterRead()
{
	UTemplateSequence::AfterRead();

}

void UCameraAnimationSequence::BeforeDelete()
{
	UTemplateSequence::BeforeDelete();

}

// Function TemplateSequence.TemplateSequenceActor.SetSequence
// ()
// Parameters:
// class UTemplateSequence*       InSequence                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATemplateSequenceActor::SetSequence(class UTemplateSequence* InSequence)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.SetSequence"));

	ATemplateSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TemplateSequence.TemplateSequenceActor.SetBinding
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATemplateSequenceActor::SetBinding(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.SetBinding"));

	ATemplateSequenceActor_SetBinding_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TemplateSequence.TemplateSequenceActor.LoadSequence
// ()
// Parameters:
// class UTemplateSequence*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequence* ATemplateSequenceActor::LoadSequence()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.LoadSequence"));

	ATemplateSequenceActor_LoadSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
// ()
// Parameters:
// class UTemplateSequencePlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer"));

	ATemplateSequenceActor_GetSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequenceActor.GetSequence
// ()
// Parameters:
// class UTemplateSequence*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequence* ATemplateSequenceActor::GetSequence()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.GetSequence"));

	ATemplateSequenceActor_GetSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ATemplateSequenceActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SequencePlayer, UTemplateSequencePlayer);
}

void ATemplateSequenceActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SequencePlayer);
}

// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTemplateSequence*       TemplateSequence               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ATemplateSequenceActor*  OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTemplateSequencePlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequencePlayer* UTemplateSequencePlayer::CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer"));

	UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TemplateSequence = TemplateSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;


	return params.ReturnValue;
}


void UTemplateSequencePlayer::AfterRead()
{
	UMovieSceneSequencePlayer::AfterRead();

}

void UTemplateSequencePlayer::BeforeDelete()
{
	UMovieSceneSequencePlayer::BeforeDelete();

}

void UTemplateSequenceSection::AfterRead()
{
	UMovieSceneSubSection::AfterRead();

}

void UTemplateSequenceSection::BeforeDelete()
{
	UMovieSceneSubSection::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
