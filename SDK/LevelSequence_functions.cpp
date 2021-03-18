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

void FLevelSequenceCameraSettings::AfterRead()
{
}

void FLevelSequenceCameraSettings::BeforeDelete()
{
}

void FBoundActorProxy::AfterRead()
{
}

void FBoundActorProxy::BeforeDelete()
{
}

void FLevelSequenceAnimSequenceLinkItem::AfterRead()
{
}

void FLevelSequenceAnimSequenceLinkItem::BeforeDelete()
{
}

void FLevelSequenceBindingReference::AfterRead()
{
}

void FLevelSequenceBindingReference::BeforeDelete()
{
}

void FLevelSequenceBindingReferenceArray::AfterRead()
{
}

void FLevelSequenceBindingReferenceArray::BeforeDelete()
{
}

void FLevelSequenceBindingReferences::AfterRead()
{
}

void FLevelSequenceBindingReferences::BeforeDelete()
{
}

void FLevelSequenceLegacyObjectReference::AfterRead()
{
}

void FLevelSequenceLegacyObjectReference::BeforeDelete()
{
}

void FLevelSequenceObjectReferenceMap::AfterRead()
{
}

void FLevelSequenceObjectReferenceMap::BeforeDelete()
{
}

void FLevelSequenceObject::AfterRead()
{
}

void FLevelSequenceObject::BeforeDelete()
{
}

void FLevelSequenceSnapshotSettings::AfterRead()
{
}

void FLevelSequenceSnapshotSettings::BeforeDelete()
{
}

void FLevelSequencePlayerSnapshot::AfterRead()
{
	READ_PTR_FULL(ActiveShot, ULevelSequence);
}

void FLevelSequencePlayerSnapshot::BeforeDelete()
{
	DELE_PTR_FULL(ActiveShot);
}

void UAnimSequenceLevelSequenceLink::AfterRead()
{
	UAssetUserData::AfterRead();

}

void UAnimSequenceLevelSequenceLink::BeforeDelete()
{
	UAssetUserData::BeforeDelete();

}

void UDefaultLevelSequenceInstanceData::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(TransformOriginActor, AActor);
}

void UDefaultLevelSequenceInstanceData::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(TransformOriginActor);
}

void ULevelSequenceMetaData::AfterRead()
{
	UInterface::AfterRead();

}

void ULevelSequenceMetaData::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
// ()
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequence::RemoveMetaDataByClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequence.RemoveMetaDataByClass"));

	ULevelSequence_RemoveMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// ()
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ULevelSequence::FindOrAddMetaDataByClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass"));

	ULevelSequence_FindOrAddMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequence.FindMetaDataByClass
// ()
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ULevelSequence::FindMetaDataByClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequence.FindMetaDataByClass"));

	ULevelSequence_FindMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequence.CopyMetaData
// ()
// Parameters:
// class UObject*                 InMetaData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ULevelSequence::CopyMetaData(class UObject* InMetaData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequence.CopyMetaData"));

	ULevelSequence_CopyMetaData_Params params;
	params.InMetaData = InMetaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULevelSequence::AfterRead()
{
	UMovieSceneSequence::AfterRead();

	READ_PTR_FULL(MovieScene, UMovieScene);
	READ_PTR_FULL(DirectorClass, UClass);
}

void ULevelSequence::BeforeDelete()
{
	UMovieSceneSequence::BeforeDelete();

	DELE_PTR_FULL(MovieScene);
	DELE_PTR_FULL(DirectorClass);
}

void ULevelSequenceBurnInInitSettings::AfterRead()
{
	UObject::AfterRead();

}

void ULevelSequenceBurnInInitSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// ()
// Parameters:
// struct FSoftClassPath          InBurnInClass                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn"));

	ULevelSequenceBurnInOptions_SetBurnIn_Params params;
	params.InBurnInClass = InBurnInClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULevelSequenceBurnInOptions::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Settings, ULevelSequenceBurnInInitSettings);
}

void ULevelSequenceBurnInOptions::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Settings);
}

// Function LevelSequence.LevelSequenceActor.ShowBurnin
// ()
void ALevelSequenceActor::ShowBurnin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.ShowBurnin"));

	ALevelSequenceActor_ShowBurnin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetSequence
// ()
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.SetSequence"));

	ALevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
// ()
// Parameters:
// bool                           ReplicatePlayback              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback"));

	ALevelSequenceActor_SetReplicatePlayback_Params params;
	params.ReplicatePlayback = ReplicatePlayback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetBindingByTag
// ()
// Parameters:
// struct FName                   BindingTag                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::SetBindingByTag(const struct FName& BindingTag, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.SetBindingByTag"));

	ALevelSequenceActor_SetBindingByTag_Params params;
	params.BindingTag = BindingTag;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.SetBinding"));

	ALevelSequenceActor_SetBinding_Params params;
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// ()
void ALevelSequenceActor::ResetBindings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.ResetBindings"));

	ALevelSequenceActor_ResetBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.ResetBinding"));

	ALevelSequenceActor_ResetBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
