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

void FNiagaraTypeDefinitionHandle::AfterRead()
{
}

void FNiagaraTypeDefinitionHandle::BeforeDelete()
{
}

void FNiagaraVariableBase::AfterRead()
{
}

void FNiagaraVariableBase::BeforeDelete()
{
}

void FNiagaraVariable::AfterRead()
{
	FNiagaraVariableBase::AfterRead();

}

void FNiagaraVariable::BeforeDelete()
{
	FNiagaraVariableBase::BeforeDelete();

}

void FMovieSceneNiagaraParameterSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneNiagaraBoolParameterSectionTemplate::AfterRead()
{
	FMovieSceneNiagaraParameterSectionTemplate::AfterRead();

}

void FMovieSceneNiagaraBoolParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneNiagaraColorParameterSectionTemplate::AfterRead()
{
	FMovieSceneNiagaraParameterSectionTemplate::AfterRead();

}

void FMovieSceneNiagaraColorParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneNiagaraFloatParameterSectionTemplate::AfterRead()
{
	FMovieSceneNiagaraParameterSectionTemplate::AfterRead();

}

void FMovieSceneNiagaraFloatParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneNiagaraIntegerParameterSectionTemplate::AfterRead()
{
	FMovieSceneNiagaraParameterSectionTemplate::AfterRead();

}

void FMovieSceneNiagaraIntegerParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneNiagaraSystemTrackImplementation::AfterRead()
{
	FMovieSceneTrackImplementation::AfterRead();

}

void FMovieSceneNiagaraSystemTrackImplementation::BeforeDelete()
{
	FMovieSceneTrackImplementation::BeforeDelete();

}

void FMovieSceneNiagaraSystemTrackTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneNiagaraSystemTrackTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneNiagaraVectorParameterSectionTemplate::AfterRead()
{
	FMovieSceneNiagaraParameterSectionTemplate::AfterRead();

}

void FMovieSceneNiagaraVectorParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete();

}

void FNiagaraRandInfo::AfterRead()
{
}

void FNiagaraRandInfo::BeforeDelete()
{
}

void FNiagaraScriptVariableBinding::AfterRead()
{
}

void FNiagaraScriptVariableBinding::BeforeDelete()
{
}

void FNiagaraVariableDataInterfaceBinding::AfterRead()
{
}

void FNiagaraVariableDataInterfaceBinding::BeforeDelete()
{
}

void FNiagaraMaterialAttributeBinding::AfterRead()
{
}

void FNiagaraMaterialAttributeBinding::BeforeDelete()
{
}

void FNiagaraVariableAttributeBinding::AfterRead()
{
}

void FNiagaraVariableAttributeBinding::BeforeDelete()
{
}

void FNiagaraVariableInfo::AfterRead()
{
	READ_PTR_FULL(DataInterface, UNiagaraDataInterface);
}

void FNiagaraVariableInfo::BeforeDelete()
{
	DELE_PTR_FULL(DataInterface);
}

void FNiagaraSystemUpdateContext::AfterRead()
{
}

void FNiagaraSystemUpdateContext::BeforeDelete()
{
}

void FVMFunctionSpecifier::AfterRead()
{
}

void FVMFunctionSpecifier::BeforeDelete()
{
}

void FVMExternalFunctionBindingInfo::AfterRead()
{
}

void FVMExternalFunctionBindingInfo::BeforeDelete()
{
}

void FNiagaraStatScope::AfterRead()
{
}

void FNiagaraStatScope::BeforeDelete()
{
}

void FNiagaraTypeDefinition::AfterRead()
{
	READ_PTR_FULL(ClassStructOrEnum, UObject);
}

void FNiagaraTypeDefinition::BeforeDelete()
{
	DELE_PTR_FULL(ClassStructOrEnum);
}

void FNiagaraScriptDataInterfaceCompileInfo::AfterRead()
{
}

void FNiagaraScriptDataInterfaceCompileInfo::BeforeDelete()
{
}

void FNiagaraScriptDataInterfaceInfo::AfterRead()
{
	READ_PTR_FULL(DataInterface, UNiagaraDataInterface);
}

void FNiagaraScriptDataInterfaceInfo::BeforeDelete()
{
	DELE_PTR_FULL(DataInterface);
}

void FNiagaraFunctionSignature::AfterRead()
{
}

void FNiagaraFunctionSignature::BeforeDelete()
{
}

void FNiagaraScriptDataUsageInfo::AfterRead()
{
}

void FNiagaraScriptDataUsageInfo::BeforeDelete()
{
}

void FNiagaraDataSetID::AfterRead()
{
}

void FNiagaraDataSetID::BeforeDelete()
{
}

void FNiagaraDataSetProperties::AfterRead()
{
}

void FNiagaraDataSetProperties::BeforeDelete()
{
}

void FNiagaraEmitterNameSettingsRef::AfterRead()
{
}

void FNiagaraEmitterNameSettingsRef::BeforeDelete()
{
}

void FBasicParticleData::AfterRead()
{
}

void FBasicParticleData::BeforeDelete()
{
}

void FMeshTriCoordinate::AfterRead()
{
}

void FMeshTriCoordinate::BeforeDelete()
{
}

void FNiagaraGraphViewSettings::AfterRead()
{
}

void FNiagaraGraphViewSettings::BeforeDelete()
{
}

void FNiagaraInputConditionMetadata::AfterRead()
{
}

void FNiagaraInputConditionMetadata::BeforeDelete()
{
}

void FNiagaraParameterScopeInfo::AfterRead()
{
}

void FNiagaraParameterScopeInfo::BeforeDelete()
{
}

void FNiagaraCompileHashVisitorDebugInfo::AfterRead()
{
}

void FNiagaraCompileHashVisitorDebugInfo::BeforeDelete()
{
}

void FNiagaraID::AfterRead()
{
}

void FNiagaraID::BeforeDelete()
{
}

void FNiagaraSpawnInfo::AfterRead()
{
}

void FNiagaraSpawnInfo::BeforeDelete()
{
}

void FNiagaraMatrix::AfterRead()
{
}

void FNiagaraMatrix::BeforeDelete()
{
}

void FNiagaraParameterMap::AfterRead()
{
}

void FNiagaraParameterMap::BeforeDelete()
{
}

void FNiagaraNumeric::AfterRead()
{
}

void FNiagaraNumeric::BeforeDelete()
{
}

void FNiagaraHalfVector4::AfterRead()
{
}

void FNiagaraHalfVector4::BeforeDelete()
{
}

void FNiagaraHalfVector3::AfterRead()
{
}

void FNiagaraHalfVector3::BeforeDelete()
{
}

void FNiagaraHalfVector2::AfterRead()
{
}

void FNiagaraHalfVector2::BeforeDelete()
{
}

void FNiagaraHalf::AfterRead()
{
}

