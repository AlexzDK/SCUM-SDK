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

void FNavGraphNode::AfterRead()
{
	READ_PTR_FULL(Owner, UObject);
}

void FNavGraphNode::BeforeDelete()
{
	DELE_PTR_FULL(Owner);
}

void FNavGraphEdge::AfterRead()
{
}

void FNavGraphEdge::BeforeDelete()
{
}

void FNavigationFilterFlags::AfterRead()
{
}

void FNavigationFilterFlags::BeforeDelete()
{
}

void FNavLinkCustomInstanceData::AfterRead()
{
	FActorComponentInstanceData::AfterRead();

}

void FNavLinkCustomInstanceData::BeforeDelete()
{
	FActorComponentInstanceData::BeforeDelete();

}

void FRecastNavMeshGenerationProperties::AfterRead()
{
}

void FRecastNavMeshGenerationProperties::BeforeDelete()
{
}

void FNavCollisionCylinder::AfterRead()
{
}

void FNavCollisionCylinder::BeforeDelete()
{
}

void FNavigationFilterArea::AfterRead()
{
	READ_PTR_FULL(AreaClass, UClass);
}

void FNavigationFilterArea::BeforeDelete()
{
	DELE_PTR_FULL(AreaClass);
}

void FNavCollisionBox::AfterRead()
{
}

void FNavCollisionBox::BeforeDelete()
{
}

void FSupportedAreaData::AfterRead()
{
	READ_PTR_FULL(AreaClass, UClass);
}

void FSupportedAreaData::BeforeDelete()
{
	DELE_PTR_FULL(AreaClass);
}

void UNavTestRenderingComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UNavTestRenderingComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void UNavigationQueryFilter::AfterRead()
{
	UObject::AfterRead();

}

void UNavigationQueryFilter::BeforeDelete()
{
	UObject::BeforeDelete();

}

void URecastFilter_UseDefaultArea::AfterRead()
{
	UNavigationQueryFilter::AfterRead();

}

void URecastFilter_UseDefaultArea::BeforeDelete()
{
	UNavigationQueryFilter::BeforeDelete();

}

void URecastNavMeshDataChunk::AfterRead()
{
	UNavigationDataChunk::AfterRead();

}

void URecastNavMeshDataChunk::BeforeDelete()
{
	UNavigationDataChunk::BeforeDelete();

}

// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
// ()
// Parameters:
// bool                           bRelevant                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy"));

	UNavRelevantComponent_SetNavigationRelevancy_Params params;
	params.bRelevant = bRelevant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNavRelevantComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(CachedNavParent, UObject);
}

void UNavRelevantComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(CachedNavParent);
}

void UNavLinkCustomComponent::AfterRead()
{
	UNavRelevantComponent::AfterRead();

	READ_PTR_FULL(EnabledAreaClass, UClass);
	READ_PTR_FULL(DisabledAreaClass, UClass);
	READ_PTR_FULL(ObstacleAreaClass, UClass);
}

void UNavLinkCustomComponent::BeforeDelete()
{
	UNavRelevantComponent::BeforeDelete();

	DELE_PTR_FULL(EnabledAreaClass);
	DELE_PTR_FULL(DisabledAreaClass);
	DELE_PTR_FULL(ObstacleAreaClass);
}

void UNavLinkCustomInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNavLinkCustomInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNavLinkHostInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNavLinkHostInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNavLinkRenderingComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UNavLinkRenderingComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void UNavLinkTrivial::AfterRead()
{
	UNavLinkDefinition::AfterRead();

}

void UNavLinkTrivial::BeforeDelete()
{
	UNavLinkDefinition::BeforeDelete();

}

void ANavMeshBoundsVolume::AfterRead()
{
	AVolume::AfterRead();

}

void ANavMeshBoundsVolume::BeforeDelete()
{
	AVolume::BeforeDelete();

}

void UNavMeshRenderingComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UNavMeshRenderingComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

// Function NavigationSystem.NavModifierComponent.SetAreaClass
// ()
// Parameters:
// class UClass*                  NewAreaClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavModifierComponent::SetAreaClass(class UClass* NewAreaClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavModifierComponent.SetAreaClass"));

	UNavModifierComponent_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNavModifierComponent::AfterRead()
{
	UNavRelevantComponent::AfterRead();

	READ_PTR_FULL(AreaClass, UClass);
}

