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

// Class DcxVehicle.DcxVehicle
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class ADcxVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDcxVehicleWheelsComponent*                  VehicleWheels;                                             // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicle"));
		return ptr;
	}



	class UDcxVehicleWheelsComponent* GetVehicleWheels();
	class USkeletalMeshComponent* GetMesh();
	void DcxVehicleSetBasisVectors(const struct FVector& Up, const struct FVector& Forward);
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicle4W
// 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
class ADcxVehicle4W : public ADcxVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicle4W"));
		return ptr;
	}



	class UDcxVehicleDriveComponent4W* GetVehicleDrive4W();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleAnimInstance
// 0x0784 (FullSize[0x0A3C] - InheritedSize[0x02B8])
class UDcxVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_ANCS[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_TROK[0x770];                                   // 0x02C0(0x0770) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDcxVehicleWheelsComponent*                  VehicleWheels;                                             // 0x0A30(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NGBW[0x4];                                     // 0x0A38(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleAnimInstance"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleWheelsComponent
// 0x0108 (FullSize[0x0240] - InheritedSize[0x0138])
class UDcxVehicleWheelsComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData_SBKN[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChassisMass;                                               // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     InertiaTensorScale;                                        // 0x0144(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FDcxVehicleWheelConfiguration>       WheelConfigurations;                                       // 0x0150(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FDcxVehicleTireLoadFilterData               TireLoadFilter;                                            // 0x0160(0x0010) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	bool                                               bUseAvoidance;                                             // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BSK3[0x3];                                     // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AvoidanceWeight;                                           // 0x0174(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                AvoidanceUID;                                              // 0x0178(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                            // 0x017C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                             // 0x0180(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                            // 0x0184(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	float                                              ThresholdLongitudinalSpeed;                                // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LowForwardSpeedSubStepCount;                               // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HighForwardSpeedSubStepCount;                              // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DragCoefficient;                                           // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DragArea;                                                  // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDcxVehicleDriveInputRate                   ThrottleRate;                                              // 0x019C(0x0008) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FDcxVehicleDriveInputRate                   BrakeRate;                                                 // 0x01A4(0x0008) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FDcxVehicleDriveInputRate                   HandbrakeRate;                                             // 0x01AC(0x0008) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FDcxVehicleDriveInputRate                   SteerRate;                                                 // 0x01B4(0x0008) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              AvoidanceRadius;                                           // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AvoidanceHeight;                                           // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AvoidanceConsiderationRadius;                              // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AvoidanceThrottleStep;                                     // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AvoidanceBrakeStep;                                        // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AvoidanceSteerStep;                                        // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecreateRequired;                                         // 0x01D4(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8RLA[0x3];                                     // 0x01D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDcxVehicleWheelsRawInput*                   RawInput;                                                  // 0x01D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<float>                                      SmoothAnalogControls;                                      // 0x01E0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FDcxVehicleDriveState                       ReplicatedState;                                           // 0x01F0(0x0018) (Net, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                               bWasAvoidanceUpdated;                                      // 0x0208(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W013[0x3];                                     // 0x0209(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AvoidanceVelocity;                                         // 0x020C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     AvoidanceLockVelocity;                                     // 0x0218(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AvoidanceLockTimer;                                        // 0x0224(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PZUY[0x18];                                    // 0x0228(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleWheelsComponent"));
		return ptr;
	}



	void SetWheelOffset(int WheelIndex, const struct FVector& Offset);
	void SetWheelData(int WheelIndex, const struct FDcxVehicleWheelData& NewWheelData);
	void SetTire(int WheelId, class UDcxVehicleTire* NewTire);
	void SetSuspensionData(int WheelIndex, const struct FDcxVehicleSuspensionData& NewSuspensionData);
	void SetGroupsToIgnore(const struct FNavAvoidanceMask& Mask);
	void SetGroupsToAvoid(const struct FNavAvoidanceMask& Mask);
	void SetChassisMass(float Mass);
	void SetAvoidanceGroup(const struct FNavAvoidanceMask& Mask);
	void ServerUpdateState(const struct FDcxAnalogControlArray& AnalogControls, const struct FDcxGear& CurrentGear, const struct FDcxGear& TargetGear);
	bool IsWheelDisabled(int WheelIndex);
	bool GetWheelState(int WheelIndex, struct FDcxVehicleWheelState* WheelState);
	float GetWheelRotationSpeed(int WheelIndex);
	float GetWheelRotationAngle(int WheelIndex);
	struct FVector GetWheelOffset(int WheelIndex);
	struct FDcxVehicleWheelData GetWheelData(int WheelIndex);
	class UDcxVehicleTire* GetTire(int WheelIndex);
	struct FDcxVehicleSuspensionData GetSuspensionData(int WheelIndex);
	class UDcxVehicleWheelsRawInput* GetRawInput();
	int GetNumWheels();
	float GetForwardSpeed();
	float GetChassisMass();
	struct FName GetBoneName(int WheelIndex);
	float GetAnalogControl(unsigned char Control);
	void EnableWheel(int WheelIndex);
	void EnableAvoidance(bool bEnabled);
	void DisableWheel(int WheelIndex);
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleDriveComponent
// 0x0178 (FullSize[0x03B8] - InheritedSize[0x0240])
class UDcxVehicleDriveComponent : public UDcxVehicleWheelsComponent
{
public:
	struct FDcxVehicleEngineData                       EngineData;                                                // 0x0240(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FDcxVehicleGearboxData                      GearboxData;                                               // 0x02E0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FDcxVehicleClutchData                       ClutchData;                                                // 0x0310(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bAutoReverse;                                              // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0JGN[0x3];                                     // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WrongDirectionThreshold;                                   // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoBrake;                                                // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M7WY[0x3];                                     // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StopThreshold;                                             // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          SteerCurve;                                                // 0x0330(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleDriveComponent"));
		return ptr;
	}



	void SetTargetGear(int NewGear, bool bImmediate);
	void SetGearboxType(TEnumAsByte<DcxVehicle_EDcxVehicleGearbox> NewGearboxType);
	void SetGearboxData(const struct FDcxVehicleGearboxData& NewGearboxData);
	void SetEngineRotationSpeed(float RPM);
	void SetEngineData(const struct FDcxVehicleEngineData& NewEngineData);
	void SetClutchData(const struct FDcxVehicleClutchData& NewClutchData);
	int GetTargetGear();
	TEnumAsByte<DcxVehicle_EDcxVehicleGearbox> GetGearboxType();
	struct FDcxVehicleGearboxData GetGearboxData();
	float GetEngineRotationSpeed();
	struct FDcxVehicleEngineData GetEngineData();
	int GetCurrentGear();
	struct FDcxVehicleClutchData GetClutchData();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleDriveComponent4W
// 0x0020 (FullSize[0x03D8] - InheritedSize[0x03B8])
class UDcxVehicleDriveComponent4W : public UDcxVehicleDriveComponent
{
public:
	struct FDcxVehicleDifferentialData4W               DifferentialData;                                          // 0x03B8(0x001C) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              AckermannGeometryAccuracy;                                 // 0x03D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleDriveComponent4W"));
		return ptr;
	}



	void SetDifferentialData(const struct FDcxVehicleDifferentialData4W& NewDifferentialData);
	class UDcxVehicleDriveRawInput4W* GetRawInput4W();
	struct FDcxVehicleDifferentialData4W GetDifferentialData();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleDriveComponentNW
// 0x0000 (FullSize[0x03B8] - InheritedSize[0x03B8])
class UDcxVehicleDriveComponentNW : public UDcxVehicleDriveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleDriveComponentNW"));
		return ptr;
	}



	void SetDrivenWheel(int WheelIndex, bool bIsDriven);
	bool IsDrivenWheel(int WheelIndex);
	class UDcxVehicleDriveRawInputNW* GetRawInputNW();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleDriveComponentTank
