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
// Enums
//---------------------------------------------------------------------------

// Enum DcxVehicle.EDcxVehicleClutchAccuracyMode
enum class DcxVehicle_EDcxVehicleClutchAccuracyMode : uint8_t
{
	EDcxVehicleClutchAccuracyMode__Estimate = 0,
	EDcxVehicleClutchAccuracyMode__BestPossible = 1,
	EDcxVehicleClutchAccuracyMode__EDcxVehicleClutchAccuracyMode_MAX = 2,

};

// Enum DcxVehicle.EDcxVehicleDifferential4W
enum class DcxVehicle_EDcxVehicleDifferential4W : uint8_t
{
	EDcxVehicleDifferential4W__LS_4WD = 0,
	EDcxVehicleDifferential4W__LS_FrontWD = 1,
	EDcxVehicleDifferential4W__LS_RearWD = 2,
	EDcxVehicleDifferential4W__Open_4WD = 3,
	EDcxVehicleDifferential4W__Open_FrontWD = 4,
	EDcxVehicleDifferential4W__Open_RearWD = 5,
	EDcxVehicleDifferential4W__EDcxVehicleDifferential4W_MAX = 6,

};

// Enum DcxVehicle.EDcxVehicleWheelOrder4W
enum class DcxVehicle_EDcxVehicleWheelOrder4W : uint8_t
{
	EDcxVehicleWheelOrder4W__FrontLeft = 0,
	EDcxVehicleWheelOrder4W__FrontRight = 1,
	EDcxVehicleWheelOrder4W__RearLeft = 2,
	EDcxVehicleWheelOrder4W__RearRight = 3,
	EDcxVehicleWheelOrder4W__EDcxVehicleWheelOrder4W_MAX = 4,

};

// Enum DcxVehicle.EDcxVehicleDriveControl4W
enum class DcxVehicle_EDcxVehicleDriveControl4W : uint8_t
{
	EDcxVehicleDriveControl4W__Throttle = 0,
	EDcxVehicleDriveControl4W__Brake = 1,
	EDcxVehicleDriveControl4W__Handbrake = 2,
	EDcxVehicleDriveControl4W__Steer = 3,
	EDcxVehicleDriveControl4W__Clutch = 4,
	EDcxVehicleDriveControl4W__NumControls = 5,
	EDcxVehicleDriveControl4W__EDcxVehicleDriveControl4W_MAX = 6,

};

// Enum DcxVehicle.EDcxVehicleDriveControlNW
enum class DcxVehicle_EDcxVehicleDriveControlNW : uint8_t
{
	EDcxVehicleDriveControlNW__Throttle = 0,
	EDcxVehicleDriveControlNW__Brake = 1,
	EDcxVehicleDriveControlNW__Handbrake = 2,
	EDcxVehicleDriveControlNW__Steer = 3,
	EDcxVehicleDriveControlNW__Clutch = 4,
	EDcxVehicleDriveControlNW__NumControls = 5,
	EDcxVehicleDriveControlNW__EDcxVehicleDriveControlNW_MAX = 6,

};

// Enum DcxVehicle.EDcxVehicleDriveControlModelTank
enum class DcxVehicle_EDcxVehicleDriveControlModelTank : uint8_t
{
	EDcxVehicleDriveControlModelTank__Standard = 0,
	EDcxVehicleDriveControlModelTank__Special = 1,
	EDcxVehicleDriveControlModelTank__EDcxVehicleDriveControlModelTank_MAX = 2,

};

// Enum DcxVehicle.EDcxVehicleDriveControlTank
enum class DcxVehicle_EDcxVehicleDriveControlTank : uint8_t
{
	EDcxVehicleDriveControlTank__Throttle = 0,
	EDcxVehicleDriveControlTank__BrakeLeft = 1,
	EDcxVehicleDriveControlTank__BrakeRight = 2,
	EDcxVehicleDriveControlTank__ThrustLeft = 3,
	EDcxVehicleDriveControlTank__ThrustRight = 4,
	EDcxVehicleDriveControlTank__Clutch = 5,
	EDcxVehicleDriveControlTank__NumControls = 6,
	EDcxVehicleDriveControlTank__EDcxVehicleDriveControlTank_MAX = 7,

};

// Enum DcxVehicle.EDcxVehicleGearbox
enum class DcxVehicle_EDcxVehicleGearbox : uint8_t
{
	EDcxVehicleGearbox__Automatic  = 0,
	EDcxVehicleGearbox__SemiAutomatic = 1,
	EDcxVehicleGearbox__Manual     = 2,
	EDcxVehicleGearbox__EDcxVehicleGearbox_MAX = 3,

};

// Enum DcxVehicle.EDcxVehicleNoDriveControl
enum class DcxVehicle_EDcxVehicleNoDriveControl : uint8_t
{
	EDcxVehicleNoDriveControl__Throttle = 0,
	EDcxVehicleNoDriveControl__Brake = 1,
	EDcxVehicleNoDriveControl__Steer = 2,
	EDcxVehicleNoDriveControl__NumControls = 3,
	EDcxVehicleNoDriveControl__EDcxVehicleNoDriveControl_MAX = 4,

};

