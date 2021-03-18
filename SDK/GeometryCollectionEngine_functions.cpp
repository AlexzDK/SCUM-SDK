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

void FChaosBreakingEventData::AfterRead()
{
}

void FChaosBreakingEventData::BeforeDelete()
{
}

void FChaosTrailingEventData::AfterRead()
{
}

void FChaosTrailingEventData::BeforeDelete()
{
}

void FGeometryCollectionRepData::AfterRead()
{
}

void FGeometryCollectionRepData::BeforeDelete()
{
}

void FGeometryCollectionSource::AfterRead()
{
}

void FGeometryCollectionSource::BeforeDelete()
{
}

void FChaosCollisionEventData::AfterRead()
{
}

void FChaosCollisionEventData::BeforeDelete()
{
}

void FGeometryCollectionDebugDrawWarningMessage::AfterRead()
{
}

void FGeometryCollectionDebugDrawWarningMessage::BeforeDelete()
{
}

void FGeometryCollectionSizeSpecificData::AfterRead()
{
}

void FGeometryCollectionSizeSpecificData::BeforeDelete()
{
}

void FChaosBreakingEventRequestSettings::AfterRead()
{
}

void FChaosBreakingEventRequestSettings::BeforeDelete()
{
}

void FChaosTrailingEventRequestSettings::AfterRead()
{
}

void FChaosTrailingEventRequestSettings::BeforeDelete()
{
}

void FGeometryCollectionDebugDrawActorSelectedRigidBody::AfterRead()
{
	READ_PTR_FULL(Solver, AChaosSolverActor);
	READ_PTR_FULL(GeometryCollection, AGeometryCollectionActor);
}

void FGeometryCollectionDebugDrawActorSelectedRigidBody::BeforeDelete()
{
	DELE_PTR_FULL(Solver);
	DELE_PTR_FULL(GeometryCollection);
}

void FChaosCollisionEventRequestSettings::AfterRead()
{
}

void FChaosCollisionEventRequestSettings::BeforeDelete()
{
}

void FGeomComponentCacheParameters::AfterRead()
{
	READ_PTR_FULL(TargetCache, UGeometryCollectionCache);
}

void FGeomComponentCacheParameters::BeforeDelete()
{
	DELE_PTR_FULL(TargetCache);
}

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// ()
// Parameters:
// TArray<struct FChaosTrailingEventData> TrailingEvents                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// GeometryCollectionEngine_EChaosTrailingSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents, GeometryCollectionEngine_EChaosTrailingSortMethod SortMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents"));

	UChaosDestructionListener_SortTrailingEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TrailingEvents != nullptr)
		*TrailingEvents = params.TrailingEvents;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// ()
// Parameters:
// TArray<struct FChaosCollisionEventData> CollisionEvents                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents"));

	UChaosDestructionListener_SortCollisionEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CollisionEvents != nullptr)
		*CollisionEvents = params.CollisionEvents;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// ()
// Parameters:
// TArray<struct FChaosBreakingEventData> BreakingEvents                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// GeometryCollectionEngine_EChaosBreakingSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, GeometryCollectionEngine_EChaosBreakingSortMethod SortMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents"));

	UChaosDestructionListener_SortBreakingEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BreakingEvents != nullptr)
		*BreakingEvents = params.BreakingEvents;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// ()
// Parameters:
// struct FChaosTrailingEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings"));

	UChaosDestructionListener_SetTrailingEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// ()
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled"));

	UChaosDestructionListener_SetTrailingEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// ()
// Parameters:
// struct FChaosCollisionEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings"));

	UChaosDestructionListener_SetCollisionEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// ()
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled"));

	UChaosDestructionListener_SetCollisionEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// ()
// Parameters:
// struct FChaosBreakingEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings"));

	UChaosDestructionListener_SetBreakingEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// ()
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled"));

	UChaosDestructionListener_SetBreakingEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// ()
// Parameters:
// class AGeometryCollectionActor* GeometryCollectionActor        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor"));

	UChaosDestructionListener_RemoveGeometryCollectionActor_Params params;
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// ()
// Parameters:
// class AChaosSolverActor*       ChaosSolverActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor"));

	UChaosDestructionListener_RemoveChaosSolverActor_Params params;
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UChaosDestructionListener::IsEventListening()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening"));

	UChaosDestructionListener_IsEventListening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// ()
// Parameters:
// class AGeometryCollectionActor* GeometryCollectionActor        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor"));

	UChaosDestructionListener_AddGeometryCollectionActor_Params params;
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// ()
// Parameters:
// class AChaosSolverActor*       ChaosSolverActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor"));

	UChaosDestructionListener_AddChaosSolverActor_Params params;
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UChaosDestructionListener::AfterRead()
{
	USceneComponent::AfterRead();

}

void UChaosDestructionListener::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle"));

	AGeometryCollectionActor_RaycastSingle_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


void AGeometryCollectionActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(GeometryCollectionComponent, UGeometryCollectionComponent);
	READ_PTR_FULL(GeometryCollectionDebugDrawComponent, UGeometryCollectionDebugDrawComponent);
}

void AGeometryCollectionActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(GeometryCollectionComponent);
	DELE_PTR_FULL(GeometryCollectionDebugDrawComponent);
}

void UGeometryCollectionCache::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(SupportedCollection, UGeometryCollection);
}

void UGeometryCollectionCache::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(SupportedCollection);
}

// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// ()
// Parameters:
// bool                           bNewNotifyBreaks               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks"));

	UGeometryCollectionComponent_SetNotifyBreaks_Params params;
	params.bNewNotifyBreaks = bNewNotifyBreaks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
// ()
// Parameters:
// struct FChaosPhysicsCollisionInfo CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision"));

	UGeometryCollectionComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
// ()
// Parameters:
// struct FGeometryCollectionRepData OldData                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::OnRep_RepData(const struct FGeometryCollectionRepData& OldData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData"));

	UGeometryCollectionComponent_OnRep_RepData_Params params;
	params.OldData = OldData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
// ()
// Parameters:
// class UGeometryCollectionComponent* FracturedComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature"));

	UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params params;
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
// ()
// Parameters:
// class UGeometryCollectionComponent* FracturedComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature"));

	UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params params;
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
// ()
// Parameters:
// int                            TransformIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::NetAbandonCluster(int TransformIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster"));

	UGeometryCollectionComponent_NetAbandonCluster_Params params;
	params.TransformIndex = TransformIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Chaos_EGeometryCollectionPhysicsTypeEnum Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaData*    MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, Chaos_EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField"));

	UGeometryCollectionComponent_ApplyPhysicsField_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::ApplyKinematicField(float Radius, const struct FVector& position)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField"));

	UGeometryCollectionComponent_ApplyKinematicField_Params params;
	params.Radius = Radius;
	params.position = position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGeometryCollectionComponent::AfterRead()
{
	UMeshComponent::AfterRead();

	READ_PTR_FULL(ChaosSolverActor, AChaosSolverActor);
	READ_PTR_FULL(RestCollection, UGeometryCollection);
	READ_PTR_FULL(PhysicalMaterial, UChaosPhysicalMaterial);
	READ_PTR_FULL(PhysicalMaterialOverride, UPhysicalMaterial);
	READ_PTR_FULL(DummyBodySetup, UBodySetup);
}

void UGeometryCollectionComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

	DELE_PTR_FULL(ChaosSolverActor);
	DELE_PTR_FULL(RestCollection);
	DELE_PTR_FULL(PhysicalMaterial);
	DELE_PTR_FULL(PhysicalMaterialOverride);
	DELE_PTR_FULL(DummyBodySetup);
}

void AGeometryCollectionDebugDrawActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SpriteComponent, UBillboardComponent);
}

void AGeometryCollectionDebugDrawActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SpriteComponent);
}

void UGeometryCollectionDebugDrawComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(GeometryCollectionDebugDrawActor, AGeometryCollectionDebugDrawActor);
	READ_PTR_FULL(GeometryCollectionRenderLevelSetActor, AGeometryCollectionRenderLevelSetActor);
}

void UGeometryCollectionDebugDrawComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(GeometryCollectionDebugDrawActor);
	DELE_PTR_FULL(GeometryCollectionRenderLevelSetActor);
}

void UGeometryCollection::AfterRead()
{
	UObject::AfterRead();

}

void UGeometryCollection::BeforeDelete()
{
	UObject::BeforeDelete();

}

void AGeometryCollectionRenderLevelSetActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(TargetVolumeTexture, UVolumeTexture);
	READ_PTR_FULL(RayMarchMaterial, UMaterial);
}

void AGeometryCollectionRenderLevelSetActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(TargetVolumeTexture);
	DELE_PTR_FULL(RayMarchMaterial);
}

// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
// ()
// Parameters:
// struct FChaosPhysicsCollisionInfo CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision"));

	USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USkeletalMeshSimulationComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(PhysicalMaterial, UChaosPhysicalMaterial);
	READ_PTR_FULL(ChaosSolverActor, AChaosSolverActor);
	READ_PTR_FULL(OverridePhysicsAsset, UPhysicsAsset);
}

void USkeletalMeshSimulationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(PhysicalMaterial);
	DELE_PTR_FULL(ChaosSolverActor);
	DELE_PTR_FULL(OverridePhysicsAsset);
}

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
// ()
// Parameters:
// struct FChaosPhysicsCollisionInfo CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UStaticMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision"));

	UStaticMeshSimulationComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
// ()
void UStaticMeshSimulationComponent::ForceRecreatePhysicsState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState"));

	UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UStaticMeshSimulationComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(PhysicalMaterial, UChaosPhysicalMaterial);
	READ_PTR_FULL(ChaosSolverActor, AChaosSolverActor);
}

void UStaticMeshSimulationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(PhysicalMaterial);
	DELE_PTR_FULL(ChaosSolverActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