// 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
class UDcxVehicleDriveComponentTank : public UDcxVehicleDriveComponent
{
public:
	TEnumAsByte<DcxVehicle_EDcxVehicleDriveControlModelTank> DriveModel;                                                // 0x03B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AGS3[0x7];                                     // 0x03B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleDriveComponentTank"));
		return ptr;
	}



	void SetDriveModel(TEnumAsByte<DcxVehicle_EDcxVehicleDriveControlModelTank> ControlModel);
	class UDcxVehicleDriveRawInputTank* GetRawInputTank();
	TEnumAsByte<DcxVehicle_EDcxVehicleDriveControlModelTank> GetDriveModel();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleWheelsRawInput
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UDcxVehicleWheelsRawInput : public UObject
{
public:
	int                                                ThrottleIndex;                                             // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YWM9[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      RawAnalogControls;                                         // 0x0030(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleWheelsRawInput"));
		return ptr;
	}



	void SetThrottle(float Throttle);
	float GetThrottle();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleDriveRawInput
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UDcxVehicleDriveRawInput : public UDcxVehicleWheelsRawInput
{
public:
	int                                                ClutchIndex;                                               // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGearUp;                                                   // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bGearDown;                                                 // 0x0045(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9E84[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleDriveRawInput"));
		return ptr;
	}



	void SetGearUp(bool bGearUpPressed);
	void SetGearDown(bool bGearDownPressed);
	void SetClutch(float Clutch);
	bool GetGearUp();
	bool GetGearDown();
	float GetClutch();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleDriveRawInput4W
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UDcxVehicleDriveRawInput4W : public UDcxVehicleDriveRawInput
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleDriveRawInput4W"));
		return ptr;
	}



	void SetSteer(float Steer);
	void SetHandbrake(float Handbrake);
	void SetBrake(float Brake);
	float GetSteer();
	float GetHandbrake();
	float GetBrake();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleDriveRawInputNW
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UDcxVehicleDriveRawInputNW : public UDcxVehicleDriveRawInput4W
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleDriveRawInputNW"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleDriveRawInputTank
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UDcxVehicleDriveRawInputTank : public UDcxVehicleDriveRawInput
{
public:
	unsigned char                                      UnknownData_3T63[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleDriveRawInputTank"));
		return ptr;
	}



	void SetRightThrust(float Thrust);
	void SetRightBrake(float Brake);
	void SetLeftThrust(float Thrust);
	void SetLeftBrake(float Brake);
	float GetRightThrust();
	float GetRightBrake();
	float GetLeftThrust();
	float GetLeftBrake();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleNoDrive
// 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
class ADcxVehicleNoDrive : public ADcxVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleNoDrive"));
		return ptr;
	}



	class UDcxVehicleNoDriveComponent* GetVehicleNoDrive();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleNoDriveComponent
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class UDcxVehicleNoDriveComponent : public UDcxVehicleWheelsComponent
{
public:
	bool                                               bUseRawInput;                                              // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FD2S[0x3];                                     // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDriveTorque;                                            // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleNoDriveComponent"));
		return ptr;
	}



	void SetSteerAngle(int WheelIndex, float SteerAngle);
	void SetDriveTorque(int WheelIndex, float DriveTorque);
	void SetBrakeTorque(int WheelIndex, float BrakeTorque);
	float GetSteerAngle(int WheelIndex);
	class UDcxVehicleNoDriveRawInput* GetRawInputND();
	float GetDriveTorque(int WheelIndex);
	float GetBrakeTorque(int WheelIndex);
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleNoDriveRawInput
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UDcxVehicleNoDriveRawInput : public UDcxVehicleWheelsRawInput
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleNoDriveRawInput"));
		return ptr;
	}



	void SetSteer(float NewSteer);
	void SetBrake(float NewBrake);
	float GetSteer();
	float GetBrake();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleNW
// 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
class ADcxVehicleNW : public ADcxVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleNW"));
		return ptr;
	}



	class UDcxVehicleDriveComponentNW* GetVehicleDriveNW();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleTank
// 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
class ADcxVehicleTank : public ADcxVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleTank"));
		return ptr;
	}



	class UDcxVehicleDriveComponentTank* GetVehicleDriveTank();
	void AfterRead();
	void BeforeDelete();

};

// Class DcxVehicle.DcxVehicleTire
// 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
class UDcxVehicleTire : public UDataAsset
{
public:
	unsigned char                                      UnknownData_GEC2[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LateralStiffnessX;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LateralStiffnessY;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LongitudinalStiffnessPerUnitGravity;                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CamberStiffnessPerUnitGravity;                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YPQE[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          FrictionVsSlipGraph;                                       // 0x0048(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FDcxDrivableSurfaceToTireFrictionPair> DrivableSurfaceToTireFrictionPairs;                        // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DcxVehicle.DcxVehicleTire"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