void FNiagaraHalf::BeforeDelete()
{
}

void FNiagaraBool::AfterRead()
{
}

void FNiagaraBool::BeforeDelete()
{
}

void FNiagaraInt32::AfterRead()
{
}

void FNiagaraInt32::BeforeDelete()
{
}

void FNiagaraFloat::AfterRead()
{
}

void FNiagaraFloat::BeforeDelete()
{
}

void FNiagaraVariant::AfterRead()
{
	READ_PTR_FULL(Object, UObject);
	READ_PTR_FULL(DataInterface, UNiagaraDataInterface);
}

void FNiagaraVariant::BeforeDelete()
{
	DELE_PTR_FULL(Object);
	DELE_PTR_FULL(DataInterface);
}

void FNiagaraWorldManagerTickFunction::AfterRead()
{
	FTickFunction::AfterRead();

}

void FNiagaraWorldManagerTickFunction::BeforeDelete()
{
	FTickFunction::BeforeDelete();

}

void FNiagaraUserParameterBinding::AfterRead()
{
}

void FNiagaraUserParameterBinding::BeforeDelete()
{
}

void FNDIStaticMeshSectionFilter::AfterRead()
{
}

void FNDIStaticMeshSectionFilter::BeforeDelete()
{
}

void FNiagaraDeviceProfileStateEntry::AfterRead()
{
}

void FNiagaraDeviceProfileStateEntry::BeforeDelete()
{
}

void FNiagaraPlatformSetCVarCondition::AfterRead()
{
}

void FNiagaraPlatformSetCVarCondition::BeforeDelete()
{
}

void FNiagaraPlatformSet::AfterRead()
{
}

void FNiagaraPlatformSet::BeforeDelete()
{
}

void FNiagaraEmitterScalabilitySettings::AfterRead()
{
}

void FNiagaraEmitterScalabilitySettings::BeforeDelete()
{
}

void FNiagaraEmitterScalabilityOverride::AfterRead()
{
	FNiagaraEmitterScalabilitySettings::AfterRead();

}

void FNiagaraEmitterScalabilityOverride::BeforeDelete()
{
	FNiagaraEmitterScalabilitySettings::BeforeDelete();

}

void FNiagaraEmitterScalabilityOverrides::AfterRead()
{
}

void FNiagaraEmitterScalabilityOverrides::BeforeDelete()
{
}

void FNiagaraEmitterScalabilitySettingsArray::AfterRead()
{
}

void FNiagaraEmitterScalabilitySettingsArray::BeforeDelete()
{
}

void FNiagaraSystemScalabilitySettings::AfterRead()
{
}

void FNiagaraSystemScalabilitySettings::BeforeDelete()
{
}

void FNiagaraSystemScalabilityOverride::AfterRead()
{
	FNiagaraSystemScalabilitySettings::AfterRead();

}

void FNiagaraSystemScalabilityOverride::BeforeDelete()
{
	FNiagaraSystemScalabilitySettings::BeforeDelete();

}

void FNiagaraSystemScalabilityOverrides::AfterRead()
{
}

void FNiagaraSystemScalabilityOverrides::BeforeDelete()
{
}

void FNiagaraSystemScalabilitySettingsArray::AfterRead()
{
}

void FNiagaraSystemScalabilitySettingsArray::BeforeDelete()
{
}

void FNiagaraDetailsLevelScaleOverrides::AfterRead()
{
}

void FNiagaraDetailsLevelScaleOverrides::BeforeDelete()
{
}

void FNiagaraEventReceiverProperties::AfterRead()
{
}

void FNiagaraEventReceiverProperties::BeforeDelete()
{
}

void FNiagaraTypeLayoutInfo::AfterRead()
{
}

void FNiagaraTypeLayoutInfo::BeforeDelete()
{
}

void FNiagaraVariableLayoutInfo::AfterRead()
{
}

void FNiagaraVariableLayoutInfo::BeforeDelete()
{
}

void FNiagaraDataSetCompiledData::AfterRead()
{
}

void FNiagaraDataSetCompiledData::BeforeDelete()
{
}

void FNiagaraEventGeneratorProperties::AfterRead()
{
}

void FNiagaraEventGeneratorProperties::BeforeDelete()
{
}

void FNiagaraEmitterScriptProperties::AfterRead()
{
	READ_PTR_FULL(Script, UNiagaraScript);
}

void FNiagaraEmitterScriptProperties::BeforeDelete()
{
	DELE_PTR_FULL(Script);
}

void FNiagaraEventScriptProperties::AfterRead()
{
	FNiagaraEmitterScriptProperties::AfterRead();

}

void FNiagaraEventScriptProperties::BeforeDelete()
{
	FNiagaraEmitterScriptProperties::BeforeDelete();

}

void FNiagaraEmitterHandle::AfterRead()
{
	READ_PTR_FULL(Instance, UNiagaraEmitter);
}

void FNiagaraEmitterHandle::BeforeDelete()
{
	DELE_PTR_FULL(Instance);
}

void FNiagaraCollisionEventPayload::AfterRead()
{
}

void FNiagaraCollisionEventPayload::BeforeDelete()
{
}

void FNiagaraMeshMaterialOverride::AfterRead()
{
	READ_PTR_FULL(ExplicitMat, UMaterialInterface);
}

void FNiagaraMeshMaterialOverride::BeforeDelete()
{
	DELE_PTR_FULL(ExplicitMat);
}

void FNiagaraParameters::AfterRead()
{
}

void FNiagaraParameters::BeforeDelete()
{
}

void FNiagaraPlatformSetConflictEntry::AfterRead()
{
}

void FNiagaraPlatformSetConflictEntry::BeforeDelete()
{
}

void FNiagaraPlatformSetConflictInfo::AfterRead()
{
}

void FNiagaraPlatformSetConflictInfo::BeforeDelete()
{
}

void FNiagaraScalabilityManager::AfterRead()
{
	READ_PTR_FULL(EffectType, UNiagaraEffectType);
}

void FNiagaraScalabilityManager::BeforeDelete()
{
	DELE_PTR_FULL(EffectType);
}

void FNiagaraVMExecutableData::AfterRead()
{
}

void FNiagaraVMExecutableData::BeforeDelete()
{
}

void FNiagaraModuleDependency::AfterRead()
{
}

void FNiagaraModuleDependency::BeforeDelete()
{
}

void FNiagaraVariableWithOffset::AfterRead()
{
	FNiagaraVariableBase::AfterRead();

}

void FNiagaraVariableWithOffset::BeforeDelete()
{
	FNiagaraVariableBase::BeforeDelete();

}

void FNiagaraParameterStore::AfterRead()
{
	READ_PTR_FULL(Owner, UObject);
}

void FNiagaraParameterStore::BeforeDelete()
{
	DELE_PTR_FULL(Owner);
}

void FNiagaraScriptInstanceParameterStore::AfterRead()
{
	FNiagaraParameterStore::AfterRead();

}

