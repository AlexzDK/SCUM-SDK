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

void FDonNavigationVoxel::AfterRead()
{
}

void FDonNavigationVoxel::BeforeDelete()
{
}

void FDonNavVoxelY::AfterRead()
{
}

void FDonNavVoxelY::BeforeDelete()
{
}

void FDonNavigationDynamicCollisionNotifyee::AfterRead()
{
}

void FDonNavigationDynamicCollisionNotifyee::BeforeDelete()
{
}

void FDonVoxelCollisionProfile::AfterRead()
{
}

void FDonVoxelCollisionProfile::BeforeDelete()
{
}

void FDoNNavigationDebugParams::AfterRead()
{
}

void FDoNNavigationDebugParams::BeforeDelete()
{
}

void FBT_FlyToTarget_DebugParams::AfterRead()
{
	FDoNNavigationDebugParams::AfterRead();

}

void FBT_FlyToTarget_DebugParams::BeforeDelete()
{
	FDoNNavigationDebugParams::BeforeDelete();

}

void FDonNavigationTask::AfterRead()
{
}

void FDonNavigationTask::BeforeDelete()
{
}

void FDonNavigationDynamicCollisionTask::AfterRead()
{
	FDonNavigationTask::AfterRead();

}

void FDonNavigationDynamicCollisionTask::BeforeDelete()
{
	FDonNavigationTask::BeforeDelete();

}

void FDonNavigationQueryTask::AfterRead()
{
	FDonNavigationTask::AfterRead();

}

void FDonNavigationQueryTask::BeforeDelete()
{
	FDonNavigationTask::BeforeDelete();

}

void FDonNavVoxelX::AfterRead()
{
}

void FDonNavVoxelX::BeforeDelete()
{
}

void FDonNavVoxelXYZ::AfterRead()
{
}

void FDonNavVoxelXYZ::BeforeDelete()
{
}

void FDonNavigationDynamicCollisionPayload::AfterRead()
{
}

void FDonNavigationDynamicCollisionPayload::BeforeDelete()
{
}

void FDoNNavigationQueryParams::AfterRead()
{
}

void FDoNNavigationQueryParams::BeforeDelete()
{
}

void FDoNNavigationQueryData::AfterRead()
{
}

void FDoNNavigationQueryData::BeforeDelete()
{
}

// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish
// ()
// Parameters:
// struct FDoNNavigationQueryData Data                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBTTask_FlyTo::Pathfinding_OnFinish(const struct FDoNNavigationQueryData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish"));

	UBTTask_FlyTo_Pathfinding_OnFinish_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert
// ()
// Parameters:
// struct FDonNavigationDynamicCollisionPayload Data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBTTask_FlyTo::Pathfinding_OnDynamicCollisionAlert(const struct FDonNavigationDynamicCollisionPayload& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert"));

	UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_FlyTo::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(NavigationManager, ADonNavigationManager);
}

void UBTTask_FlyTo::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(NavigationManager);
}

void UDonEnvQueryTest_Navigation::AfterRead()
{
	UEnvQueryTest::AfterRead();

}

void UDonEnvQueryTest_Navigation::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

}

// Function DonAINavigation.DonNavigationHelper.DonNavigationManagerForActor
// ()
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ADonNavigationManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ADonNavigationManager* UDonNavigationHelper::DonNavigationManagerForActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationHelper.DonNavigationManagerForActor"));

	UDonNavigationHelper_DonNavigationManagerForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationHelper.DonNavigationManager
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ADonNavigationManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ADonNavigationManager* UDonNavigationHelper::DonNavigationManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationHelper.DonNavigationManager"));

	UDonNavigationHelper_DonNavigationManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDonNavigationHelper::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UDonNavigationHelper::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function DonAINavigation.DonNavigationManager.VisualizeNAVResult
// ()
// Parameters:
// TArray<struct FVector>         PathSolution                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                 Source                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDoNNavigationDebugParams DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FColor                  LineColor                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADonNavigationManager::VisualizeNAVResult(TArray<struct FVector> PathSolution, const struct FVector& Source, const struct FVector& Destination, bool Reset, const struct FDoNNavigationDebugParams& DebugParams, const struct FColor& LineColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.VisualizeNAVResult"));

	ADonNavigationManager_VisualizeNAVResult_Params params;
	params.PathSolution = PathSolution;
	params.Source = Source;
	params.Destination = Destination;
	params.Reset = Reset;
	params.DebugParams = DebugParams;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
// ()
// Parameters:
// struct FScriptDelegate         Listener                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FDoNNavigationQueryData QueryData                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ADonNavigationManager::VisualizeDynamicCollisionListeners(const struct FScriptDelegate& Listener, const struct FDoNNavigationQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners"));

	ADonNavigationManager_VisualizeDynamicCollisionListeners_Params params;
	params.Listener = Listener;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