void UNavModifierComponent::BeforeDelete()
{
	UNavRelevantComponent::BeforeDelete();

	DELE_PTR_FULL(AreaClass);
}

// Function NavigationSystem.NavModifierVolume.SetAreaClass
// ()
// Parameters:
// class UClass*                  NewAreaClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANavModifierVolume::SetAreaClass(class UClass* NewAreaClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavModifierVolume.SetAreaClass"));

	ANavModifierVolume_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ANavModifierVolume::AfterRead()
{
	AVolume::AfterRead();

	READ_PTR_FULL(AreaClass, UClass);
}

void ANavModifierVolume::BeforeDelete()
{
	AVolume::BeforeDelete();

	DELE_PTR_FULL(AreaClass);
}

void UNavNodeInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNavNodeInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ANavSystemConfigOverride::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(NavigationSystemConfig, UNavigationSystemConfig);
}

void ANavSystemConfigOverride::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(NavigationSystemConfig);
}

void ANavigationData::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(RenderingComp, UPrimitiveComponent);
}

void ANavigationData::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(RenderingComp);
}

// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
// ()
// Parameters:
// struct FBox                    Bounds                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UClass*                  OldArea                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  NewArea                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReplaceLinks                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds"));

	ARecastNavMesh_K2_ReplaceAreaInTileBounds_Params params;
	params.Bounds = Bounds;
	params.OldArea = OldArea;
	params.NewArea = NewArea;
	params.ReplaceLinks = ReplaceLinks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ARecastNavMesh::AfterRead()
{
	ANavigationData::AfterRead();

}

void ARecastNavMesh::BeforeDelete()
{
	ANavigationData::BeforeDelete();

}

void AAbstractNavData::AfterRead()
{
	ANavigationData::AfterRead();

}

void AAbstractNavData::BeforeDelete()
{
	ANavigationData::BeforeDelete();

}

void UCrowdManagerBase::AfterRead()
{
	UObject::AfterRead();

}

void UCrowdManagerBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNavArea::AfterRead()
{
	UNavAreaBase::AfterRead();

}

void UNavArea::BeforeDelete()
{
	UNavAreaBase::BeforeDelete();

}

void UNavArea_Default::AfterRead()
{
	UNavArea::AfterRead();

}

void UNavArea_Default::BeforeDelete()
{
	UNavArea::BeforeDelete();

}

void UNavArea_LowHeight::AfterRead()
{
	UNavArea::AfterRead();

}

void UNavArea_LowHeight::BeforeDelete()
{
	UNavArea::BeforeDelete();

}

void UNavArea_Null::AfterRead()
{
	UNavArea::AfterRead();

}

void UNavArea_Null::BeforeDelete()
{
	UNavArea::BeforeDelete();

}

void UNavArea_Obstacle::AfterRead()
{
	UNavArea::AfterRead();

}

void UNavArea_Obstacle::BeforeDelete()
{
	UNavArea::BeforeDelete();

}

void UNavAreaMeta::AfterRead()
{
	UNavArea::AfterRead();

}

void UNavAreaMeta::BeforeDelete()
{
	UNavArea::BeforeDelete();

}

void UNavAreaMeta_SwitchByAgent::AfterRead()
{
	UNavAreaMeta::AfterRead();

	READ_PTR_FULL(Agent0Area, UClass);
	READ_PTR_FULL(Agent1Area, UClass);
	READ_PTR_FULL(Agent2Area, UClass);
	READ_PTR_FULL(Agent3Area, UClass);
	READ_PTR_FULL(Agent4Area, UClass);
	READ_PTR_FULL(Agent5Area, UClass);
	READ_PTR_FULL(Agent6Area, UClass);
	READ_PTR_FULL(Agent7Area, UClass);
	READ_PTR_FULL(Agent8Area, UClass);
	READ_PTR_FULL(Agent9Area, UClass);
	READ_PTR_FULL(Agent10Area, UClass);
	READ_PTR_FULL(Agent11Area, UClass);
	READ_PTR_FULL(Agent12Area, UClass);
	READ_PTR_FULL(Agent13Area, UClass);
	READ_PTR_FULL(Agent14Area, UClass);
	READ_PTR_FULL(Agent15Area, UClass);
}