// ()
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::RemoveBindingByTag(const struct FName& Tag, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.RemoveBindingByTag"));

	ALevelSequenceActor_RemoveBindingByTag_Params params;
	params.Tag = Tag;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.RemoveBinding"));

	ALevelSequenceActor_RemoveBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
// ()
void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature"));

	ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.LoadSequence
// ()
// Parameters:
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequence* ALevelSequenceActor::LoadSequence()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.LoadSequence"));

	ALevelSequenceActor_LoadSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.HideBurnin
// ()
void ALevelSequenceActor::HideBurnin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.HideBurnin"));

	ALevelSequenceActor_HideBurnin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
// ()
// Parameters:
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.GetSequencePlayer"));

	ALevelSequenceActor_GetSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.GetSequence
// ()
// Parameters:
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequence* ALevelSequenceActor::GetSequence()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.GetSequence"));

	ALevelSequenceActor_GetSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.FindNamedBindings
// ()
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMovieSceneObjectBindingID> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<struct FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.FindNamedBindings"));

	ALevelSequenceActor_FindNamedBindings_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.FindNamedBinding
// ()
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.FindNamedBinding"));

	ALevelSequenceActor_FindNamedBinding_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.AddBindingByTag
// ()
// Parameters:
// struct FName                   BindingTag                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::AddBindingByTag(const struct FName& BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.AddBindingByTag"));

	ALevelSequenceActor_AddBindingByTag_Params params;
	params.BindingTag = BindingTag;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.AddBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.AddBinding"));

	ALevelSequenceActor_AddBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ALevelSequenceActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SequencePlayer, ULevelSequencePlayer);
	READ_PTR_FULL(BurnInOptions, ULevelSequenceBurnInOptions);
	READ_PTR_FULL(BindingOverrides, UMovieSceneBindingOverrides);
	READ_PTR_FULL(DefaultInstanceData, UObject);
	READ_PTR_FULL(BurnInInstance, ULevelSequenceBurnIn);
}

void ALevelSequenceActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SequencePlayer);
	DELE_PTR_FULL(BurnInOptions);
	DELE_PTR_FULL(BindingOverrides);
	DELE_PTR_FULL(DefaultInstanceData);
	DELE_PTR_FULL(BurnInInstance);
}

void ULevelSequenceAnimSequenceLink::AfterRead()
{
	UAssetUserData::AfterRead();

}

void ULevelSequenceAnimSequenceLink::BeforeDelete()
{
	UAssetUserData::BeforeDelete();

}

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// ()
// Parameters:
// class UObject*                 InSettings                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceBurnIn.SetSettings"));

	ULevelSequenceBurnIn_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass"));

	ULevelSequenceBurnIn_GetSettingsClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULevelSequenceBurnIn::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(LevelSequenceActor, ALevelSequenceActor);
}

void ULevelSequenceBurnIn::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(LevelSequenceActor);
}

// Function LevelSequence.LevelSequenceDirector.OnCreated
// ()
void ULevelSequenceDirector::OnCreated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceDirector.OnCreated"));

	ULevelSequenceDirector_OnCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULevelSequenceDirector::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Player, ULevelSequencePlayer);
}

void ULevelSequenceDirector::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Player);
}

void ULegacyLevelSequenceDirectorBlueprint::AfterRead()
{
	UBlueprint::AfterRead();

}

void ULegacyLevelSequenceDirectorBlueprint::BeforeDelete()
{
	UBlueprint::BeforeDelete();

}

// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
// ()
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent"));

	ULevelSequencePlayer_GetActiveCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ALevelSequenceActor*     OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer"));

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;


	return params.ReturnValue;
}


void ULevelSequencePlayer::AfterRead()
{
	UMovieSceneSequencePlayer::AfterRead();

}

void ULevelSequencePlayer::BeforeDelete()
{
	UMovieSceneSequencePlayer::BeforeDelete();

}

// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
// ()
// Parameters:
// float                          DesyncThresholdSeconds         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer"));

	ALevelSequenceMediaController_SynchronizeToServer_Params params;
	params.DesyncThresholdSeconds = DesyncThresholdSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceMediaController.Play
// ()
void ALevelSequenceMediaController::Play()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceMediaController.Play"));

	ALevelSequenceMediaController_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
// ()
void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds"));

	ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceMediaController.GetSequence
// ()
// Parameters:
// class ALevelSequenceActor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ALevelSequenceActor* ALevelSequenceMediaController::GetSequence()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceMediaController.GetSequence"));

	ALevelSequenceMediaController_GetSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
// ()
// Parameters:
// class UMediaComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaComponent* ALevelSequenceMediaController::GetMediaComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceMediaController.GetMediaComponent"));

	ALevelSequenceMediaController_GetMediaComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ALevelSequenceMediaController::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Sequence, ALevelSequenceActor);
	READ_PTR_FULL(MediaComponent, UMediaComponent);
}

void ALevelSequenceMediaController::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Sequence);
	DELE_PTR_FULL(MediaComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