// ()
// Parameters:
// struct FScriptDelegate         ListenerToClear                (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FDoNNavigationQueryData QueryData                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int                            VolumeIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADonNavigationManager::StopListeningToDynamicCollisionsForPathIndex(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData, int VolumeIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex"));

	ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Params params;
	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;
	params.VolumeIndex = VolumeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
// ()
// Parameters:
// struct FScriptDelegate         ListenerToClear                (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FDoNNavigationQueryData QueryData                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ADonNavigationManager::StopListeningToDynamicCollisionsForPath(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath"));

	ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Params params;
	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDoNNavigationQueryParams QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FDoNNavigationDebugParams DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultHandlerDelegate          (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         DynamicCollisionListener       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::SchedulePathfindingTask(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, const struct FScriptDelegate& ResultHandlerDelegate, const struct FScriptDelegate& DynamicCollisionListener)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask"));

	ADonNavigationManager_SchedulePathfindingTask_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;
	params.ResultHandlerDelegate = ResultHandlerDelegate;
	params.DynamicCollisionListener = DynamicCollisionListener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
// ()
// Parameters:
// class UPrimitiveComponent*     Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultHandler                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FName                   CustomCacheIdentifier          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReplaceExistingTask           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDisableCacheUsage             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReloadCollisionCache          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseCheapBoundsCollision       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BoundsScaleFactor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForceSynchronousExecution     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDrawDebug                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::ScheduleDynamicCollisionUpdate(class UPrimitiveComponent* Mesh, const struct FScriptDelegate& ResultHandler, const struct FName& CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate"));

	ADonNavigationManager_ScheduleDynamicCollisionUpdate_Params params;
	params.Mesh = Mesh;
	params.ResultHandler = ResultHandler;
	params.CustomCacheIdentifier = CustomCacheIdentifier;
	params.bReplaceExistingTask = bReplaceExistingTask;
	params.bDisableCacheUsage = bDisableCacheUsage;
	params.bReloadCollisionCache = bReloadCollisionCache;
	params.bUseCheapBoundsCollision = bUseCheapBoundsCollision;
	params.BoundsScaleFactor = BoundsScaleFactor;
	params.bForceSynchronousExecution = bForceSynchronousExecution;
	params.bDrawDebug = bDrawDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
// ()
// Parameters:
// class UPrimitiveComponent*     Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BoundsScaleFactor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent* Mesh, float BoundsScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld"));

	ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Params params;
	params.Mesh = Mesh;
	params.BoundsScaleFactor = BoundsScaleFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
// ()
// Parameters:
// struct FVector                 DesiredLocation                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::IsLocationWithinNavigableWorld(const struct FVector& DesiredLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld"));

	ADonNavigationManager_IsLocationWithinNavigableWorld_Params params;
	params.DesiredLocation = DesiredLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LineTraceHeight                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::IsLocationBeneathLandscape(const struct FVector& Location, float LineTraceHeight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape"));

	ADonNavigationManager_IsLocationBeneathLandscape_Params params;
	params.Location = Location;
	params.LineTraceHeight = LineTraceHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathSweep
// ()
// Parameters:
// class UPrimitiveComponent*     CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CollisionShapeInflation        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::IsDirectPathSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.IsDirectPathSweep"));

	ADonNavigationManager_IsDirectPathSweep_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::IsDirectPathLineTrace(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, TArray<class AActor*> ActorsToIgnore, bool bFindInitialOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace"));

	ADonNavigationManager_IsDirectPathLineTrace_Params params;
	params.Start = Start;
	params.End = End;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bFindInitialOverlaps = bFindInitialOverlaps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep
// ()
// Parameters:
// class UPrimitiveComponent*     CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CollisionShapeInflation        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::IsDirectPathLineSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep"));

	ADonNavigationManager_IsDirectPathLineSweep_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.HasTask
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::HasTask(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.HasTask"));

	ADonNavigationManager_HasTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFoundValidResult              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxDesiredAltitude             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxZAngularDispacement         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector ADonNavigationManager::FindRandomPointFromActorInNavWorld(class AActor* Actor, float Distance, bool* bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld"));

	ADonNavigationManager_FindRandomPointFromActorInNavWorld_Params params;
	params.Actor = Actor;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
// ()
// Parameters:
// class AActor*                  NavigationActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFoundValidResult              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxDesiredAltitude             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxZAngularDispacement         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector ADonNavigationManager::FindRandomPointAroundOriginInNavWorld(class AActor* NavigationActor, const struct FVector& Origin, float Distance, bool* bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld"));

	ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Params params;
	params.NavigationActor = NavigationActor;
	params.Origin = Origin;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         PathSolutionRaw                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>         PathSolutionOptimized          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FDoNNavigationQueryParams QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FDoNNavigationDebugParams DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::FindPathSolution_StressTesting(class AActor* Actor, const struct FVector& Destination, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting"));

	ADonNavigationManager_FindPathSolution_StressTesting_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathSolutionRaw != nullptr)
		*PathSolutionRaw = params.PathSolutionRaw;
	if (PathSolutionOptimized != nullptr)
		*PathSolutionOptimized = params.PathSolutionOptimized;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
// ()
void ADonNavigationManager::Debug_ToggleWorldBoundaryInGame()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame"));

	ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
// ()
// Parameters:
// class UPrimitiveComponent*     MeshOrPrimitive                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDrawPersistent                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADonNavigationManager::Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent* MeshOrPrimitive, bool bDrawPersistent, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile"));

	ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Params params;
	params.MeshOrPrimitive = MeshOrPrimitive;
	params.bDrawPersistent = bDrawPersistent;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CubeSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DrawPersistentLines            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoInitializeVolumes         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADonNavigationManager::Debug_DrawVolumesAroundPoint(const struct FVector& Location, int CubeSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint"));

	ADonNavigationManager_Debug_DrawVolumesAroundPoint_Params params;
	params.Location = Location;
	params.CubeSize = CubeSize;
	params.DrawPersistentLines = DrawPersistentLines;
	params.Duration = Duration;
	params.LineThickness = LineThickness;
	params.bAutoInitializeVolumes = bAutoInitializeVolumes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes
// ()
// Parameters:
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADonNavigationManager::Debug_DrawAllVolumes(float LineThickness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes"));

	ADonNavigationManager_Debug_DrawAllVolumes_Params params;
	params.LineThickness = LineThickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes
// ()
void ADonNavigationManager::Debug_ClearAllVolumes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes"));

	ADonNavigationManager_Debug_ClearAllVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigationManager.ConstructBuilder
// ()
void ADonNavigationManager::ConstructBuilder()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.ConstructBuilder"));

	ADonNavigationManager_ConstructBuilder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
// ()
// Parameters:
// struct FVector                 DesiredLocation                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector ADonNavigationManager::ClampLocationToNavigableWorld(const struct FVector& DesiredLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld"));

	ADonNavigationManager_ClampLocationToNavigableWorld_Params params;
	params.DesiredLocation = DesiredLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.CanNavigate
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADonNavigationManager::CanNavigate(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.CanNavigate"));

	ADonNavigationManager_CanNavigate_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.AbortPathfindingTask
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADonNavigationManager::AbortPathfindingTask(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigationManager.AbortPathfindingTask"));

	ADonNavigationManager_AbortPathfindingTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ADonNavigationManager::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SceneComponent, USceneComponent);
	READ_PTR_FULL(Billboard, UBillboardComponent);
	READ_PTR_FULL(WorldBoundaryVisualizer, UBoxComponent);
}

void ADonNavigationManager::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SceneComponent);
	DELE_PTR_FULL(Billboard);
	DELE_PTR_FULL(WorldBoundaryVisualizer);
}

void ADonNavigationManagerUnbound::AfterRead()
{
	ADonNavigationManager::AfterRead();

}

void ADonNavigationManagerUnbound::BeforeDelete()
{
	ADonNavigationManager::BeforeDelete();

}

// Function DonAINavigation.DonNavigator.OnNextSegment
// ()
// Parameters:
// struct FVector                 NextPoint                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDonNavigator::OnNextSegment(const struct FVector& NextPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigator.OnNextSegment"));

	UDonNavigator_OnNextSegment_Params params;
	params.NextPoint = NextPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigator.OnLocomotionEnd
// ()
// Parameters:
// bool                           bLocomotionSuccess             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDonNavigator::OnLocomotionEnd(bool bLocomotionSuccess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigator.OnLocomotionEnd"));

	UDonNavigator_OnLocomotionEnd_Params params;
	params.bLocomotionSuccess = bLocomotionSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigator.OnLocomotionBegin
// ()
void UDonNavigator::OnLocomotionBegin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigator.OnLocomotionBegin"));

	UDonNavigator_OnLocomotionBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigator.OnLocomotionAbort
// ()
void UDonNavigator::OnLocomotionAbort()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigator.OnLocomotionAbort"));

	UDonNavigator_OnLocomotionAbort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DonAINavigation.DonNavigator.AddMovementInputCustom
// ()
// Parameters:
// struct FVector                 WorldDirection                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ScaleValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDonNavigator::AddMovementInputCustom(const struct FVector& WorldDirection, float ScaleValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DonAINavigation.DonNavigator.AddMovementInputCustom"));

	UDonNavigator_AddMovementInputCustom_Params params;
	params.WorldDirection = WorldDirection;
	params.ScaleValue = ScaleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDonNavigator::AfterRead()
{
	UInterface::AfterRead();

}

void UDonNavigator::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
