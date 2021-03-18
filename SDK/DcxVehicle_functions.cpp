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

void FDcxAnalogControlArray::AfterRead()
{
}

void FDcxAnalogControlArray::BeforeDelete()
{
}

void FDcxAnimNodeWheelSimulator::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FDcxAnimNodeWheelSimulator::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FDcxGear::AfterRead()
{
}

void FDcxGear::BeforeDelete()
{
}

void FDcxMath::AfterRead()
{
}

void FDcxMath::BeforeDelete()
{
}

void FDcxVehicleAnimInstanceProxy::AfterRead()
{
	FAnimInstanceProxy::AfterRead();

}

void FDcxVehicleAnimInstanceProxy::BeforeDelete()
{
	FAnimInstanceProxy::BeforeDelete();

}

void FDcxVehicleClutchData::AfterRead()
{
}

void FDcxVehicleClutchData::BeforeDelete()
{
}

void FDcxDrivableSurfaceToTireFrictionPair::AfterRead()
{
	READ_PTR_FULL(SurfaceMaterial, UPhysicalMaterial);
}

void FDcxDrivableSurfaceToTireFrictionPair::BeforeDelete()
{
	DELE_PTR_FULL(SurfaceMaterial);
}

void FDcxVehicleWheelData::AfterRead()
{
}

void FDcxVehicleWheelData::BeforeDelete()
{
}

void FDcxVehicleWheelState::AfterRead()
{
	READ_PTR_FULL(TireContactActor, AActor);
	READ_PTR_FULL(TireSurfaceMaterial, UPhysicalMaterial);
}

void FDcxVehicleWheelState::BeforeDelete()
{
	DELE_PTR_FULL(TireContactActor);
	DELE_PTR_FULL(TireSurfaceMaterial);
}

void FDcxVehicleEngineData::AfterRead()
{
}

void FDcxVehicleEngineData::BeforeDelete()
{
}

void FDcxVehicleGearData::AfterRead()
{
}

void FDcxVehicleGearData::BeforeDelete()
{
}

void FDcxVehicleGearboxData::AfterRead()
{
}

void FDcxVehicleGearboxData::BeforeDelete()
{
}

void FDcxVehicleDifferentialData4W::AfterRead()
{
}

void FDcxVehicleDifferentialData4W::BeforeDelete()
{
}

void FDcxVehicleSuspensionData::AfterRead()
{
}

void FDcxVehicleSuspensionData::BeforeDelete()
{
}

void FDcxVehicleWheelConfiguration::AfterRead()
{
	READ_PTR_FULL(CollisionMesh, UStaticMesh);
	READ_PTR_FULL(Tire, UDcxVehicleTire);
}

void FDcxVehicleWheelConfiguration::BeforeDelete()
{
	DELE_PTR_FULL(CollisionMesh);
	DELE_PTR_FULL(Tire);
}

void FDcxVehicleTireLoadFilterData::AfterRead()
{
}

void FDcxVehicleTireLoadFilterData::BeforeDelete()
{
}

void FDcxVehicleDriveInputRate::AfterRead()
{
}

void FDcxVehicleDriveInputRate::BeforeDelete()
{
}

void FDcxVehicleDriveState::AfterRead()
{
}

void FDcxVehicleDriveState::BeforeDelete()
{
}

// Function DcxVehicle.DcxVehicle.GetVehicleWheels
// ()
// Parameters:
// class UDcxVehicleWheelsComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleWheelsComponent* ADcxVehicle::GetVehicleWheels()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicle.GetVehicleWheels"));

	ADcxVehicle_GetVehicleWheels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.GetMesh
// ()
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* ADcxVehicle::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicle.GetMesh"));

	ADcxVehicle_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
// ()
// Parameters:
// struct FVector                 Up                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Forward                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADcxVehicle::DcxVehicleSetBasisVectors(const struct FVector& Up, const struct FVector& Forward)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors"));

	ADcxVehicle_DcxVehicleSetBasisVectors_Params params;
	params.Up = Up;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ADcxVehicle::AfterRead()
{
	APawn::AfterRead();

	READ_PTR_FULL(Mesh, USkeletalMeshComponent);
	READ_PTR_FULL(VehicleWheels, UDcxVehicleWheelsComponent);
}

void ADcxVehicle::BeforeDelete()
{
	APawn::BeforeDelete();

	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(VehicleWheels);
}

// Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W
// ()
// Parameters:
// class UDcxVehicleDriveComponent4W* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleDriveComponent4W* ADcxVehicle4W::GetVehicleDrive4W()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W"));

	ADcxVehicle4W_GetVehicleDrive4W_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ADcxVehicle4W::AfterRead()
{
	ADcxVehicle::AfterRead();

}

void ADcxVehicle4W::BeforeDelete()
{
	ADcxVehicle::BeforeDelete();

}

void UDcxVehicleAnimInstance::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(VehicleWheels, UDcxVehicleWheelsComponent);
}

void UDcxVehicleAnimInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(VehicleWheels);
}

// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::SetWheelOffset(int WheelIndex, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset"));

	UDcxVehicleWheelsComponent_SetWheelOffset_Params params;
	params.WheelIndex = WheelIndex;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDcxVehicleWheelData    NewWheelData                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::SetWheelData(int WheelIndex, const struct FDcxVehicleWheelData& NewWheelData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData"));

	UDcxVehicleWheelsComponent_SetWheelData_Params params;
	params.WheelIndex = WheelIndex;
	params.NewWheelData = NewWheelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetTire
// ()
// Parameters:
// int                            WheelId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDcxVehicleTire*         NewTire                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::SetTire(int WheelId, class UDcxVehicleTire* NewTire)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.SetTire"));

	UDcxVehicleWheelsComponent_SetTire_Params params;
	params.WheelId = WheelId;
	params.NewTire = NewTire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDcxVehicleSuspensionData NewSuspensionData              (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::SetSuspensionData(int WheelIndex, const struct FDcxVehicleSuspensionData& NewSuspensionData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData"));

	UDcxVehicleWheelsComponent_SetSuspensionData_Params params;
	params.WheelIndex = WheelIndex;
	params.NewSuspensionData = NewSuspensionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
// ()
// Parameters:
// struct FNavAvoidanceMask       Mask                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::SetGroupsToIgnore(const struct FNavAvoidanceMask& Mask)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore"));

	UDcxVehicleWheelsComponent_SetGroupsToIgnore_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
// ()
// Parameters:
// struct FNavAvoidanceMask       Mask                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::SetGroupsToAvoid(const struct FNavAvoidanceMask& Mask)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid"));

	UDcxVehicleWheelsComponent_SetGroupsToAvoid_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
// ()
// Parameters:
// float                          Mass                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::SetChassisMass(float Mass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass"));

	UDcxVehicleWheelsComponent_SetChassisMass_Params params;
	params.Mass = Mass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
// ()
// Parameters:
// struct FNavAvoidanceMask       Mask                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::SetAvoidanceGroup(const struct FNavAvoidanceMask& Mask)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup"));

	UDcxVehicleWheelsComponent_SetAvoidanceGroup_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
// ()
// Parameters:
// struct FDcxAnalogControlArray  AnalogControls                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDcxGear                CurrentGear                    (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDcxGear                TargetGear                     (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::ServerUpdateState(const struct FDcxAnalogControlArray& AnalogControls, const struct FDcxGear& CurrentGear, const struct FDcxGear& TargetGear)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState"));

	UDcxVehicleWheelsComponent_ServerUpdateState_Params params;
	params.AnalogControls = AnalogControls;
	params.CurrentGear = CurrentGear;
	params.TargetGear = TargetGear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDcxVehicleWheelsComponent::IsWheelDisabled(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled"));

	UDcxVehicleWheelsComponent_IsWheelDisabled_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDcxVehicleWheelState   WheelState                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDcxVehicleWheelsComponent::GetWheelState(int WheelIndex, struct FDcxVehicleWheelState* WheelState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState"));

	UDcxVehicleWheelsComponent_GetWheelState_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WheelState != nullptr)
		*WheelState = params.WheelState;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleWheelsComponent::GetWheelRotationSpeed(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed"));

	UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleWheelsComponent::GetWheelRotationAngle(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle"));

	UDcxVehicleWheelsComponent_GetWheelRotationAngle_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UDcxVehicleWheelsComponent::GetWheelOffset(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset"));

	UDcxVehicleWheelsComponent_GetWheelOffset_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDcxVehicleWheelData    ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FDcxVehicleWheelData UDcxVehicleWheelsComponent::GetWheelData(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData"));

	UDcxVehicleWheelsComponent_GetWheelData_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetTire
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDcxVehicleTire*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleTire* UDcxVehicleWheelsComponent::GetTire(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetTire"));

	UDcxVehicleWheelsComponent_GetTire_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDcxVehicleSuspensionData ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FDcxVehicleSuspensionData UDcxVehicleWheelsComponent::GetSuspensionData(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData"));

	UDcxVehicleWheelsComponent_GetSuspensionData_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
// ()
// Parameters:
// class UDcxVehicleWheelsRawInput* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleWheelsRawInput* UDcxVehicleWheelsComponent::GetRawInput()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput"));

	UDcxVehicleWheelsComponent_GetRawInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UDcxVehicleWheelsComponent::GetNumWheels()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels"));

	UDcxVehicleWheelsComponent_GetNumWheels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleWheelsComponent::GetForwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed"));

	UDcxVehicleWheelsComponent_GetForwardSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleWheelsComponent::GetChassisMass()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass"));

	UDcxVehicleWheelsComponent_GetChassisMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UDcxVehicleWheelsComponent::GetBoneName(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName"));

	UDcxVehicleWheelsComponent_GetBoneName_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
// ()
// Parameters:
// unsigned char                  Control                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleWheelsComponent::GetAnalogControl(unsigned char Control)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl"));

	UDcxVehicleWheelsComponent_GetAnalogControl_Params params;
	params.Control = Control;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::EnableWheel(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel"));

	UDcxVehicleWheelsComponent_EnableWheel_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
// ()
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::EnableAvoidance(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance"));

	UDcxVehicleWheelsComponent_EnableAvoidance_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsComponent::DisableWheel(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel"));

	UDcxVehicleWheelsComponent_DisableWheel_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDcxVehicleWheelsComponent::AfterRead()
{
	UPawnMovementComponent::AfterRead();

	READ_PTR_FULL(RawInput, UDcxVehicleWheelsRawInput);
}

void UDcxVehicleWheelsComponent::BeforeDelete()
{
	UPawnMovementComponent::BeforeDelete();

	DELE_PTR_FULL(RawInput);
}

// Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
// ()
// Parameters:
// int                            NewGear                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveComponent::SetTargetGear(int NewGear, bool bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear"));

	UDcxVehicleDriveComponent_SetTargetGear_Params params;
	params.NewGear = NewGear;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
// ()
// Parameters:
// TEnumAsByte<DcxVehicle_EDcxVehicleGearbox> NewGearboxType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveComponent::SetGearboxType(TEnumAsByte<DcxVehicle_EDcxVehicleGearbox> NewGearboxType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType"));

	UDcxVehicleDriveComponent_SetGearboxType_Params params;
	params.NewGearboxType = NewGearboxType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
// ()
// Parameters:
// struct FDcxVehicleGearboxData  NewGearboxData                 (Parm, NativeAccessSpecifierPublic)
void UDcxVehicleDriveComponent::SetGearboxData(const struct FDcxVehicleGearboxData& NewGearboxData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData"));

	UDcxVehicleDriveComponent_SetGearboxData_Params params;
	params.NewGearboxData = NewGearboxData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
// ()
// Parameters:
// float                          RPM                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveComponent::SetEngineRotationSpeed(float RPM)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed"));

	UDcxVehicleDriveComponent_SetEngineRotationSpeed_Params params;
	params.RPM = RPM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
// ()
// Parameters:
// struct FDcxVehicleEngineData   NewEngineData                  (Parm, NativeAccessSpecifierPublic)
void UDcxVehicleDriveComponent::SetEngineData(const struct FDcxVehicleEngineData& NewEngineData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData"));

	UDcxVehicleDriveComponent_SetEngineData_Params params;
	params.NewEngineData = NewEngineData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
// ()
// Parameters:
// struct FDcxVehicleClutchData   NewClutchData                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDcxVehicleDriveComponent::SetClutchData(const struct FDcxVehicleClutchData& NewClutchData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData"));

	UDcxVehicleDriveComponent_SetClutchData_Params params;
	params.NewClutchData = NewClutchData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UDcxVehicleDriveComponent::GetTargetGear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear"));

	UDcxVehicleDriveComponent_GetTargetGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
// ()
// Parameters:
// TEnumAsByte<DcxVehicle_EDcxVehicleGearbox> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<DcxVehicle_EDcxVehicleGearbox> UDcxVehicleDriveComponent::GetGearboxType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType"));

	UDcxVehicleDriveComponent_GetGearboxType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
// ()
// Parameters:
// struct FDcxVehicleGearboxData  ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FDcxVehicleGearboxData UDcxVehicleDriveComponent::GetGearboxData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData"));

	UDcxVehicleDriveComponent_GetGearboxData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleDriveComponent::GetEngineRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed"));

	UDcxVehicleDriveComponent_GetEngineRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
// ()
// Parameters:
// struct FDcxVehicleEngineData   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FDcxVehicleEngineData UDcxVehicleDriveComponent::GetEngineData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData"));

	UDcxVehicleDriveComponent_GetEngineData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UDcxVehicleDriveComponent::GetCurrentGear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear"));

	UDcxVehicleDriveComponent_GetCurrentGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
// ()
// Parameters:
// struct FDcxVehicleClutchData   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FDcxVehicleClutchData UDcxVehicleDriveComponent::GetClutchData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData"));

	UDcxVehicleDriveComponent_GetClutchData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDcxVehicleDriveComponent::AfterRead()
{
	UDcxVehicleWheelsComponent::AfterRead();

}

void UDcxVehicleDriveComponent::BeforeDelete()
{
	UDcxVehicleWheelsComponent::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
// ()
// Parameters:
// struct FDcxVehicleDifferentialData4W NewDifferentialData            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDcxVehicleDriveComponent4W::SetDifferentialData(const struct FDcxVehicleDifferentialData4W& NewDifferentialData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData"));

	UDcxVehicleDriveComponent4W_SetDifferentialData_Params params;
	params.NewDifferentialData = NewDifferentialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
// ()
// Parameters:
// class UDcxVehicleDriveRawInput4W* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleDriveRawInput4W* UDcxVehicleDriveComponent4W::GetRawInput4W()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W"));

	UDcxVehicleDriveComponent4W_GetRawInput4W_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
// ()
// Parameters:
// struct FDcxVehicleDifferentialData4W ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FDcxVehicleDifferentialData4W UDcxVehicleDriveComponent4W::GetDifferentialData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData"));

	UDcxVehicleDriveComponent4W_GetDifferentialData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDcxVehicleDriveComponent4W::AfterRead()
{
	UDcxVehicleDriveComponent::AfterRead();

}

void UDcxVehicleDriveComponent4W::BeforeDelete()
{
	UDcxVehicleDriveComponent::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsDriven                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveComponentNW::SetDrivenWheel(int WheelIndex, bool bIsDriven)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel"));

	UDcxVehicleDriveComponentNW_SetDrivenWheel_Params params;
	params.WheelIndex = WheelIndex;
	params.bIsDriven = bIsDriven;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDcxVehicleDriveComponentNW::IsDrivenWheel(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel"));

	UDcxVehicleDriveComponentNW_IsDrivenWheel_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW
// ()
// Parameters:
// class UDcxVehicleDriveRawInputNW* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleDriveRawInputNW* UDcxVehicleDriveComponentNW::GetRawInputNW()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW"));

	UDcxVehicleDriveComponentNW_GetRawInputNW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDcxVehicleDriveComponentNW::AfterRead()
{
	UDcxVehicleDriveComponent::AfterRead();

}

void UDcxVehicleDriveComponentNW::BeforeDelete()
{
	UDcxVehicleDriveComponent::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
// ()
// Parameters:
// TEnumAsByte<DcxVehicle_EDcxVehicleDriveControlModelTank> ControlModel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveComponentTank::SetDriveModel(TEnumAsByte<DcxVehicle_EDcxVehicleDriveControlModelTank> ControlModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel"));

	UDcxVehicleDriveComponentTank_SetDriveModel_Params params;
	params.ControlModel = ControlModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
// ()
// Parameters:
// class UDcxVehicleDriveRawInputTank* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleDriveRawInputTank* UDcxVehicleDriveComponentTank::GetRawInputTank()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank"));

	UDcxVehicleDriveComponentTank_GetRawInputTank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
// ()
// Parameters:
// TEnumAsByte<DcxVehicle_EDcxVehicleDriveControlModelTank> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<DcxVehicle_EDcxVehicleDriveControlModelTank> UDcxVehicleDriveComponentTank::GetDriveModel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel"));

	UDcxVehicleDriveComponentTank_GetDriveModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDcxVehicleDriveComponentTank::AfterRead()
{
	UDcxVehicleDriveComponent::AfterRead();

}

void UDcxVehicleDriveComponentTank::BeforeDelete()
{
	UDcxVehicleDriveComponent::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
// ()
// Parameters:
// float                          Throttle                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleWheelsRawInput::SetThrottle(float Throttle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle"));

	UDcxVehicleWheelsRawInput_SetThrottle_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleWheelsRawInput::GetThrottle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle"));

	UDcxVehicleWheelsRawInput_GetThrottle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDcxVehicleWheelsRawInput::AfterRead()
{
	UObject::AfterRead();

}

void UDcxVehicleWheelsRawInput::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
// ()
// Parameters:
// bool                           bGearUpPressed                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveRawInput::SetGearUp(bool bGearUpPressed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp"));

	UDcxVehicleDriveRawInput_SetGearUp_Params params;
	params.bGearUpPressed = bGearUpPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
// ()
// Parameters:
// bool                           bGearDownPressed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveRawInput::SetGearDown(bool bGearDownPressed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown"));

	UDcxVehicleDriveRawInput_SetGearDown_Params params;
	params.bGearDownPressed = bGearDownPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
// ()
// Parameters:
// float                          Clutch                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveRawInput::SetClutch(float Clutch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch"));

	UDcxVehicleDriveRawInput_SetClutch_Params params;
	params.Clutch = Clutch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDcxVehicleDriveRawInput::GetGearUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp"));

	UDcxVehicleDriveRawInput_GetGearUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDcxVehicleDriveRawInput::GetGearDown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown"));

	UDcxVehicleDriveRawInput_GetGearDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleDriveRawInput::GetClutch()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch"));

	UDcxVehicleDriveRawInput_GetClutch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDcxVehicleDriveRawInput::AfterRead()
{
	UDcxVehicleWheelsRawInput::AfterRead();

}

void UDcxVehicleDriveRawInput::BeforeDelete()
{
	UDcxVehicleWheelsRawInput::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer
// ()
// Parameters:
// float                          Steer                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveRawInput4W::SetSteer(float Steer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer"));

	UDcxVehicleDriveRawInput4W_SetSteer_Params params;
	params.Steer = Steer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake
// ()
// Parameters:
// float                          Handbrake                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveRawInput4W::SetHandbrake(float Handbrake)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake"));

	UDcxVehicleDriveRawInput4W_SetHandbrake_Params params;
	params.Handbrake = Handbrake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake
// ()
// Parameters:
// float                          Brake                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveRawInput4W::SetBrake(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake"));

	UDcxVehicleDriveRawInput4W_SetBrake_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleDriveRawInput4W::GetSteer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer"));

	UDcxVehicleDriveRawInput4W_GetSteer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleDriveRawInput4W::GetHandbrake()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake"));

	UDcxVehicleDriveRawInput4W_GetHandbrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleDriveRawInput4W::GetBrake()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake"));

	UDcxVehicleDriveRawInput4W_GetBrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDcxVehicleDriveRawInput4W::AfterRead()
{
	UDcxVehicleDriveRawInput::AfterRead();

}

void UDcxVehicleDriveRawInput4W::BeforeDelete()
{
	UDcxVehicleDriveRawInput::BeforeDelete();

}

void UDcxVehicleDriveRawInputNW::AfterRead()
{
	UDcxVehicleDriveRawInput4W::AfterRead();

}

void UDcxVehicleDriveRawInputNW::BeforeDelete()
{
	UDcxVehicleDriveRawInput4W::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust
// ()
// Parameters:
// float                          Thrust                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveRawInputTank::SetRightThrust(float Thrust)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust"));

	UDcxVehicleDriveRawInputTank_SetRightThrust_Params params;
	params.Thrust = Thrust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake
// ()
// Parameters:
// float                          Brake                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveRawInputTank::SetRightBrake(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake"));

	UDcxVehicleDriveRawInputTank_SetRightBrake_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust
// ()
// Parameters:
// float                          Thrust                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveRawInputTank::SetLeftThrust(float Thrust)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust"));

	UDcxVehicleDriveRawInputTank_SetLeftThrust_Params params;
	params.Thrust = Thrust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake
// ()
// Parameters:
// float                          Brake                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleDriveRawInputTank::SetLeftBrake(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake"));

	UDcxVehicleDriveRawInputTank_SetLeftBrake_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleDriveRawInputTank::GetRightThrust()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust"));

	UDcxVehicleDriveRawInputTank_GetRightThrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleDriveRawInputTank::GetRightBrake()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake"));

	UDcxVehicleDriveRawInputTank_GetRightBrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleDriveRawInputTank::GetLeftThrust()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust"));

	UDcxVehicleDriveRawInputTank_GetLeftThrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleDriveRawInputTank::GetLeftBrake()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake"));

	UDcxVehicleDriveRawInputTank_GetLeftBrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDcxVehicleDriveRawInputTank::AfterRead()
{
	UDcxVehicleDriveRawInput::AfterRead();

}

void UDcxVehicleDriveRawInputTank::BeforeDelete()
{
	UDcxVehicleDriveRawInput::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive
// ()
// Parameters:
// class UDcxVehicleNoDriveComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleNoDriveComponent* ADcxVehicleNoDrive::GetVehicleNoDrive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive"));

	ADcxVehicleNoDrive_GetVehicleNoDrive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ADcxVehicleNoDrive::AfterRead()
{
	ADcxVehicle::AfterRead();

}

void ADcxVehicleNoDrive::BeforeDelete()
{
	ADcxVehicle::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SteerAngle                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleNoDriveComponent::SetSteerAngle(int WheelIndex, float SteerAngle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle"));

	UDcxVehicleNoDriveComponent_SetSteerAngle_Params params;
	params.WheelIndex = WheelIndex;
	params.SteerAngle = SteerAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleNoDriveComponent::SetDriveTorque(int WheelIndex, float DriveTorque)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque"));

	UDcxVehicleNoDriveComponent_SetDriveTorque_Params params;
	params.WheelIndex = WheelIndex;
	params.DriveTorque = DriveTorque;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleNoDriveComponent::SetBrakeTorque(int WheelIndex, float BrakeTorque)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque"));

	UDcxVehicleNoDriveComponent_SetBrakeTorque_Params params;
	params.WheelIndex = WheelIndex;
	params.BrakeTorque = BrakeTorque;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleNoDriveComponent::GetSteerAngle(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle"));

	UDcxVehicleNoDriveComponent_GetSteerAngle_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
// ()
// Parameters:
// class UDcxVehicleNoDriveRawInput* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleNoDriveRawInput* UDcxVehicleNoDriveComponent::GetRawInputND()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND"));

	UDcxVehicleNoDriveComponent_GetRawInputND_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleNoDriveComponent::GetDriveTorque(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque"));

	UDcxVehicleNoDriveComponent_GetDriveTorque_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
// ()
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleNoDriveComponent::GetBrakeTorque(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque"));

	UDcxVehicleNoDriveComponent_GetBrakeTorque_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDcxVehicleNoDriveComponent::AfterRead()
{
	UDcxVehicleWheelsComponent::AfterRead();

}

void UDcxVehicleNoDriveComponent::BeforeDelete()
{
	UDcxVehicleWheelsComponent::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer
// ()
// Parameters:
// float                          NewSteer                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleNoDriveRawInput::SetSteer(float NewSteer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer"));

	UDcxVehicleNoDriveRawInput_SetSteer_Params params;
	params.NewSteer = NewSteer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake
// ()
// Parameters:
// float                          NewBrake                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDcxVehicleNoDriveRawInput::SetBrake(float NewBrake)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake"));

	UDcxVehicleNoDriveRawInput_SetBrake_Params params;
	params.NewBrake = NewBrake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleNoDriveRawInput::GetSteer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer"));

	UDcxVehicleNoDriveRawInput_GetSteer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDcxVehicleNoDriveRawInput::GetBrake()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake"));

	UDcxVehicleNoDriveRawInput_GetBrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDcxVehicleNoDriveRawInput::AfterRead()
{
	UDcxVehicleWheelsRawInput::AfterRead();

}

void UDcxVehicleNoDriveRawInput::BeforeDelete()
{
	UDcxVehicleWheelsRawInput::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW
// ()
// Parameters:
// class UDcxVehicleDriveComponentNW* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleDriveComponentNW* ADcxVehicleNW::GetVehicleDriveNW()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW"));

	ADcxVehicleNW_GetVehicleDriveNW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ADcxVehicleNW::AfterRead()
{
	ADcxVehicle::AfterRead();

}

void ADcxVehicleNW::BeforeDelete()
{
	ADcxVehicle::BeforeDelete();

}

// Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank
// ()
// Parameters:
// class UDcxVehicleDriveComponentTank* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDcxVehicleDriveComponentTank* ADcxVehicleTank::GetVehicleDriveTank()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank"));

	ADcxVehicleTank_GetVehicleDriveTank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ADcxVehicleTank::AfterRead()
{
	ADcxVehicle::AfterRead();

}

void ADcxVehicleTank::BeforeDelete()
{
	ADcxVehicle::BeforeDelete();

}

void UDcxVehicleTire::AfterRead()
{
	UDataAsset::AfterRead();

}

void UDcxVehicleTire::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