// Enum DcxVehicle.EDcxVehicleWheelSweep
enum class DcxVehicle_EDcxVehicleWheelSweep : uint8_t
{
	EDcxVehicleWheelSweep__Both    = 0,
	EDcxVehicleWheelSweep__Simple  = 1,
	EDcxVehicleWheelSweep__Complex = 2,
	EDcxVehicleWheelSweep__EDcxVehicleWheelSweep_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DcxVehicle.DcxAnalogControlArray
// 0x0010
struct FDcxAnalogControlArray
{
	TArray<float>                                      Items;                                                     // 0x0000(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxAnimNodeWheelSimulator
// 0x0018 (0x00E0 - 0x00C8)
struct FDcxAnimNodeWheelSimulator : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData_ILM9[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxGear
// 0x0004
struct FDcxGear
{
	int                                                GearNum;                                                   // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxMath
// 0x0001
struct FDcxMath
{
	unsigned char                                      UnknownData_IQYO[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleAnimInstanceProxy
// 0x0010 (0x0770 - 0x0760)
struct FDcxVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData_9VNP[0x10];                                    // 0x0760(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleClutchData
// 0x0010
struct FDcxVehicleClutchData
{
	float                                              BitePoint;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Strength;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<DcxVehicle_EDcxVehicleClutchAccuracyMode> AccuracyMode;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R526[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EstimateIterations;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxDrivableSurfaceToTireFrictionPair
// 0x0010
struct FDcxDrivableSurfaceToTireFrictionPair
{
	class UPhysicalMaterial*                           SurfaceMaterial;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrictionScale;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ZDC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleWheelData
// 0x0020
struct FDcxVehicleWheelData
{
	float                                              Radius;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mass;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DampingRate;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxBrakeTorque;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHandBrakeTorque;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSteer;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToeAngle;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleWheelState
// 0x00B0
struct FDcxVehicleWheelState
{
	struct FVector                                     SuspensionLineStart;                                       // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SuspensionLineDirection;                                   // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuspensionLineLength;                                      // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInAir;                                                  // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KN6M[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TireContactActor;                                          // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           TireSurfaceMaterial;                                       // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TireContactPoint;                                          // 0x0030(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TireContactNormal;                                         // 0x003C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TireFriction;                                              // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuspensionJounce;                                          // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuspensionSpringForce;                                     // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TireLongitudinalDirection;                                 // 0x0054(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TireLateralDirection;                                      // 0x0060(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LongitudinalSlip;                                          // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LateralSlip;                                               // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SteerAngle;                                                // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DB06[0x38];                                    // 0x0078(0x0038) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleEngineData
// 0x00A0
struct FDcxVehicleEngineData
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                               // 0x0000(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              MOI;                                                       // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IdleRPM;                                                   // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRPM;                                                    // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DampingRateFullThrottle;                                   // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DampingRateZeroThrottleClutchEngaged;                      // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DampingRateZeroThrottleClutchDisengaged;                   // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleGearData
// 0x000C
struct FDcxVehicleGearData
{
	float                                              Ratio;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DownRatio;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpRatio;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleGearboxData
// 0x0030
struct FDcxVehicleGearboxData
{
	TEnumAsByte<DcxVehicle_EDcxVehicleGearbox>         Type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S51S[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FinalRatio;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SwitchTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_780W[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDcxVehicleGearData>                 ForwardGears;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              ReverseGearRatio;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Latency;                                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NeutralGearUpRatio;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FDFN[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleDifferentialData4W
// 0x001C
struct FDcxVehicleDifferentialData4W
{
	TEnumAsByte<DcxVehicle_EDcxVehicleDifferential4W>  DifferentialType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BBK4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FrontRearSplit;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrontLeftRightSplit;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RearLeftRightSplit;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CenterBias;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrontBias;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RearBias;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleSuspensionData
// 0x0020
struct FDcxVehicleSuspensionData
{
	float                                              NaturalFrequency;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringDamperRatio;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxCompression;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDroop;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForceOffset;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CamberAtRest;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CamberAtMaxCompression;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CamberAtMaxDroop;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleWheelConfiguration
// 0x0078
struct FDcxVehicleWheelConfiguration
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BY4S[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 CollisionMesh;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePresetShape;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2B3G[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDcxVehicleWheelData                        WheelData;                                                 // 0x0024(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDcxVehicleSuspensionData                   SuspensionData;                                            // 0x0044(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8UQ4[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDcxVehicleTire*                             Tire;                                                      // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDriven;                                                 // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<DcxVehicle_EDcxVehicleWheelSweep>      SweepType;                                                 // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5FTM[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleTireLoadFilterData
// 0x0010
struct FDcxVehicleTireLoadFilterData
{
	float                                              MinNormalizedLoad;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinFilteredNormalizedLoad;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxNormalizedLoad;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFilteredNormalizedLoad;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleDriveInputRate
// 0x0008
struct FDcxVehicleDriveInputRate
{
	float                                              RiseRate;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FallRate;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DcxVehicle.DcxVehicleDriveState
// 0x0018
struct FDcxVehicleDriveState
{
	struct FDcxAnalogControlArray                      AnalogControls;                                            // 0x0000(0x0010) (Transient, NativeAccessSpecifierPublic)
	struct FDcxGear                                    CurrentGear;                                               // 0x0010(0x0004) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDcxGear                                    TargetGear;                                                // 0x0014(0x0004) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
