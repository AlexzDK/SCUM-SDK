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

void FMovieSceneStringChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneStringChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneStringPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneStringPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneIntegerPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneIntegerPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneEnumPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneEnumPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneBytePropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneBytePropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneBoolPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneBoolPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneSkeletalAnimationParams::AfterRead()
{
	READ_PTR_FULL(Animation, UAnimSequenceBase);
}

void FMovieSceneSkeletalAnimationParams::BeforeDelete()
{
	DELE_PTR_FULL(Animation);
}

void FMovieSceneSkeletalAnimationSectionTemplateParameters::AfterRead()
{
	FMovieSceneSkeletalAnimationParams::AfterRead();

}

void FMovieSceneSkeletalAnimationSectionTemplateParameters::BeforeDelete()
{
	FMovieSceneSkeletalAnimationParams::BeforeDelete();

}

void FMovieSceneSkeletalAnimationSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneSkeletalAnimationSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneSkeletalAnimRootMotionTrackParams::AfterRead()
{
}

void FMovieSceneSkeletalAnimRootMotionTrackParams::BeforeDelete()
{
}

void FMovieSceneSlomoSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneSlomoSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FLevelVisibilityComponentData::AfterRead()
{
	READ_PTR_FULL(Section, UMovieSceneLevelVisibilitySection);
}

void FLevelVisibilityComponentData::BeforeDelete()
{
	DELE_PTR_FULL(Section);
}

void FMovieSceneVectorKeyStructBase::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieSceneVectorKeyStructBase::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieSceneVector4KeyStruct::AfterRead()
{
	FMovieSceneVectorKeyStructBase::AfterRead();

}

void FMovieSceneVector4KeyStruct::BeforeDelete()
{
	FMovieSceneVectorKeyStructBase::BeforeDelete();

}

void FMovieSceneVectorKeyStruct::AfterRead()
{
	FMovieSceneVectorKeyStructBase::AfterRead();

}

void FMovieSceneVectorKeyStruct::BeforeDelete()
{
	FMovieSceneVectorKeyStructBase::BeforeDelete();

}

void FMovieSceneVector2DKeyStruct::AfterRead()
{
	FMovieSceneVectorKeyStructBase::AfterRead();

}

void FMovieSceneVector2DKeyStruct::BeforeDelete()
{
	FMovieSceneVectorKeyStructBase::BeforeDelete();

}

void FMovieSceneVisibilitySectionTemplate::AfterRead()
{
	FMovieSceneBoolPropertySectionTemplate::AfterRead();

}

void FMovieSceneVisibilitySectionTemplate::BeforeDelete()
{
	FMovieSceneBoolPropertySectionTemplate::BeforeDelete();

}

void FMovieSceneCameraShakeSourceTrigger::AfterRead()
{
	READ_PTR_FULL(ShakeClass, UClass);
}

void FMovieSceneCameraShakeSourceTrigger::BeforeDelete()
{
	DELE_PTR_FULL(ShakeClass);
}

void FMovieSceneCameraShakeSourceTriggerSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneCameraShakeSourceTriggerSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneColorKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieSceneColorKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieSceneColorSectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneColorSectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneEventPtrs::AfterRead()
{
	READ_PTR_FULL(Function, UFunction);
}

void FMovieSceneEventPtrs::BeforeDelete()
{
	DELE_PTR_FULL(Function);
}

void FMovieSceneEventPayloadVariable::AfterRead()
{
}

void FMovieSceneEventPayloadVariable::BeforeDelete()
{
}

void FMovieSceneEvent::AfterRead()
{
}

void FMovieSceneEvent::BeforeDelete()
{
}

void FMovieSceneEventChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneEventChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneEventParameters::AfterRead()
{
}

void FMovieSceneEventParameters::BeforeDelete()
{
}

void FEventPayload::AfterRead()
{
}

void FEventPayload::BeforeDelete()
{
}

void FMovieSceneEventSectionData::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneEventSectionData::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneEventTriggerData::AfterRead()
{
}