void UNavAreaMeta_SwitchByAgent::BeforeDelete()
{
	UNavAreaMeta::BeforeDelete();

	DELE_PTR_FULL(Agent0Area);
	DELE_PTR_FULL(Agent1Area);
	DELE_PTR_FULL(Agent2Area);
	DELE_PTR_FULL(Agent3Area);
	DELE_PTR_FULL(Agent4Area);
	DELE_PTR_FULL(Agent5Area);
	DELE_PTR_FULL(Agent6Area);
	DELE_PTR_FULL(Agent7Area);
	DELE_PTR_FULL(Agent8Area);
	DELE_PTR_FULL(Agent9Area);
	DELE_PTR_FULL(Agent10Area);
	DELE_PTR_FULL(Agent11Area);
	DELE_PTR_FULL(Agent12Area);
	DELE_PTR_FULL(Agent13Area);
	DELE_PTR_FULL(Agent14Area);
	DELE_PTR_FULL(Agent15Area);
}

void UNavCollision::AfterRead()
{
	UNavCollisionBase::AfterRead();

	READ_PTR_FULL(AreaClass, UClass);
}

void UNavCollision::BeforeDelete()
{
	UNavCollisionBase::BeforeDelete();

	DELE_PTR_FULL(AreaClass);
}

void ANavigationGraph::AfterRead()
{
	ANavigationData::AfterRead();

}

void ANavigationGraph::BeforeDelete()
{
	ANavigationData::BeforeDelete();

}

void ANavigationGraphNode::AfterRead()
{
	AActor::AfterRead();

}

void ANavigationGraphNode::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UNavigationGraphNodeComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(NextNodeComponent, UNavigationGraphNodeComponent);
	READ_PTR_FULL(PrevNodeComponent, UNavigationGraphNodeComponent);
}

void UNavigationGraphNodeComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(NextNodeComponent);
	DELE_PTR_FULL(PrevNodeComponent);
}

void UNavigationInvokerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(NavigationDataToUpdate, UClass);
}

void UNavigationInvokerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(NavigationDataToUpdate);
}

// Function NavigationSystem.NavigationPath.IsValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsValid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.IsValid"));

	UNavigationPath_IsValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsStringPulled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsStringPulled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.IsStringPulled"));

	UNavigationPath_IsStringPulled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsPartial
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsPartial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.IsPartial"));

	UNavigationPath_IsPartial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathLength
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNavigationPath::GetPathLength()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.GetPathLength"));

	UNavigationPath_GetPathLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathCost
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNavigationPath::GetPathCost()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.GetPathCost"));

	UNavigationPath_GetPathCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetDebugString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UNavigationPath::GetDebugString()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.GetDebugString"));

	UNavigationPath_GetDebugString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// ()
// Parameters:
// TEnumAsByte<Engine_ENavigationOptionFlag> DoRecalculation                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationPath::EnableRecalculationOnInvalidation(TEnumAsByte<Engine_ENavigationOptionFlag> DoRecalculation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation"));

	UNavigationPath_EnableRecalculationOnInvalidation_Params params;
	params.DoRecalculation = DoRecalculation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// ()
// Parameters:
// bool                           bShouldDrawDebugData           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            PathColor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.EnableDebugDrawing"));

	UNavigationPath_EnableDebugDrawing_Params params;
	params.bShouldDrawDebugData = bShouldDrawDebugData;
	params.PathColor = PathColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNavigationPath::AfterRead()
{
	UObject::AfterRead();

}

void UNavigationPath::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNavigationPathGenerator::AfterRead()
{
	UInterface::AfterRead();

}

void UNavigationPathGenerator::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
// ()
// Parameters:
// class AActor*                  Invoker                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor* Invoker)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker"));

	UNavigationSystemV1_UnregisterNavigationInvoker_Params params;
	params.Invoker = Invoker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
// ()
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Goal                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation"));

	UNavigationSystemV1_SimpleMoveToLocation_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