void FNiagaraScriptInstanceParameterStore::BeforeDelete()
{
	FNiagaraParameterStore::BeforeDelete();

}

void FNiagaraScriptHighlight::AfterRead()
{
}

void FNiagaraScriptHighlight::BeforeDelete()
{
}

void FNiagaraSystemCompileRequest::AfterRead()
{
}

void FNiagaraSystemCompileRequest::BeforeDelete()
{
}

void FEmitterCompiledScriptPair::AfterRead()
{
}

void FEmitterCompiledScriptPair::BeforeDelete()
{
}

void FNiagaraParameterDataSetBinding::AfterRead()
{
}

void FNiagaraParameterDataSetBinding::BeforeDelete()
{
}

void FNiagaraParameterDataSetBindingCollection::AfterRead()
{
}

void FNiagaraParameterDataSetBindingCollection::BeforeDelete()
{
}

void FNiagaraSystemCompiledData::AfterRead()
{
}

void FNiagaraSystemCompiledData::BeforeDelete()
{
}

void FNiagaraEmitterCompiledData::AfterRead()
{
}

void FNiagaraEmitterCompiledData::BeforeDelete()
{
}

void FNiagaraVariableMetaData::AfterRead()
{
}

void FNiagaraVariableMetaData::BeforeDelete()
{
}

void FNiagaraUserRedirectionParameterStore::AfterRead()
{
	FNiagaraParameterStore::AfterRead();

}

void FNiagaraUserRedirectionParameterStore::BeforeDelete()
{
	FNiagaraParameterStore::BeforeDelete();

}

void FNiagaraMaterialOverride::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
	READ_PTR_FULL(EmitterRendererProperty, UNiagaraRendererProperties);
}

void FNiagaraMaterialOverride::BeforeDelete()
{
	DELE_PTR_FULL(Material);
	DELE_PTR_FULL(EmitterRendererProperty);
}

void FNCPoolElement::AfterRead()
{
	READ_PTR_FULL(Component, UNiagaraComponent);
}

void FNCPoolElement::BeforeDelete()
{
	DELE_PTR_FULL(Component);
}

void FNCPool::AfterRead()
{
}

void FNCPool::BeforeDelete()
{
}

void FNiagaraComponentPropertyBinding::AfterRead()
{
}

void FNiagaraComponentPropertyBinding::BeforeDelete()
{
}

void FNiagaraRibbonUVSettings::AfterRead()
{
}

void FNiagaraRibbonUVSettings::BeforeDelete()
{
}

void FNiagaraScriptExecutionPaddingInfo::AfterRead()
{
}

void FNiagaraScriptExecutionPaddingInfo::BeforeDelete()
{
}

void FNiagaraScriptExecutionParameterStore::AfterRead()
{
	FNiagaraParameterStore::AfterRead();

}

void FNiagaraScriptExecutionParameterStore::BeforeDelete()
{
	FNiagaraParameterStore::BeforeDelete();

}

void FNiagaraBoundParameter::AfterRead()
{
}

void FNiagaraBoundParameter::BeforeDelete()
{
}

void FNiagaraVMExecutableDataId::AfterRead()
{
}

void FNiagaraVMExecutableDataId::BeforeDelete()
{
}

void UNiagaraDataInterface::AfterRead()
{
	UNiagaraDataInterfaceBase::AfterRead();

}

void UNiagaraDataInterface::BeforeDelete()
{
	UNiagaraDataInterfaceBase::BeforeDelete();

}

void UNiagaraDataInterfaceRWBase::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceRWBase::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UMovieSceneNiagaraTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneNiagaraTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneNiagaraParameterTrack::AfterRead()
{
	UMovieSceneNiagaraTrack::AfterRead();

}

void UMovieSceneNiagaraParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraTrack::BeforeDelete();

}

void UMovieSceneNiagaraBoolParameterTrack::AfterRead()
{
	UMovieSceneNiagaraParameterTrack::AfterRead();

}

void UMovieSceneNiagaraBoolParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraParameterTrack::BeforeDelete();

}

void UMovieSceneNiagaraColorParameterTrack::AfterRead()
{
	UMovieSceneNiagaraParameterTrack::AfterRead();

}

void UMovieSceneNiagaraColorParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraParameterTrack::BeforeDelete();

}

void UMovieSceneNiagaraFloatParameterTrack::AfterRead()
{
	UMovieSceneNiagaraParameterTrack::AfterRead();

}

void UMovieSceneNiagaraFloatParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraParameterTrack::BeforeDelete();

}

void UMovieSceneNiagaraIntegerParameterTrack::AfterRead()
{
	UMovieSceneNiagaraParameterTrack::AfterRead();

}

void UMovieSceneNiagaraIntegerParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraParameterTrack::BeforeDelete();

}

void UMovieSceneNiagaraSystemSpawnSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneNiagaraSystemSpawnSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneNiagaraSystemTrack::AfterRead()
{
	UMovieSceneNiagaraTrack::AfterRead();

}

void UMovieSceneNiagaraSystemTrack::BeforeDelete()
{
	UMovieSceneNiagaraTrack::BeforeDelete();

}

void UMovieSceneNiagaraVectorParameterTrack::AfterRead()
{
	UMovieSceneNiagaraParameterTrack::AfterRead();

}

void UMovieSceneNiagaraVectorParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraParameterTrack::BeforeDelete();

}

// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
// ()
// Parameters:
// bool                           bShouldDestroyOnSystemFinish   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraActor.SetDestroyOnSystemFinish"));

	ANiagaraActor_SetDestroyOnSystemFinish_Params params;
	params.bShouldDestroyOnSystemFinish = bShouldDestroyOnSystemFinish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
// ()
// Parameters:
// class UNiagaraComponent*       FinishedComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraActor::OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraActor.OnNiagaraSystemFinished"));

	ANiagaraActor_OnNiagaraSystemFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ANiagaraActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(NiagaraComponent, UNiagaraComponent);
}

void ANiagaraActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(NiagaraComponent);
}