void FMovieSceneEventTriggerData::BeforeDelete()
{
}

void FMovieSceneEventSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneEventSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneFadeSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneFadeSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FScalarParameterNameAndCurve::AfterRead()
{
}

void FScalarParameterNameAndCurve::BeforeDelete()
{
}

void FBoolParameterNameAndCurve::AfterRead()
{
}

void FBoolParameterNameAndCurve::BeforeDelete()
{
}

void FVector2DParameterNameAndCurves::AfterRead()
{
}

void FVector2DParameterNameAndCurves::BeforeDelete()
{
}

void FVectorParameterNameAndCurves::AfterRead()
{
}

void FVectorParameterNameAndCurves::BeforeDelete()
{
}

void FColorParameterNameAndCurves::AfterRead()
{
}

void FColorParameterNameAndCurves::BeforeDelete()
{
}

void FTransformParameterNameAndCurves::AfterRead()
{
}

void FTransformParameterNameAndCurves::BeforeDelete()
{
}

void FMovieSceneParameterSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneMaterialParameterCollectionTemplate::AfterRead()
{
	FMovieSceneParameterSectionTemplate::AfterRead();

	READ_PTR_FULL(MPC, UMaterialParameterCollection);
}

void FMovieSceneMaterialParameterCollectionTemplate::BeforeDelete()
{
	FMovieSceneParameterSectionTemplate::BeforeDelete();

	DELE_PTR_FULL(MPC);
}

void FMovieSceneObjectPropertyTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneObjectPropertyTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneComponentMaterialSectionTemplate::AfterRead()
{
	FMovieSceneParameterSectionTemplate::AfterRead();

}

void FMovieSceneComponentMaterialSectionTemplate::BeforeDelete()
{
	FMovieSceneParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneParticleParameterSectionTemplate::AfterRead()
{
	FMovieSceneParameterSectionTemplate::AfterRead();

}

void FMovieSceneParticleParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneParticleChannel::AfterRead()
{
	FMovieSceneByteChannel::AfterRead();

}

void FMovieSceneParticleChannel::BeforeDelete()
{
	FMovieSceneByteChannel::BeforeDelete();

}

void FMovieSceneParticleSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneParticleSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieScenePrimitiveMaterialTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScenePrimitiveMaterialTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneVectorPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneVectorPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneCameraShakeSourceTriggerChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneCameraShakeSourceTriggerChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieScene3DPathSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScene3DPathSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneTransformMask::AfterRead()
{
}

void FMovieSceneTransformMask::BeforeDelete()
{
}

void FMovieScene3DTransformKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DTransformKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieScene3DScaleKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DScaleKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieScene3DRotationKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DRotationKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieScene3DLocationKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DLocationKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieScene3DTransformTemplateData::AfterRead()
{
}

void FMovieScene3DTransformTemplateData::BeforeDelete()
{
}

void FMovieSceneActorReferenceKey::AfterRead()
{
}

void FMovieSceneActorReferenceKey::BeforeDelete()
{
}

void FMovieSceneActorReferenceData::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneActorReferenceData::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneActorReferenceSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneActorReferenceSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneAudioSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

	READ_PTR_FULL(AudioSection, UMovieSceneAudioSection);
}

void FMovieSceneAudioSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

	DELE_PTR_FULL(AudioSection);
}

void FMovieSceneCameraAnimSectionData::AfterRead()
{
	READ_PTR_FULL(CameraAnim, UCameraAnim);
}

void FMovieSceneCameraAnimSectionData::BeforeDelete()
{
	DELE_PTR_FULL(CameraAnim);
}

void FMovieSceneAdditiveCameraAnimationTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneAdditiveCameraAnimationTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneCameraShakeSectionData::AfterRead()
{
	READ_PTR_FULL(ShakeClass, UClass);
}

void FMovieSceneCameraShakeSectionData::BeforeDelete()
{
	DELE_PTR_FULL(ShakeClass);
}

