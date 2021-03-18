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

// Function OceanPlugin.CustomVehicleController.GetIsDriving
struct ACustomVehicleController_GetIsDriving_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.CustomVehicleController.ExitVehicle
struct ACustomVehicleController_ExitVehicle_Params
{
};

// Function OceanPlugin.CustomVehicleController.EnterVehicle
struct ACustomVehicleController_EnterVehicle_Params
{
	class APawn*                                       Vehicle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.CustomVehicleController.EnableBuoyancy
struct ACustomVehicleController_EnableBuoyancy_Params
{
};

// Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints
struct ACustomVehicleController_DrawBuoyancyPoints_Params
{
};

// Function OceanPlugin.FlockFish.OnEndOverlap
struct AFlockFish_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.FlockFish.OnBeginOverlap
struct AFlockFish_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.OceanManager.MySetNetworkOffset
struct AOceanManager_MySetNetworkOffset_Params
{
	float                                              Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
struct AOceanManager_LoadLandscapeHeightmap_Params
{
	class UTexture2D*                                  Tex2D;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.OceanManager.GetWaveHeightValue
struct AOceanManager_GetWaveHeightValue_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                      World;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HeightOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TwoIterations;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.OceanManager.GetHeightmapPixel
struct AOceanManager_GetHeightmapPixel_Params
{
	float                                              U;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.SetCurrentLocalTime
struct ATimeManager_SetCurrentLocalTime_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.IsLeapYear
struct ATimeManager_IsLeapYear_Params
{
	int                                                Year;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.InitializeCalendar
struct ATimeManager_InitializeCalendar_Params
{
	struct FTimeDate                                   Time;                                                      // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.IncrementTime
struct ATimeManager_IncrementTime_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.GetYearPhase
struct ATimeManager_GetYearPhase_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
struct ATimeManager_GetElapsedDayInMinutes_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.GetDaysInYear
struct ATimeManager_GetDaysInYear_Params
{
	int                                                Year;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.GetDaysInMonth
struct ATimeManager_GetDaysInMonth_Params
{
	int                                                Year;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Month;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.GetDayPhase
struct ATimeManager_GetDayPhase_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.GetDayOfYear
struct ATimeManager_GetDayOfYear_Params
{
	struct FTimeDate                                   Time;                                                      // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.CalculateSunAngle
struct ATimeManager_CalculateSunAngle_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.CalculateMoonPhase
struct ATimeManager_CalculateMoonPhase_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.TimeManager.CalculateMoonAngle
struct ATimeManager_CalculateMoonAngle_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
struct UAdvancedBuoyancyComponent_TriangleArea_Params
{
	struct FVector                                     A;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     C;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
struct UAdvancedBuoyancyComponent_SplitTriangle_Params
{
	struct FBuoyancyVertex                             H;                                                         // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FBuoyancyVertex                             M;                                                         // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FBuoyancyVertex                             L;                                                         // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     InArrow;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FForceTriangle>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
struct UAdvancedBuoyancyComponent_SetMeshDensity_Params
{
	float                                              NewDensity;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewWaterDensity;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
struct UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params
{
	struct FVector                                     position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bJustGetHeightAtLocation;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
struct UAdvancedBuoyancyComponent_GetOcean_Params
{
};

// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
struct UAdvancedBuoyancyComponent_DrawDebugStuff_Params
{
	struct FForceTriangle                              TriForce;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                      DebugColor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
struct UAdvancedBuoyancyComponent_ApplySlamForce_Params
{
	struct FVector                                     SlamForce;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TriCenter;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
struct UAdvancedBuoyancyComponent_ApplyForce_Params
{
	struct FForceTriangle                              TriForce;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
