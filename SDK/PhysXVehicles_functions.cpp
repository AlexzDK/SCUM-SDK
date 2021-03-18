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

void FWheelSetup::AfterRead()
{
	READ_PTR_FULL(WheelClass, UClass);
}

void FWheelSetup::BeforeDelete()
{
	DELE_PTR_FULL(WheelClass);
}

void FVehicleGearData::AfterRead()
{
}

void FVehicleGearData::BeforeDelete()
{
}

void FVehicleTransmissionData::AfterRead()
{
}

void FVehicleTransmissionData::BeforeDelete()
{
}

void FVehicleEngineData::AfterRead()
{
}

void FVehicleEngineData::BeforeDelete()
{
}

void FVehicleDifferential4WData::AfterRead()
{
}

void FVehicleDifferential4WData::BeforeDelete()
{
}

void FAnimNode_WheelHandler::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_WheelHandler::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FTireConfigMaterialFriction::AfterRead()
{
	READ_PTR_FULL(PhysicalMaterial, UPhysicalMaterial);
}

void FTireConfigMaterialFriction::BeforeDelete()
{
	DELE_PTR_FULL(PhysicalMaterial);
}

void FVehicleAnimInstanceProxy::AfterRead()
{
	FAnimInstanceProxy::AfterRead();

}

void FVehicleAnimInstanceProxy::BeforeDelete()
{
	FAnimInstanceProxy::BeforeDelete();

}

void FReplicatedVehicleState::AfterRead()
{
}

void FReplicatedVehicleState::BeforeDelete()
{
}

void FVehicleInputRate::AfterRead()
{
}

void FVehicleInputRate::BeforeDelete()
{
}

// Function PhysXVehicles.VehicleWheel.IsInAir
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVehicleWheel::IsInAir()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.IsInAir"));

	UVehicleWheel_IsInAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVehicleWheel::GetSuspensionOffset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetSuspensionOffset"));

	UVehicleWheel_GetSuspensionOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVehicleWheel::GetSteerAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetSteerAngle"));

	UVehicleWheel_GetSteerAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVehicleWheel::GetRotationAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetRotationAngle"));

	UVehicleWheel_GetRotationAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVehicleWheel::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(CollisionMesh, UStaticMesh);
	READ_PTR_FULL(TireType, UTireType);
	READ_PTR_FULL(TireConfig, UTireConfig);
	READ_PTR_FULL(VehicleSim, UWheeledVehicleMovementComponent);
}

void UVehicleWheel::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(CollisionMesh);
	DELE_PTR_FULL(TireType);
	DELE_PTR_FULL(TireConfig);
	DELE_PTR_FULL(VehicleSim);
}

void AWheeledVehicle::AfterRead()
{
	APawn::AfterRead();

	READ_PTR_FULL(Mesh, USkeletalMeshComponent);
	READ_PTR_FULL(VehicleMovement, UWheeledVehicleMovementComponent);
}

void AWheeledVehicle::BeforeDelete()
{
	APawn::BeforeDelete();

	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(VehicleMovement);
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// ()
// Parameters:
// bool                           bUseAuto                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears"));

	UWheeledVehicleMovementComponent_SetUseAutoGears_Params params;
	params.bUseAuto = bUseAuto;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// ()
// Parameters:
// float                          Throttle                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput"));

	UWheeledVehicleMovementComponent_SetThrottleInput_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// ()
// Parameters:
// int                            GearNum                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetTargetGear(int GearNum, bool bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear"));

	UWheeledVehicleMovementComponent_SetTargetGear_Params params;
	params.GearNum = GearNum;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// ()
// Parameters:
// float                          Steering                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput"));

	UWheeledVehicleMovementComponent_SetSteeringInput_Params params;
	params.Steering = Steering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// ()
// Parameters:
// bool                           bNewHandbrake                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput"));

	UWheeledVehicleMovementComponent_SetHandbrakeInput_Params params;
	params.bNewHandbrake = bNewHandbrake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// ()
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask"));

	UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// ()
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int GroupFlags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore"));

	UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// ()
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask"));

	UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// ()
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int GroupFlags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid"));

	UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// ()
// Parameters:
// bool                           bNewGearUp                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp"));

	UWheeledVehicleMovementComponent_SetGearUp_Params params;
	params.bNewGearUp = bNewGearUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// ()
// Parameters:
// bool                           bNewGearDown                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown"));

	UWheeledVehicleMovementComponent_SetGearDown_Params params;
	params.bNewGearDown = bNewGearDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// ()
// Parameters:
// float                          Brake                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput"));

	UWheeledVehicleMovementComponent_SetBrakeInput_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// ()
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask"));

	UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// ()
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int GroupFlags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup"));

	UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled"));

	UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// ()
// Parameters:
// float                          InSteeringInput                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InThrottleInput                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InBrakeInput                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InHandbrakeInput               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CurrentGear                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState"));

	UWheeledVehicleMovementComponent_ServerUpdateState_Params params;
	params.InSteeringInput = InSteeringInput;
	params.InThrottleInput = InThrottleInput;
	params.InBrakeInput = InBrakeInput;
	params.InHandbrakeInput = InHandbrakeInput;
	params.CurrentGear = CurrentGear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWheeledVehicleMovementComponent::GetUseAutoGears()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears"));

	UWheeledVehicleMovementComponent_GetUseAutoGears_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWheeledVehicleMovementComponent::GetTargetGear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear"));

	UWheeledVehicleMovementComponent_GetTargetGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWheeledVehicleMovementComponent::GetForwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed"));

	UWheeledVehicleMovementComponent_GetForwardSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed"));

	UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed"));

	UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWheeledVehicleMovementComponent::GetCurrentGear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear"));

	UWheeledVehicleMovementComponent_GetCurrentGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWheeledVehicleMovementComponent::AfterRead()
{
	UPawnMovementComponent::AfterRead();

	READ_PTR_FULL(OverrideController, AController);
}

void UWheeledVehicleMovementComponent::BeforeDelete()
{
	UPawnMovementComponent::BeforeDelete();

	DELE_PTR_FULL(OverrideController);
}

void UWheeledVehicleMovementComponent4W::AfterRead()
{
	UWheeledVehicleMovementComponent::AfterRead();

}

void UWheeledVehicleMovementComponent4W::BeforeDelete()
{
	UWheeledVehicleMovementComponent::BeforeDelete();

}

// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// ()
// Parameters:
// float                          SteerAngle                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle"));

	USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params params;
	params.SteerAngle = SteerAngle;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
// ()
// Parameters:
// float                          DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque"));

	USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params params;
	params.DriveTorque = DriveTorque;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
// ()
// Parameters:
// float                          BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque"));

	USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params params;
	params.BrakeTorque = BrakeTorque;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USimpleWheeledVehicleMovementComponent::AfterRead()
{
	UWheeledVehicleMovementComponent::AfterRead();

}

void USimpleWheeledVehicleMovementComponent::BeforeDelete()
{
	UWheeledVehicleMovementComponent::BeforeDelete();

}

void UTireConfig::AfterRead()
{
	UDataAsset::AfterRead();

}

void UTireConfig::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// ()
// Parameters:
// class AWheeledVehicle*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleAnimInstance.GetVehicle"));

	UVehicleAnimInstance_GetVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVehicleAnimInstance::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(WheeledVehicleMovementComponent, UWheeledVehicleMovementComponent);
}

void UVehicleAnimInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(WheeledVehicleMovementComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