// Function Niagara.NiagaraComponent.SetVariableVec4
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableVec4"));

	UNiagaraComponent_SetVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableVec3
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableVec3"));

	UNiagaraComponent_SetVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableVec2
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableVec2"));

	UNiagaraComponent_SetVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget*    TextureRenderTarget            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableTextureRenderTarget(const struct FName& InVariableName, class UTextureRenderTarget* TextureRenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget"));

	UNiagaraComponent_SetVariableTextureRenderTarget_Params params;
	params.InVariableName = InVariableName;
	params.TextureRenderTarget = TextureRenderTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableQuat
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableQuat"));

	UNiagaraComponent_SetVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableObject
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableObject(const struct FName& InVariableName, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableObject"));

	UNiagaraComponent_SetVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableMaterial
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableMaterial(const struct FName& InVariableName, class UMaterialInterface* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableMaterial"));

	UNiagaraComponent_SetVariableMaterial_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableLinearColor
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableLinearColor"));

	UNiagaraComponent_SetVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableInt
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableInt(const struct FName& InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableInt"));

	UNiagaraComponent_SetVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableFloat
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableFloat(const struct FName& InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableFloat"));

	UNiagaraComponent_SetVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableBool
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableBool(const struct FName& InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableBool"));

	UNiagaraComponent_SetVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableActor
// ()
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableActor(const struct FName& InVariableName, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetVariableActor"));

	UNiagaraComponent_SetVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetTickBehavior
// ()
// Parameters:
// Niagara_ENiagaraTickBehavior   NewTickBehavior                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetTickBehavior(Niagara_ENiagaraTickBehavior NewTickBehavior)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetTickBehavior"));

	UNiagaraComponent_SetTickBehavior_Params params;
	params.NewTickBehavior = NewTickBehavior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetSeekDelta
// ()
// Parameters:
// float                          InSeekDelta                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetSeekDelta"));

	UNiagaraComponent_SetSeekDelta_Params params;
	params.InSeekDelta = InSeekDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetRenderingEnabled
// ()
// Parameters:
// bool                           bInRenderingEnabled            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetRenderingEnabled"));

	UNiagaraComponent_SetRenderingEnabled_Params params;
	params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetPreviewLODDistance
// ()
// Parameters:
// bool                           bEnablePreviewLODDistance      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PreviewLODDistance             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetPreviewLODDistance"));

	UNiagaraComponent_SetPreviewLODDistance_Params params;
	params.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	params.PreviewLODDistance = PreviewLODDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetPaused
// ()
// Parameters:
// bool                           bInPaused                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetPaused(bool bInPaused)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetPaused"));

	UNiagaraComponent_SetPaused_Params params;
	params.bInPaused = bInPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4"));

	UNiagaraComponent_SetNiagaraVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3"));

	UNiagaraComponent_SetNiagaraVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2"));

	UNiagaraComponent_SetNiagaraVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat"));

	UNiagaraComponent_SetNiagaraVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableObject"));

	UNiagaraComponent_SetNiagaraVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor"));

	UNiagaraComponent_SetNiagaraVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableInt(const struct FString& InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableInt"));

	UNiagaraComponent_SetNiagaraVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat"));

	UNiagaraComponent_SetNiagaraVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableBool"));

	UNiagaraComponent_SetNiagaraVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableActor"));

	UNiagaraComponent_SetNiagaraVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetMaxSimTime
// ()
// Parameters:
// float                          InMaxTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetMaxSimTime"));

	UNiagaraComponent_SetMaxSimTime_Params params;
	params.InMaxTime = InMaxTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetGpuComputeDebug
// ()
// Parameters:
// bool                           bEnableDebug                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetGpuComputeDebug"));

	UNiagaraComponent_SetGpuComputeDebug_Params params;
	params.bEnableDebug = bEnableDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetForceSolo
// ()
// Parameters:
// bool                           bInForceSolo                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetForceSolo"));

	UNiagaraComponent_SetForceSolo_Params params;
	params.bInForceSolo = bInForceSolo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetDesiredAge
// ()
// Parameters:
// float                          InDesiredAge                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetDesiredAge"));

	UNiagaraComponent_SetDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// ()
// Parameters:
// bool                           bInCanRenderWhileSeeking       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking"));

	UNiagaraComponent_SetCanRenderWhileSeeking_Params params;
	params.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetAutoDestroy
// ()
// Parameters:
// bool                           bInAutoDestroy                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetAutoDestroy"));

	UNiagaraComponent_SetAutoDestroy_Params params;
	params.bInAutoDestroy = bInAutoDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetAsset
// ()
// Parameters:
// class UNiagaraSystem*          InAsset                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetAsset"));

	UNiagaraComponent_SetAsset_Params params;
	params.InAsset = InAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetAllowScalability
// ()
// Parameters:
// bool                           bAllow                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAllowScalability(bool bAllow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetAllowScalability"));

	UNiagaraComponent_SetAllowScalability_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// ()
// Parameters:
// Niagara_ENiagaraAgeUpdateMode  InAgeUpdateMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAgeUpdateMode(Niagara_ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetAgeUpdateMode"));

	UNiagaraComponent_SetAgeUpdateMode_Params params;
	params.InAgeUpdateMode = InAgeUpdateMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SeekToDesiredAge
// ()
// Parameters:
// float                          InDesiredAge                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SeekToDesiredAge"));

	UNiagaraComponent_SeekToDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.ResetSystem
// ()
void UNiagaraComponent::ResetSystem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.ResetSystem"));

	UNiagaraComponent_ResetSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.ReinitializeSystem
// ()
void UNiagaraComponent::ReinitializeSystem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.ReinitializeSystem"));

	UNiagaraComponent_ReinitializeSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.IsPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.IsPaused"));

	UNiagaraComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetTickBehavior
// ()
// Parameters:
// Niagara_ENiagaraTickBehavior   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Niagara_ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetTickBehavior"));

	UNiagaraComponent_GetTickBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetSeekDelta
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetSeekDelta()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetSeekDelta"));

	UNiagaraComponent_GetSeekDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::GetPreviewLODDistanceEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled"));

	UNiagaraComponent_GetPreviewLODDistanceEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetPreviewLODDistance
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNiagaraComponent::GetPreviewLODDistance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetPreviewLODDistance"));

	UNiagaraComponent_GetPreviewLODDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// ()
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InValueName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly"));

	UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// ()
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InValueName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly"));

	UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// ()
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly"));

	UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetMaxSimTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetMaxSimTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetMaxSimTime"));

	UNiagaraComponent_GetMaxSimTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetForceSolo
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::GetForceSolo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetForceSolo"));

	UNiagaraComponent_GetForceSolo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetDesiredAge
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetDesiredAge()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetDesiredAge"));

	UNiagaraComponent_GetDesiredAge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetDataInterface
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraDataInterface*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetDataInterface"));

	UNiagaraComponent_GetDataInterface_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAsset
// ()
// Parameters:
// class UNiagaraSystem*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraSystem* UNiagaraComponent::GetAsset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetAsset"));

	UNiagaraComponent_GetAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// ()
// Parameters:
// Niagara_ENiagaraAgeUpdateMode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Niagara_ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.GetAgeUpdateMode"));

	UNiagaraComponent_GetAgeUpdateMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// ()
// Parameters:
// float                          SimulateTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TickDeltaSeconds               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.AdvanceSimulationByTime"));

	UNiagaraComponent_AdvanceSimulationByTime_Params params;
	params.SimulateTime = SimulateTime;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.AdvanceSimulation
// ()
// Parameters:
// int                            TickCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TickDeltaSeconds               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::AdvanceSimulation(int TickCount, float TickDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.AdvanceSimulation"));

	UNiagaraComponent_AdvanceSimulation_Params params;
	params.TickCount = TickCount;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNiagaraComponent::AfterRead()
{
	UFXSystemComponent::AfterRead();

	READ_PTR_FULL(Asset, UNiagaraSystem);
}

void UNiagaraComponent::BeforeDelete()
{
	UFXSystemComponent::BeforeDelete();

	DELE_PTR_FULL(Asset);
}

void UNiagaraComponentPool::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraComponentPool::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraRendererProperties::AfterRead()
{
	UNiagaraMergeable::AfterRead();

}

void UNiagaraRendererProperties::BeforeDelete()
{
	UNiagaraMergeable::BeforeDelete();

}

void UNiagaraComponentRendererProperties::AfterRead()
{
	UNiagaraRendererProperties::AfterRead();

	READ_PTR_FULL(ComponentType, UClass);
	READ_PTR_FULL(TemplateComponent, USceneComponent);
}

void UNiagaraComponentRendererProperties::BeforeDelete()
{
	UNiagaraRendererProperties::BeforeDelete();

	DELE_PTR_FULL(ComponentType);
	DELE_PTR_FULL(TemplateComponent);
}

void UNiagaraComponentSettings::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraComponentSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraConvertInPlaceUtilityBase::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraConvertInPlaceUtilityBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraDataInterface2DArrayTexture::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Texture, UTexture2DArray);
}

void UNiagaraDataInterface2DArrayTexture::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Texture);
}

void UNiagaraDataInterfaceArray::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceArray::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceArrayFloat::AfterRead()
{
	UNiagaraDataInterfaceArray::AfterRead();

}

void UNiagaraDataInterfaceArrayFloat::BeforeDelete()
{
	UNiagaraDataInterfaceArray::BeforeDelete();

}

void UNiagaraDataInterfaceArrayFloat2::AfterRead()
{
	UNiagaraDataInterfaceArray::AfterRead();

}

void UNiagaraDataInterfaceArrayFloat2::BeforeDelete()
{
	UNiagaraDataInterfaceArray::BeforeDelete();

}

void UNiagaraDataInterfaceArrayFloat3::AfterRead()
{
	UNiagaraDataInterfaceArray::AfterRead();

}

void UNiagaraDataInterfaceArrayFloat3::BeforeDelete()
{
	UNiagaraDataInterfaceArray::BeforeDelete();

}

void UNiagaraDataInterfaceArrayFloat4::AfterRead()
{
	UNiagaraDataInterfaceArray::AfterRead();

}

void UNiagaraDataInterfaceArrayFloat4::BeforeDelete()
{
	UNiagaraDataInterfaceArray::BeforeDelete();

}

void UNiagaraDataInterfaceArrayColor::AfterRead()
{
	UNiagaraDataInterfaceArray::AfterRead();

}

void UNiagaraDataInterfaceArrayColor::BeforeDelete()
{
	UNiagaraDataInterfaceArray::BeforeDelete();

}

void UNiagaraDataInterfaceArrayQuat::AfterRead()
{
	UNiagaraDataInterfaceArray::AfterRead();

}

void UNiagaraDataInterfaceArrayQuat::BeforeDelete()
{
	UNiagaraDataInterfaceArray::BeforeDelete();

}

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector4>        ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector4> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector2D> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FQuat>           ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FQuat> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<int> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<float> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FLinearColor> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                   ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<bool> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector4>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FQuat>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UNiagaraDataInterfaceArrayFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UNiagaraDataInterfaceArrayFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UNiagaraDataInterfaceArrayInt32::AfterRead()
{
	UNiagaraDataInterfaceArray::AfterRead();

}

void UNiagaraDataInterfaceArrayInt32::BeforeDelete()
{
	UNiagaraDataInterfaceArray::BeforeDelete();

}

void UNiagaraDataInterfaceArrayBool::AfterRead()
{
	UNiagaraDataInterfaceArray::AfterRead();

}

void UNiagaraDataInterfaceArrayBool::BeforeDelete()
{
	UNiagaraDataInterfaceArray::BeforeDelete();

}

void UNiagaraDataInterfaceAudioSubmix::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Submix, USoundSubmix);
}

void UNiagaraDataInterfaceAudioSubmix::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Submix);
}