void FMovieSceneCameraShakeSectionTemplate::AfterRead()
{
	FMovieSceneAdditiveCameraAnimationTemplate::AfterRead();

}

void FMovieSceneCameraShakeSectionTemplate::BeforeDelete()
{
	FMovieSceneAdditiveCameraAnimationTemplate::BeforeDelete();

}

void FMovieSceneCameraAnimSectionTemplate::AfterRead()
{
	FMovieSceneAdditiveCameraAnimationTemplate::AfterRead();

}

void FMovieSceneCameraAnimSectionTemplate::BeforeDelete()
{
	FMovieSceneAdditiveCameraAnimationTemplate::BeforeDelete();

}

void FMovieSceneCameraShakeSourceShakeSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneCameraShakeSourceShakeSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void UMovieSceneCameraShakeSourceShakeTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneCameraShakeSourceShakeTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneCameraShakeSourceTriggerSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneCameraShakeSourceTriggerSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneCameraShakeSourceTriggerTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieSceneCameraShakeSourceTriggerTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UMovieSceneCameraShakeTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneCameraShakeTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// ()
// Parameters:
// struct FString                 InShotDisplayName              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCinematicShotSection::SetShotDisplayName(const struct FString& InShotDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName"));

	UMovieSceneCinematicShotSection_SetShotDisplayName_Params params;
	params.InShotDisplayName = InShotDisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMovieSceneCinematicShotSection::GetShotDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName"));

	UMovieSceneCinematicShotSection_GetShotDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneCinematicShotSection::AfterRead()
{
	UMovieSceneSubSection::AfterRead();

}

void UMovieSceneCinematicShotSection::BeforeDelete()
{
	UMovieSceneSubSection::BeforeDelete();

}

void UMovieSceneCinematicShotTrack::AfterRead()
{
	UMovieSceneSubTrack::AfterRead();

}

void UMovieSceneCinematicShotTrack::BeforeDelete()
{
	UMovieSceneSubTrack::BeforeDelete();

}

void UMovieSceneColorSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneColorSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScenePropertyTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

	READ_PTR_FULL(SectionToKey, UMovieSceneSection);
}

void UMovieScenePropertyTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

	DELE_PTR_FULL(SectionToKey);
}

void UMovieSceneColorTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneColorTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneComponentAttachmentInvalidatorSystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneComponentAttachmentInvalidatorSystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieSceneComponentAttachmentSystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneComponentAttachmentSystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieSceneComponentMobilitySystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneComponentMobilitySystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieScenePreAnimatedComponentTransformSystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieScenePreAnimatedComponentTransformSystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieScenePropertySystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

	READ_PTR_FULL(InstantiatorSystem, UMovieScenePropertyInstantiatorSystem);
}

void UMovieScenePropertySystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

	DELE_PTR_FULL(InstantiatorSystem);
}

void UMovieSceneComponentTransformSystem::AfterRead()
{
	UMovieScenePropertySystem::AfterRead();

}

void UMovieSceneComponentTransformSystem::BeforeDelete()
{
	UMovieScenePropertySystem::BeforeDelete();

}

void UMovieSceneEnumSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneEnumSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneEnumTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

	READ_PTR_FULL(Enum, UEnum);
}

void UMovieSceneEnumTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

	DELE_PTR_FULL(Enum);
}

void UMovieSceneEulerTransformPropertySystem::AfterRead()
{
	UMovieScenePropertySystem::AfterRead();

}

void UMovieSceneEulerTransformPropertySystem::BeforeDelete()
{
	UMovieScenePropertySystem::BeforeDelete();

}

void UMovieSceneEulerTransformTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneEulerTransformTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneEventSectionBase::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneEventSectionBase::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneEventRepeaterSection::AfterRead()
{
	UMovieSceneEventSectionBase::AfterRead();

}

void UMovieSceneEventRepeaterSection::BeforeDelete()
{
	UMovieSceneEventSectionBase::BeforeDelete();

}

void UMovieSceneEventSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneEventSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneEventSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UMovieSceneEventSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UMovieScenePreSpawnEventSystem::AfterRead()
{
	UMovieSceneEventSystem::AfterRead();

}

void UMovieScenePreSpawnEventSystem::BeforeDelete()
{
	UMovieSceneEventSystem::BeforeDelete();

}

void UMovieScenePostSpawnEventSystem::AfterRead()
{
	UMovieSceneEventSystem::AfterRead();

}

void UMovieScenePostSpawnEventSystem::BeforeDelete()
{
	UMovieSceneEventSystem::BeforeDelete();

}

void UMovieScenePostEvalEventSystem::AfterRead()
{
	UMovieSceneEventSystem::AfterRead();

}

void UMovieScenePostEvalEventSystem::BeforeDelete()
{
	UMovieSceneEventSystem::BeforeDelete();

}

void UMovieSceneEventTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneEventTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneEventTriggerSection::AfterRead()
{
	UMovieSceneEventSectionBase::AfterRead();

}

void UMovieSceneEventTriggerSection::BeforeDelete()
{
	UMovieSceneEventSectionBase::BeforeDelete();

}

void UMovieSceneFadeSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneFadeSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneFloatTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneFloatTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneFadeTrack::AfterRead()
{
	UMovieSceneFloatTrack::AfterRead();

}

void UMovieSceneFadeTrack::BeforeDelete()
{
	UMovieSceneFloatTrack::BeforeDelete();

}

void UMovieSceneFloatPropertySystem::AfterRead()
{
	UMovieScenePropertySystem::AfterRead();

}

void UMovieSceneFloatPropertySystem::BeforeDelete()
{
	UMovieScenePropertySystem::BeforeDelete();

}

void UMovieSceneFloatSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneFloatSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneHierarchicalBiasSystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneHierarchicalBiasSystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieSceneIntegerSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneIntegerSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneIntegerTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneIntegerTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneInterrogatedPropertyInstantiatorSystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneInterrogatedPropertyInstantiatorSystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// ()
// Parameters:
// MovieSceneTracks_ELevelVisibility InVisibility                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneLevelVisibilitySection::SetVisibility(MovieSceneTracks_ELevelVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility"));

	UMovieSceneLevelVisibilitySection_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// ()
// Parameters:
// TArray<struct FName>           InLevelNames                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<struct FName> InLevelNames)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames"));

	UMovieSceneLevelVisibilitySection_SetLevelNames_Params params;
	params.InLevelNames = InLevelNames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// ()
// Parameters:
// MovieSceneTracks_ELevelVisibility ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MovieSceneTracks_ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility"));

	UMovieSceneLevelVisibilitySection_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<struct FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames"));

	UMovieSceneLevelVisibilitySection_GetLevelNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneLevelVisibilitySection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneLevelVisibilitySection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneLevelVisibilitySystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UMovieSceneLevelVisibilitySystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UMovieSceneLevelVisibilityTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneLevelVisibilityTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneMaterialTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneMaterialTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneMaterialParameterCollectionTrack::AfterRead()
{
	UMovieSceneMaterialTrack::AfterRead();

	READ_PTR_FULL(MPC, UMaterialParameterCollection);
}

void UMovieSceneMaterialParameterCollectionTrack::BeforeDelete()
{
	UMovieSceneMaterialTrack::BeforeDelete();

	DELE_PTR_FULL(MPC);
}

void UMovieSceneComponentMaterialTrack::AfterRead()
{
	UMovieSceneMaterialTrack::AfterRead();

}

void UMovieSceneComponentMaterialTrack::BeforeDelete()
{
	UMovieSceneMaterialTrack::BeforeDelete();

}

void UMovieSceneObjectPropertySection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneObjectPropertySection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneObjectPropertyTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

	READ_PTR_FULL(PropertyClass, UClass);
}

void UMovieSceneObjectPropertyTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

	DELE_PTR_FULL(PropertyClass);
}

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveVectorParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter"));

	UMovieSceneParameterSection_RemoveVectorParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveVector2DParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter"));

	UMovieSceneParameterSection_RemoveVector2DParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveTransformParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter"));

	UMovieSceneParameterSection_RemoveTransformParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveScalarParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter"));

	UMovieSceneParameterSection_RemoveScalarParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveColorParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter"));

	UMovieSceneParameterSection_RemoveColorParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneParameterSection::RemoveBoolParameter(const struct FName& InParameterName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter"));

	UMovieSceneParameterSection_RemoveBoolParameter_Params params;
	params.InParameterName = InParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
// ()
void UMovieSceneParameterSection::GetParameterNames()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames"));

	UMovieSceneParameterSection_GetParameterNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddVectorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey"));

	UMovieSceneParameterSection_AddVectorParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddVector2DParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey"));

	UMovieSceneParameterSection_AddVector2DParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddTransformParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey"));

	UMovieSceneParameterSection_AddTransformParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddScalarParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey"));

	UMovieSceneParameterSection_AddScalarParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddColorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey"));

	UMovieSceneParameterSection_AddColorParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
// ()
// Parameters:
// struct FName                   InParameterName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneParameterSection::AddBoolParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey"));

	UMovieSceneParameterSection_AddBoolParameterKey_Params params;
	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMovieSceneParameterSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneParameterSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneParticleParameterTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneParticleParameterTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneParticleSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneParticleSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneParticleTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneParticleTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieScenePiecewiseFloatBlenderSystem::AfterRead()
{
	UMovieSceneBlenderSystem::AfterRead();

}

void UMovieScenePiecewiseFloatBlenderSystem::BeforeDelete()
{
	UMovieSceneBlenderSystem::BeforeDelete();

}

void UMovieScenePrimitiveMaterialSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieScenePrimitiveMaterialSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScenePrimitiveMaterialTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieScenePrimitiveMaterialTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieScenePropertyInstantiatorSystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieScenePropertyInstantiatorSystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieSceneQuaternionInterpolationRotationSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UMovieSceneQuaternionInterpolationRotationSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UMovieSceneSkeletalAnimationSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(AnimSequence, UAnimSequence);
	READ_PTR_FULL(Animation, UAnimSequenceBase);
}

void UMovieSceneSkeletalAnimationSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(AnimSequence);
	DELE_PTR_FULL(Animation);
}

void UMovieSceneSkeletalAnimationTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneSkeletalAnimationTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneSlomoSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneSlomoSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneSlomoTrack::AfterRead()
{
	UMovieSceneFloatTrack::AfterRead();

}

void UMovieSceneSlomoTrack::BeforeDelete()
{
	UMovieSceneFloatTrack::BeforeDelete();

}

void UMovieSceneStringSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneStringSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneStringTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneStringTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneTransformOriginSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UMovieSceneTransformOriginSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UMovieSceneTransformTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneTransformTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneVectorSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneVectorSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneVectorTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneVectorTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneBoolTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneBoolTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneVisibilityTrack::AfterRead()
{
	UMovieSceneBoolTrack::AfterRead();

}

void UMovieSceneVisibilityTrack::BeforeDelete()
{
	UMovieSceneBoolTrack::BeforeDelete();

}

void UMovieSceneHierarchicalEasingInstantiatorSystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneHierarchicalEasingInstantiatorSystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UWeightAndEasingEvaluatorSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UWeightAndEasingEvaluatorSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UFloatChannelEvaluatorSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UFloatChannelEvaluatorSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin"));

	UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneTransformOrigin::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneTransformOrigin::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// ()
// Parameters:
// struct FMovieSceneObjectBindingID InConstraintBindingID          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID"));

	UMovieScene3DConstraintSection_SetConstraintBindingID_Params params;
	params.InConstraintBindingID = InConstraintBindingID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// ()
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID"));

	UMovieScene3DConstraintSection_GetConstraintBindingID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieScene3DConstraintSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieScene3DConstraintSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScene3DAttachSection::AfterRead()
{
	UMovieScene3DConstraintSection::AfterRead();

}