// ()
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Goal                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::SimpleMoveToActor(class AController* Controller, class AActor* Goal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor"));

	UNavigationSystemV1_SimpleMoveToActor_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
// ()
// Parameters:
// int                            MaxNumberOfJobs                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount"));

	UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params params;
	params.MaxNumberOfJobs = MaxNumberOfJobs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
// ()
// Parameters:
// Engine_ENavDataGatheringModeConfig NewMode                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::SetGeometryGatheringMode(Engine_ENavDataGatheringModeConfig NewMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode"));

	UNavigationSystemV1_SetGeometryGatheringMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
// ()
void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount"));

	UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
// ()
// Parameters:
// class AActor*                  Invoker                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TileGenerationRadius           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TileRemovalRadius              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  NavigationDataToUpdate         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius, class UClass* NavigationDataToUpdate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker"));

	UNavigationSystemV1_RegisterNavigationInvoker_Params params;
	params.Invoker = Invoker;
	params.TileGenerationRadius = TileGenerationRadius;
	params.TileRemovalRadius = TileRemovalRadius;
	params.NavigationDataToUpdate = NavigationDataToUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNavigationSystemV1::ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation"));

	UNavigationSystemV1_ProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// ()
// Parameters:
// class ANavMeshBoundsVolume*    NavVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated"));

	UNavigationSystemV1_OnNavigationBoundsUpdated_Params params;
	params.NavVolume = NavVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 RayStart                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 RayEnd                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             Querier                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UClass* FilterClass, class AController* Querier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.NavigationRaycast"));

	UNavigationSystemV1_NavigationRaycast_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RayStart = RayStart;
	params.RayEnd = RayEnd;
	params.FilterClass = FilterClass;
	params.Querier = Querier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
// ()
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  OldArea                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  NewArea                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData"));

	UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Params params;
	params.Object = Object;
	params.OldArea = OldArea;
	params.NewArea = NewArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ProjectedLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation"));

	UNavigationSystemV1_K2_ProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = params.ProjectedLocation;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius"));

	UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius"));

	UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius"));

	UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked"));

	UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::IsNavigationBeingBuilt(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt"));

	UNavigationSystemV1_IsNavigationBeingBuilt_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNavigationSystemV1::GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius"));

	UNavigationSystemV1_GetRandomReachablePointInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNavigationSystemV1::GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius"));

	UNavigationSystemV1_GetRandomPointInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathLength
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PathLength                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ENavigationQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Engine_ENavigationQueryResult> UNavigationSystemV1::GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.GetPathLength"));

	UNavigationSystemV1_GetPathLength_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathLength != nullptr)
		*PathLength = params.PathLength;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathCost
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PathCost                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ENavigationQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Engine_ENavigationQueryResult> UNavigationSystemV1::GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.GetPathCost"));

	UNavigationSystemV1_GetPathCost_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathCost != nullptr)
		*PathCost = params.PathCost;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationSystemV1*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationSystemV1* UNavigationSystemV1::GetNavigationSystem(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem"));

	UNavigationSystemV1_GetNavigationSystem_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  PathfindingContext             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UNavigationSystemV1::FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously"));

	UNavigationSystemV1_FindPathToLocationSynchronously_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  GoalActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TetherDistance                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  PathfindingContext             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UNavigationSystemV1::FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously"));

	UNavigationSystemV1_FindPathToActorSynchronously_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.GoalActor = GoalActor;
	params.TetherDistance = TetherDistance;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UNavigationSystemV1::AfterRead()
{
	UNavigationSystemBase::AfterRead();

	READ_PTR_FULL(MainNavData, ANavigationData);
	READ_PTR_FULL(AbstractNavData, ANavigationData);
}

void UNavigationSystemV1::BeforeDelete()
{
	UNavigationSystemBase::BeforeDelete();

	DELE_PTR_FULL(MainNavData);
	DELE_PTR_FULL(AbstractNavData);
}

void UNavigationSystemModuleConfig::AfterRead()
{
	UNavigationSystemConfig::AfterRead();

}

void UNavigationSystemModuleConfig::BeforeDelete()
{
	UNavigationSystemConfig::BeforeDelete();

}

void ANavigationTestingActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(CapsuleComponent, UCapsuleComponent);
	READ_PTR_FULL(InvokerComponent, UNavigationInvokerComponent);
	READ_PTR_FULL(MyNavData, ANavigationData);
	READ_PTR_FULL(OtherActor, ANavigationTestingActor);
	READ_PTR_FULL(FilterClass, UClass);
}

void ANavigationTestingActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(CapsuleComponent);
	DELE_PTR_FULL(InvokerComponent);
	DELE_PTR_FULL(MyNavData);
	DELE_PTR_FULL(OtherActor);
	DELE_PTR_FULL(FilterClass);
}

void UNavLinkComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UNavLinkComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