void UNiagaraDataInterfaceAudioOscilloscope::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Submix, USoundSubmix);
}

void UNiagaraDataInterfaceAudioOscilloscope::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Submix);
}

void UNiagaraDataInterfaceAudioPlayer::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(SoundToPlay, USoundBase);
	READ_PTR_FULL(Attenuation, USoundAttenuation);
	READ_PTR_FULL(Concurrency, USoundConcurrency);
}

void UNiagaraDataInterfaceAudioPlayer::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(SoundToPlay);
	DELE_PTR_FULL(Attenuation);
	DELE_PTR_FULL(Concurrency);
}

void UNiagaraDataInterfaceAudioSpectrum::AfterRead()
{
	UNiagaraDataInterfaceAudioSubmix::AfterRead();

}

void UNiagaraDataInterfaceAudioSpectrum::BeforeDelete()
{
	UNiagaraDataInterfaceAudioSubmix::BeforeDelete();

}

void UNiagaraDataInterfaceCamera::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceCamera::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceCollisionQuery::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceCollisionQuery::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceCurveBase::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(ExposedTexture, UTexture2D);
}

void UNiagaraDataInterfaceCurveBase::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(ExposedTexture);
}

void UNiagaraDataInterfaceColorCurve::AfterRead()
{
	UNiagaraDataInterfaceCurveBase::AfterRead();

}

void UNiagaraDataInterfaceColorCurve::BeforeDelete()
{
	UNiagaraDataInterfaceCurveBase::BeforeDelete();

}

void UNiagaraDataInterfaceCurlNoise::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceCurlNoise::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceCurve::AfterRead()
{
	UNiagaraDataInterfaceCurveBase::AfterRead();

}

void UNiagaraDataInterfaceCurve::BeforeDelete()
{
	UNiagaraDataInterfaceCurveBase::BeforeDelete();

}

void UNiagaraPrecompileContainer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(System, UNiagaraSystem);
}

void UNiagaraPrecompileContainer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(System);
}

// Function Niagara.NiagaraPreviewBase.SetSystem
// ()
// Parameters:
// class UNiagaraSystem*          InSystem                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraPreviewBase::SetSystem(class UNiagaraSystem* InSystem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraPreviewBase.SetSystem"));

	ANiagaraPreviewBase_SetSystem_Params params;
	params.InSystem = InSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraPreviewBase.SetLabelText
