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
// Classes
//---------------------------------------------------------------------------

// Class DonAINavigation.BTTask_FlyTo
// 0x0118 (FullSize[0x0188] - InheritedSize[0x0070])
class UBTTask_FlyTo : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      FlightLocationKey;                                         // 0x0070(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      FlightResultKey;                                           // 0x0098(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      KeyToFlipFlopWhenTaskExits;                                // 0x00C0(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              MinimumProximityRequired;                                  // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRecalcPathOnDestinationChanged : 1;                       // 0x00EC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W2OE[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RecalculatePathTolerance;                                  // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UN2Y[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDoNNavigationQueryParams                   QueryParams;                                               // 0x00F8(0x0020) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBT_FlyToTarget_DebugParams                 DebugParams;                                               // 0x0118(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class ADonNavigationManager*                       NavigationManager;                                         // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeleportToDestinationUponFailure;                         // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J265[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxTimeBeforeTeleport;                                     // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QAFA[0x50];                                    // 0x0138(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DonAINavigation.BTTask_FlyTo"));
		return ptr;
	}



	void Pathfinding_OnFinish(const struct FDoNNavigationQueryData& Data);
	void Pathfinding_OnDynamicCollisionAlert(const struct FDonNavigationDynamicCollisionPayload& Data);
	void AfterRead();
	void BeforeDelete();

};

// Class DonAINavigation.DonEnvQueryTest_Navigation
// 0x0010 (FullSize[0x0208] - InheritedSize[0x01F8])
class UDonEnvQueryTest_Navigation : public UEnvQueryTest
{
public:
	unsigned char                                      bSearchRandomLocation : 1;                                 // 0x01F8(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JXYA[0x3];                                     // 0x01F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RandomLocationMaxAttempts;                                 // 0x01FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomLocationRadius;                                      // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8RAS[0x4];                                     // 0x0204(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DonAINavigation.DonEnvQueryTest_Navigation"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DonAINavigation.DonNavigationHelper
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDonNavigationHelper : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DonAINavigation.DonNavigationHelper"));
		return ptr;
	}



	class ADonNavigationManager* DonNavigationManagerForActor(class AActor* Actor);
	class ADonNavigationManager* DonNavigationManager(class UObject* WorldContextObject);
	void AfterRead();
	void BeforeDelete();

};

// Class DonAINavigation.DonNavigationManager
// 0x6950 (FullSize[0x6B70] - InheritedSize[0x0220])
class ADonNavigationManager : public AActor
{
public:
	unsigned char                                      UnknownData_ZTBY[0x1F4];                                   // 0x0220(0x01F4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsUnbound;                                                // 0x0414(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2WT[0x3];                                     // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneComponent;                                            // 0x0418(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBillboardComponent*                         Billboard;                                                 // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L4F0[0x10];                                    // 0x0428(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VoxelSize;                                                 // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XGridSize;                                                 // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                YGridSize;                                                 // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZGridSize;                                                 // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<Engine_ECollisionChannel>>      ObstacleQueryChannels;                                     // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnoreForCollision;                                // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      AutoCorrectionGuessList;                                   // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              UnrealPhyxPenetrationDepth;                                // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PerformCollisionChecksOnStartup;                           // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMultiThreadingEnabled;                                    // 0x047D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ABB2[0x2];                                     // 0x047E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPathSolverIterationsPerTick;                            // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCollisionSolverIterationsPerTick;                       // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPathSolverIterationsOnThread;                           // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCollisionSolverIterationsOnThread;                      // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPathSolverIterationsPerTick_Unbound;                    // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCollisionSolverIterationsPerTick_Unbound;               // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPathSolverIterationsOnThread_Unbound;                   // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCollisionSolverIterationsOnThread_Unbound;              // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                               WorldBoundaryVisualizer;                                   // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayWorldBoundary;                                     // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayWorldBoundaryInGame;                               // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UP36[0x2];                                     // 0x04AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DebugVoxelsLineThickness;                                  // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRunDebugValidationsForDynamicCollisions;                  // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M14R[0x653F];                                  // 0x04B1(0x653F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ActiveNavigationTaskOwners[0x50];                          // 0x04B1(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      ActiveCollisionTaskOwners[0x50];                           // 0x6A40(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_W9SR[0xE0];                                    // 0x6A90(0x00E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DonAINavigation.DonNavigationManager"));
		return ptr;
	}



	void VisualizeNAVResult(TArray<struct FVector> PathSolution, const struct FVector& Source, const struct FVector& Destination, bool Reset, const struct FDoNNavigationDebugParams& DebugParams, const struct FColor& LineColor);
	void VisualizeDynamicCollisionListeners(const struct FScriptDelegate& Listener, const struct FDoNNavigationQueryData& QueryData);
	void StopListeningToDynamicCollisionsForPathIndex(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData, int VolumeIndex);
	void StopListeningToDynamicCollisionsForPath(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData);
	bool SchedulePathfindingTask(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, const struct FScriptDelegate& ResultHandlerDelegate, const struct FScriptDelegate& DynamicCollisionListener);
	bool ScheduleDynamicCollisionUpdate(class UPrimitiveComponent* Mesh, const struct FScriptDelegate& ResultHandler, const struct FName& CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug);
	bool IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent* Mesh, float BoundsScaleFactor);
	bool IsLocationWithinNavigableWorld(const struct FVector& DesiredLocation);
	bool IsLocationBeneathLandscape(const struct FVector& Location, float LineTraceHeight);
	bool IsDirectPathSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation);
	bool IsDirectPathLineTrace(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, TArray<class AActor*> ActorsToIgnore, bool bFindInitialOverlaps);
	bool IsDirectPathLineSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation);
	bool HasTask(class AActor* Actor);
	struct FVector FindRandomPointFromActorInNavWorld(class AActor* Actor, float Distance, bool* bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts);
	struct FVector FindRandomPointAroundOriginInNavWorld(class AActor* NavigationActor, const struct FVector& Origin, float Distance, bool* bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts);
	bool FindPathSolution_StressTesting(class AActor* Actor, const struct FVector& Destination, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams);
	void Debug_ToggleWorldBoundaryInGame();
	void Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent* MeshOrPrimitive, bool bDrawPersistent, float Duration);
	void Debug_DrawVolumesAroundPoint(const struct FVector& Location, int CubeSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes);
	void Debug_DrawAllVolumes(float LineThickness);
	void Debug_ClearAllVolumes();
	void ConstructBuilder();
	struct FVector ClampLocationToNavigableWorld(const struct FVector& DesiredLocation);
	bool CanNavigate(const struct FVector& Location);
	void AbortPathfindingTask(class AActor* Actor);
	void AfterRead();
	void BeforeDelete();

};

// Class DonAINavigation.DonNavigationManagerUnbound
// 0x0000 (FullSize[0x6B70] - InheritedSize[0x6B70])
class ADonNavigationManagerUnbound : public ADonNavigationManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DonAINavigation.DonNavigationManagerUnbound"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DonAINavigation.DonNavigator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDonNavigator : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DonAINavigation.DonNavigator"));
		return ptr;
	}



	void OnNextSegment(const struct FVector& NextPoint);
	void OnLocomotionEnd(bool bLocomotionSuccess);
	void OnLocomotionBegin();
	void OnLocomotionAbort();
	void AddMovementInputCustom(const struct FVector& WorldDirection, float ScaleValue);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
