#pragma once

// Name: S, Version: N


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish
struct UBTTask_FlyTo_Pathfinding_OnFinish_Params
{
	struct FDoNNavigationQueryData                     Data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert
struct UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Params
{
	struct FDonNavigationDynamicCollisionPayload       Data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationHelper.DonNavigationManagerForActor
struct UDonNavigationHelper_DonNavigationManagerForActor_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADonNavigationManager*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationHelper.DonNavigationManager
struct UDonNavigationHelper_DonNavigationManager_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADonNavigationManager*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.VisualizeNAVResult
struct ADonNavigationManager_VisualizeNAVResult_Params
{
	TArray<struct FVector>                             PathSolution;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                                     Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Destination;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Reset;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDoNNavigationDebugParams                   DebugParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                      LineColor;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
struct ADonNavigationManager_VisualizeDynamicCollisionListeners_Params
{
	struct FScriptDelegate                             Listener;                                                  // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FDoNNavigationQueryData                     QueryData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
struct ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Params
{
	struct FScriptDelegate                             ListenerToClear;                                           // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FDoNNavigationQueryData                     QueryData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                VolumeIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
struct ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Params
{
	struct FScriptDelegate                             ListenerToClear;                                           // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FDoNNavigationQueryData                     QueryData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask
struct ADonNavigationManager_SchedulePathfindingTask_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Destination;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDoNNavigationQueryParams                   QueryParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FDoNNavigationDebugParams                   DebugParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ResultHandlerDelegate;                                     // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             DynamicCollisionListener;                                  // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
struct ADonNavigationManager_ScheduleDynamicCollisionUpdate_Params
{
	class UPrimitiveComponent*                         Mesh;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ResultHandler;                                             // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       CustomCacheIdentifier;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReplaceExistingTask;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableCacheUsage;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReloadCollisionCache;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCheapBoundsCollision;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BoundsScaleFactor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceSynchronousExecution;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawDebug;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
struct ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Params
{
	class UPrimitiveComponent*                         Mesh;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BoundsScaleFactor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
struct ADonNavigationManager_IsLocationWithinNavigableWorld_Params
{
	struct FVector                                     DesiredLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape
struct ADonNavigationManager_IsLocationBeneathLandscape_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineTraceHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathSweep
struct ADonNavigationManager_IsDirectPathSweep_Params
{
	class UPrimitiveComponent*                         CollisionComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bFindInitialOverlaps;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionShapeInflation;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace
struct ADonNavigationManager_IsDirectPathLineTrace_Params
{
	struct FVector                                     Start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bFindInitialOverlaps;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep
struct ADonNavigationManager_IsDirectPathLineSweep_Params
{
	class UPrimitiveComponent*                         CollisionComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  OutHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bFindInitialOverlaps;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionShapeInflation;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.HasTask
struct ADonNavigationManager_HasTask_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
struct ADonNavigationManager_FindRandomPointFromActorInNavWorld_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFoundValidResult;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredAltitude;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxZAngularDispacement;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAttempts;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
struct ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Params
{
	class AActor*                                      NavigationActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFoundValidResult;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredAltitude;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxZAngularDispacement;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAttempts;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting
struct ADonNavigationManager_FindPathSolution_StressTesting_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Destination;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PathSolutionRaw;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PathSolutionOptimized;                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDoNNavigationQueryParams                   QueryParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FDoNNavigationDebugParams                   DebugParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
struct ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Params
{
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
struct ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Params
{
	class UPrimitiveComponent*                         MeshOrPrimitive;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawPersistent;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
struct ADonNavigationManager_Debug_DrawVolumesAroundPoint_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CubeSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DrawPersistentLines;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineThickness;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoInitializeVolumes;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes
struct ADonNavigationManager_Debug_DrawAllVolumes_Params
{
	float                                              LineThickness;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes
struct ADonNavigationManager_Debug_ClearAllVolumes_Params
{
};

// Function DonAINavigation.DonNavigationManager.ConstructBuilder
struct ADonNavigationManager_ConstructBuilder_Params
{
};

// Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
struct ADonNavigationManager_ClampLocationToNavigableWorld_Params
{
	struct FVector                                     DesiredLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.CanNavigate
struct ADonNavigationManager_CanNavigate_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigationManager.AbortPathfindingTask
struct ADonNavigationManager_AbortPathfindingTask_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigator.OnNextSegment
struct UDonNavigator_OnNextSegment_Params
{
	struct FVector                                     NextPoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigator.OnLocomotionEnd
struct UDonNavigator_OnLocomotionEnd_Params
{
	bool                                               bLocomotionSuccess;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonAINavigation.DonNavigator.OnLocomotionBegin
struct UDonNavigator_OnLocomotionBegin_Params
{
};

// Function DonAINavigation.DonNavigator.OnLocomotionAbort
struct UDonNavigator_OnLocomotionAbort_Params
{
};

// Function DonAINavigation.DonNavigator.AddMovementInputCustom
struct UDonNavigator_AddMovementInputCustom_Params
{
	struct FVector                                     WorldDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