// ()
// Parameters:
// struct FText                   InXAxisText                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   InYAxisText                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void ANiagaraPreviewBase::SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraPreviewBase.SetLabelText"));

	ANiagaraPreviewBase_SetLabelText_Params params;
	params.InXAxisText = InXAxisText;
	params.InYAxisText = InYAxisText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ANiagaraPreviewBase::AfterRead()
{
	AActor::AfterRead();

}

void ANiagaraPreviewBase::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function Niagara.NiagaraPreviewAxis.Num
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNiagaraPreviewAxis::Num()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraPreviewAxis.Num"));

	UNiagaraPreviewAxis_Num_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
// ()
// Parameters:
// class UNiagaraComponent*       PreviewComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PreviewIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsXAxis                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OutLabelText                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraPreviewAxis::ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraPreviewAxis.ApplyToPreview"));

	UNiagaraPreviewAxis_ApplyToPreview_Params params;
	params.PreviewComponent = PreviewComponent;
	params.PreviewIndex = PreviewIndex;
	params.bIsXAxis = bIsXAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLabelText != nullptr)
		*OutLabelText = params.OutLabelText;

}


void UNiagaraPreviewAxis::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraPreviewAxis::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraPreviewAxis_InterpParamBase::AfterRead()
{
	UNiagaraPreviewAxis::AfterRead();

}

void UNiagaraPreviewAxis_InterpParamBase::BeforeDelete()
{
	UNiagaraPreviewAxis::BeforeDelete();

}

void UNiagaraPreviewAxis_InterpParamInt32::AfterRead()
{
	UNiagaraPreviewAxis_InterpParamBase::AfterRead();

}

void UNiagaraPreviewAxis_InterpParamInt32::BeforeDelete()
{
	UNiagaraPreviewAxis_InterpParamBase::BeforeDelete();

}

void UNiagaraPreviewAxis_InterpParamFloat::AfterRead()
{
	UNiagaraPreviewAxis_InterpParamBase::AfterRead();

}

void UNiagaraPreviewAxis_InterpParamFloat::BeforeDelete()
{
	UNiagaraPreviewAxis_InterpParamBase::BeforeDelete();

}

void UNiagaraPreviewAxis_InterpParamVector2D::AfterRead()
{
	UNiagaraPreviewAxis_InterpParamBase::AfterRead();

}

void UNiagaraPreviewAxis_InterpParamVector2D::BeforeDelete()
{
	UNiagaraPreviewAxis_InterpParamBase::BeforeDelete();

}

void UNiagaraPreviewAxis_InterpParamVector::AfterRead()
{
	UNiagaraPreviewAxis_InterpParamBase::AfterRead();

}

void UNiagaraPreviewAxis_InterpParamVector::BeforeDelete()
{
	UNiagaraPreviewAxis_InterpParamBase::BeforeDelete();

}

void UNiagaraPreviewAxis_InterpParamVector4::AfterRead()
{
	UNiagaraPreviewAxis_InterpParamBase::AfterRead();

}

void UNiagaraPreviewAxis_InterpParamVector4::BeforeDelete()
{
	UNiagaraPreviewAxis_InterpParamBase::BeforeDelete();

}

void UNiagaraPreviewAxis_InterpParamLinearColor::AfterRead()
{
	UNiagaraPreviewAxis_InterpParamBase::AfterRead();

}

void UNiagaraPreviewAxis_InterpParamLinearColor::BeforeDelete()
{
	UNiagaraPreviewAxis_InterpParamBase::BeforeDelete();

}

// Function Niagara.NiagaraPreviewGrid.SetPaused
// ()
// Parameters:
// bool                           bPaused                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraPreviewGrid::SetPaused(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraPreviewGrid.SetPaused"));

	ANiagaraPreviewGrid_SetPaused_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraPreviewGrid.GetPreviews
// ()
// Parameters:
// TArray<class UNiagaraComponent*> OutPreviews                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ANiagaraPreviewGrid::GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraPreviewGrid.GetPreviews"));

	ANiagaraPreviewGrid_GetPreviews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPreviews != nullptr)
		*OutPreviews = params.OutPreviews;

}


// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
// ()
void ANiagaraPreviewGrid::DeactivatePreviews()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraPreviewGrid.DeactivatePreviews"));

	ANiagaraPreviewGrid_DeactivatePreviews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
// ()
// Parameters:
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraPreviewGrid::ActivatePreviews(bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraPreviewGrid.ActivatePreviews"));

	ANiagaraPreviewGrid_ActivatePreviews_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ANiagaraPreviewGrid::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(System, UNiagaraSystem);
	READ_PTR_FULL(PreviewAxisX, UNiagaraPreviewAxis);
	READ_PTR_FULL(PreviewAxisY, UNiagaraPreviewAxis);
	READ_PTR_FULL(PreviewClass, UClass);
}

void ANiagaraPreviewGrid::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(System);
	DELE_PTR_FULL(PreviewAxisX);
	DELE_PTR_FULL(PreviewAxisY);
	DELE_PTR_FULL(PreviewClass);
}

void UNiagaraRibbonRendererProperties::AfterRead()
{
	UNiagaraRendererProperties::AfterRead();

	READ_PTR_FULL(Material, UMaterialInterface);
}

void UNiagaraRibbonRendererProperties::BeforeDelete()
{
	UNiagaraRendererProperties::BeforeDelete();

	DELE_PTR_FULL(Material);
}

// Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
// ()
void UNiagaraScript::RaiseOnGPUCompilationComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete"));

	UNiagaraScript_RaiseOnGPUCompilationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNiagaraScript::AfterRead()
{
	UNiagaraScriptBase::AfterRead();

}

void UNiagaraScript::BeforeDelete()
{
	UNiagaraScriptBase::BeforeDelete();

}

void UNiagaraScriptSourceBase::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraScriptSourceBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

	READ_PTR_FULL(DefaultEffectTypePtr, UNiagaraEffectType);
}

void UNiagaraSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

	DELE_PTR_FULL(DefaultEffectTypePtr);
}

void UNiagaraSimulationStageBase::AfterRead()
{
	UNiagaraMergeable::AfterRead();

	READ_PTR_FULL(Script, UNiagaraScript);
}

void UNiagaraSimulationStageBase::BeforeDelete()
{
	UNiagaraMergeable::BeforeDelete();

	DELE_PTR_FULL(Script);
}

void UNiagaraSimulationStageGeneric::AfterRead()
{
	UNiagaraSimulationStageBase::AfterRead();

}

void UNiagaraSimulationStageGeneric::BeforeDelete()
{
	UNiagaraSimulationStageBase::BeforeDelete();

}

void UNiagaraSpriteRendererProperties::AfterRead()
{
	UNiagaraRendererProperties::AfterRead();

	READ_PTR_FULL(Material, UMaterialInterface);
}

void UNiagaraSpriteRendererProperties::BeforeDelete()
{
	UNiagaraRendererProperties::BeforeDelete();

	DELE_PTR_FULL(Material);
}