void UMovieScene3DAttachSection::BeforeDelete()
{
	UMovieScene3DConstraintSection::BeforeDelete();

}

void UMovieScene3DConstraintTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieScene3DConstraintTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UMovieScene3DAttachTrack::AfterRead()
{
	UMovieScene3DConstraintTrack::AfterRead();

}

void UMovieScene3DAttachTrack::BeforeDelete()
{
	UMovieScene3DConstraintTrack::BeforeDelete();

}

void UMovieScene3DPathSection::AfterRead()
{
	UMovieScene3DConstraintSection::AfterRead();

}

void UMovieScene3DPathSection::BeforeDelete()
{
	UMovieScene3DConstraintSection::BeforeDelete();

}

void UMovieScene3DPathTrack::AfterRead()
{
	UMovieScene3DConstraintTrack::AfterRead();

}

void UMovieScene3DPathTrack::BeforeDelete()
{
	UMovieScene3DConstraintTrack::BeforeDelete();

}

void UMovieScene3DTransformPropertySystem::AfterRead()
{
	UMovieScenePropertySystem::AfterRead();

}

void UMovieScene3DTransformPropertySystem::BeforeDelete()
{
	UMovieScenePropertySystem::BeforeDelete();

}

void UMovieScene3DTransformSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieScene3DTransformSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScene3DTransformTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieScene3DTransformTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneActorReferenceSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneActorReferenceSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneActorReferenceTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneActorReferenceTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// ()
// Parameters:
// struct FFrameNumber            InStartOffset                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset"));

	UMovieSceneAudioSection_SetStartOffset_Params params;
	params.InStartOffset = InStartOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// ()
// Parameters:
// class USoundBase*              InSound                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.SetSound"));

	UMovieSceneAudioSection_SetSound_Params params;
	params.InSound = InSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// ()
// Parameters:
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset"));

	UMovieSceneAudioSection_GetStartOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// ()
// Parameters:
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USoundBase* UMovieSceneAudioSection::GetSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.GetSound"));

	UMovieSceneAudioSection_GetSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneAudioSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(Sound, USoundBase);
	READ_PTR_FULL(AttenuationSettings, USoundAttenuation);
}

void UMovieSceneAudioSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(Sound);
	DELE_PTR_FULL(AttenuationSettings);
}

void UMovieSceneAudioTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneAudioTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneBaseValueEvaluatorSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UMovieSceneBaseValueEvaluatorSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UMovieSceneByteSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneByteSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneByteTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

	READ_PTR_FULL(Enum, UEnum);
}

void UMovieSceneByteTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

	DELE_PTR_FULL(Enum);
}

void UMovieSceneCameraAnimSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(CameraAnim, UCameraAnim);
}

void UMovieSceneCameraAnimSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(CameraAnim);
}

void UMovieSceneCameraAnimTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneCameraAnimTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// ()
// Parameters:
// struct FMovieSceneObjectBindingID InCameraBindingID              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID"));

	UMovieSceneCameraCutSection_SetCameraBindingID_Params params;
	params.InCameraBindingID = InCameraBindingID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// ()
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID"));

	UMovieSceneCameraCutSection_GetCameraBindingID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneCameraCutSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneCameraCutSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneCameraCutTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneCameraCutTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneCameraCutTrackInstance::AfterRead()
{
	UMovieSceneTrackInstance::AfterRead();

}

void UMovieSceneCameraCutTrackInstance::BeforeDelete()
{
	UMovieSceneTrackInstance::BeforeDelete();

}

void UMovieSceneCameraShakeSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(ShakeClass, UClass);
}

void UMovieSceneCameraShakeSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(ShakeClass);
}

void UMovieSceneCameraShakeSourceShakeSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneCameraShakeSourceShakeSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