void UNiagaraSystem::AfterRead()
{
	UFXSystemAsset::AfterRead();

	READ_PTR_FULL(EffectType, UNiagaraEffectType);
	READ_PTR_FULL(SystemSpawnScript, UNiagaraScript);
	READ_PTR_FULL(SystemUpdateScript, UNiagaraScript);
}

void UNiagaraSystem::BeforeDelete()
{
	UFXSystemAsset::BeforeDelete();

	DELE_PTR_FULL(EffectType);
	DELE_PTR_FULL(SystemSpawnScript);
	DELE_PTR_FULL(SystemUpdateScript);
}

// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
// ()
// Parameters:
// TArray<struct FBasicParticleData> Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UNiagaraSystem*          NiagaraSystem                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParticleCallbackHandler::ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData"));

	UNiagaraParticleCallbackHandler_ReceiveParticleData_Params params;
	params.Data = Data;
	params.NiagaraSystem = NiagaraSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNiagaraParticleCallbackHandler::AfterRead()
{
	UInterface::AfterRead();

}

void UNiagaraParticleCallbackHandler::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNiagaraDataInterfaceExport::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceExport::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceGBuffer::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceGBuffer::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceGrid2D::AfterRead()
{
	UNiagaraDataInterfaceRWBase::AfterRead();

}

void UNiagaraDataInterfaceGrid2D::BeforeDelete()
{
	UNiagaraDataInterfaceRWBase::BeforeDelete();

}

// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
// ()
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize"));

	UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
// ()
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize"));

	UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
// ()
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  Dest                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AttributeIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int AttributeIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D"));

	UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params params;
	params.Component = Component;
	params.Dest = Dest;
	params.AttributeIndex = AttributeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
// ()
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  Dest                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TilesX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TilesY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int* TilesX, int* TilesY)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D"));

	UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params params;
	params.Component = Component;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TilesX != nullptr)
		*TilesX = params.TilesX;
	if (TilesY != nullptr)
		*TilesY = params.TilesY;


	return params.ReturnValue;
}


void UNiagaraDataInterfaceGrid2DCollection::AfterRead()
{
	UNiagaraDataInterfaceGrid2D::AfterRead();

}

void UNiagaraDataInterfaceGrid2DCollection::BeforeDelete()
{
	UNiagaraDataInterfaceGrid2D::BeforeDelete();

}

void UNiagaraDataInterfaceGrid2DCollectionReader::AfterRead()
{
	UNiagaraDataInterfaceGrid2D::AfterRead();

}

void UNiagaraDataInterfaceGrid2DCollectionReader::BeforeDelete()
{
	UNiagaraDataInterfaceGrid2D::BeforeDelete();

}

void UNiagaraDataInterfaceGrid3D::AfterRead()
{
	UNiagaraDataInterfaceRWBase::AfterRead();

}

void UNiagaraDataInterfaceGrid3D::BeforeDelete()
{
	UNiagaraDataInterfaceRWBase::BeforeDelete();

}

// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
// ()
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeZ                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize"));

	UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
	if (SizeZ != nullptr)
		*SizeZ = params.SizeZ;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
// ()
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeZ                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize"));

	UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
	if (SizeZ != nullptr)
		*SizeZ = params.SizeZ;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
// ()
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVolumeTexture*          Dest                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AttributeIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int AttributeIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture"));

	UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params params;
	params.Component = Component;
	params.Dest = Dest;
	params.AttributeIndex = AttributeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
// ()
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVolumeTexture*          Dest                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TilesX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TilesY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileZ                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int* TilesX, int* TilesY, int* TileZ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture"));

	UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params params;
	params.Component = Component;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TilesX != nullptr)
		*TilesX = params.TilesX;
	if (TilesY != nullptr)
		*TilesY = params.TilesY;
	if (TileZ != nullptr)
		*TileZ = params.TileZ;


	return params.ReturnValue;
}


void UNiagaraDataInterfaceGrid3DCollection::AfterRead()
{
	UNiagaraDataInterfaceGrid3D::AfterRead();

}

void UNiagaraDataInterfaceGrid3DCollection::BeforeDelete()
{
	UNiagaraDataInterfaceGrid3D::BeforeDelete();

}

void UNiagaraDataInterfaceLandscape::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(SourceLandscape, AActor);
}

void UNiagaraDataInterfaceLandscape::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(SourceLandscape);
}

void UNiagaraDataInterfaceNeighborGrid3D::AfterRead()
{
	UNiagaraDataInterfaceGrid3D::AfterRead();

}

void UNiagaraDataInterfaceNeighborGrid3D::BeforeDelete()
{
	UNiagaraDataInterfaceGrid3D::BeforeDelete();

}

void UNiagaraDataInterfaceOcclusion::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceOcclusion::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceParticleRead::AfterRead()
{
	UNiagaraDataInterfaceRWBase::AfterRead();

}

void UNiagaraDataInterfaceParticleRead::BeforeDelete()
{
	UNiagaraDataInterfaceRWBase::BeforeDelete();

}

void UNiagaraDataInterfacePlatformSet::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfacePlatformSet::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceRenderTarget2D::AfterRead()
{
	UNiagaraDataInterfaceRWBase::AfterRead();

}

void UNiagaraDataInterfaceRenderTarget2D::BeforeDelete()
{
	UNiagaraDataInterfaceRWBase::BeforeDelete();

}

void UNiagaraDataInterfaceRenderTarget2DArray::AfterRead()
{
	UNiagaraDataInterfaceRWBase::AfterRead();

}

void UNiagaraDataInterfaceRenderTarget2DArray::BeforeDelete()
{
	UNiagaraDataInterfaceRWBase::BeforeDelete();

}

void UNiagaraDataInterfaceRenderTargetVolume::AfterRead()
{
	UNiagaraDataInterfaceRWBase::AfterRead();

}

void UNiagaraDataInterfaceRenderTargetVolume::BeforeDelete()
{
	UNiagaraDataInterfaceRWBase::BeforeDelete();

}

void UNiagaraDataInterfaceSimpleCounter::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceSimpleCounter::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceSkeletalMesh::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Source, AActor);
	READ_PTR_FULL(SourceComponent, USkeletalMeshComponent);
}

void UNiagaraDataInterfaceSkeletalMesh::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Source);
	DELE_PTR_FULL(SourceComponent);
}

void UNiagaraDataInterfaceSpline::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Source, AActor);
}

void UNiagaraDataInterfaceSpline::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Source);
}

void UNiagaraDataInterfaceStaticMesh::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(DefaultMesh, UStaticMesh);
	READ_PTR_FULL(Source, AActor);
	READ_PTR_FULL(SourceComponent, UStaticMeshComponent);
}

void UNiagaraDataInterfaceStaticMesh::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(DefaultMesh);
	DELE_PTR_FULL(Source);
	DELE_PTR_FULL(SourceComponent);
}

void UNiagaraDataInterfaceTexture::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Texture, UTexture);
}

void UNiagaraDataInterfaceTexture::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Texture);
}

void UNiagaraDataInterfaceVector2DCurve::AfterRead()
{
	UNiagaraDataInterfaceCurveBase::AfterRead();

}

void UNiagaraDataInterfaceVector2DCurve::BeforeDelete()
{
	UNiagaraDataInterfaceCurveBase::BeforeDelete();

}

void UNiagaraDataInterfaceVector4Curve::AfterRead()
{
	UNiagaraDataInterfaceCurveBase::AfterRead();

}

void UNiagaraDataInterfaceVector4Curve::BeforeDelete()
{
	UNiagaraDataInterfaceCurveBase::BeforeDelete();

}

void UNiagaraDataInterfaceVectorCurve::AfterRead()
{
	UNiagaraDataInterfaceCurveBase::AfterRead();

}

void UNiagaraDataInterfaceVectorCurve::BeforeDelete()
{
	UNiagaraDataInterfaceCurveBase::BeforeDelete();

}

void UNiagaraDataInterfaceVectorField::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Field, UVectorField);
}

void UNiagaraDataInterfaceVectorField::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Field);
}

void UNiagaraDataInterfaceVolumeTexture::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Texture, UVolumeTexture);
}

void UNiagaraDataInterfaceVolumeTexture::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Texture);
}

void UNiagaraEditorDataBase::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraEditorDataBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraSignificanceHandler::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraSignificanceHandler::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraSignificanceHandlerDistance::AfterRead()
{
	UNiagaraSignificanceHandler::AfterRead();

}

void UNiagaraSignificanceHandlerDistance::BeforeDelete()
{
	UNiagaraSignificanceHandler::BeforeDelete();

}

void UNiagaraSignificanceHandlerAge::AfterRead()
{
	UNiagaraSignificanceHandler::AfterRead();

}

void UNiagaraSignificanceHandlerAge::BeforeDelete()
{
	UNiagaraSignificanceHandler::BeforeDelete();

}

void UNiagaraEffectType::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(SignificanceHandler, UNiagaraSignificanceHandler);
}

void UNiagaraEffectType::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(SignificanceHandler);
}

void UNiagaraEmitter::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(GPUComputeScript, UNiagaraScript);
}

void UNiagaraEmitter::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(GPUComputeScript);
}

void UNiagaraEventReceiverEmitterAction::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraEventReceiverEmitterAction::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraEventReceiverEmitterAction_SpawnParticles::AfterRead()
{
	UNiagaraEventReceiverEmitterAction::AfterRead();

}

void UNiagaraEventReceiverEmitterAction_SpawnParticles::BeforeDelete()
{
	UNiagaraEventReceiverEmitterAction::BeforeDelete();

}

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// ()
// Parameters:
// class UNiagaraSystem*          SystemTemplate                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EAttachLocation> LocationType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Niagara_ENCPoolMethod          PoolingMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPreCullCheck                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, Niagara_ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached"));

	UNiagaraFunctionLibrary_SpawnSystemAttached_Params params;
	params.SystemTemplate = SystemTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;
	params.PoolingMethod = PoolingMethod;
	params.bPreCullCheck = bPreCullCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// ()
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraSystem*          SystemTemplate                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Niagara_ENCPoolMethod          PoolingMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPreCullCheck                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, Niagara_ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation"));

	UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SystemTemplate = SystemTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;
	params.PoolingMethod = PoolingMethod;
	params.bPreCullCheck = bPreCullCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVolumeTexture*          Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UVolumeTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject"));

	UNiagaraFunctionLibrary_SetVolumeTextureObject_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::SetTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.SetTextureObject"));

	UNiagaraFunctionLibrary_SetTextureObject_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           SamplingRegions                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, TArray<struct FName> SamplingRegions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions"));

	UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.SamplingRegions = SamplingRegions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent"));

	UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMeshComponent = StaticMeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*             StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh"));

	UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
// ()
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent"));

	UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollection* Collection                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollectionInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection"));

	UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UNiagaraFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UNiagaraFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UNiagaraLightRendererProperties::AfterRead()
{
	UNiagaraRendererProperties::AfterRead();

}

void UNiagaraLightRendererProperties::BeforeDelete()
{
	UNiagaraRendererProperties::BeforeDelete();

}

void UNiagaraMeshRendererProperties::AfterRead()
{
	UNiagaraRendererProperties::AfterRead();

	READ_PTR_FULL(ParticleMesh, UStaticMesh);
}

void UNiagaraMeshRendererProperties::BeforeDelete()
{
	UNiagaraRendererProperties::BeforeDelete();

	DELE_PTR_FULL(ParticleMesh);
}

void UNiagaraMessageDataBase::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraMessageDataBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter"));

	UNiagaraParameterCollectionInstance_SetVectorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter"));

	UNiagaraParameterCollectionInstance_SetVector4Parameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter"));

	UNiagaraParameterCollectionInstance_SetVector2DParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter"));

	UNiagaraParameterCollectionInstance_SetQuatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetIntParameter(const struct FString& InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter"));

	UNiagaraParameterCollectionInstance_SetIntParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetFloatParameter(const struct FString& InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter"));

	UNiagaraParameterCollectionInstance_SetFloatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter"));

	UNiagaraParameterCollectionInstance_SetColorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetBoolParameter(const struct FString& InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter"));

	UNiagaraParameterCollectionInstance_SetBoolParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter"));

	UNiagaraParameterCollectionInstance_GetVectorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter"));

	UNiagaraParameterCollectionInstance_GetVector4Parameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter"));

	UNiagaraParameterCollectionInstance_GetVector2DParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter"));

	UNiagaraParameterCollectionInstance_GetQuatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNiagaraParameterCollectionInstance::GetIntParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter"));

	UNiagaraParameterCollectionInstance_GetIntParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraParameterCollectionInstance::GetFloatParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter"));

	UNiagaraParameterCollectionInstance_GetFloatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter"));

	UNiagaraParameterCollectionInstance_GetColorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// ()
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraParameterCollectionInstance::GetBoolParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter"));

	UNiagaraParameterCollectionInstance_GetBoolParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UNiagaraParameterCollectionInstance::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Collection, UNiagaraParameterCollection);
}

void UNiagaraParameterCollectionInstance::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Collection);
}

void UNiagaraParameterCollection::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(SourceMaterialCollection, UMaterialParameterCollection);
	READ_PTR_FULL(DefaultInstance, UNiagaraParameterCollectionInstance);
}

void UNiagaraParameterCollection::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(SourceMaterialCollection);
	DELE_PTR_FULL(DefaultInstance);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
