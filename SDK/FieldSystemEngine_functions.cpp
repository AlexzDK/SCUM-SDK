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

void UFieldNodeBase::AfterRead()
{
	UActorComponent::AfterRead();

}

void UFieldNodeBase::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UFieldNodeInt::AfterRead()
{
	UFieldNodeBase::AfterRead();

}

void UFieldNodeInt::BeforeDelete()
{
	UFieldNodeBase::BeforeDelete();

}

void UFieldNodeVector::AfterRead()
{
	UFieldNodeBase::AfterRead();

}

void UFieldNodeVector::BeforeDelete()
{
	UFieldNodeBase::BeforeDelete();

}

// Function FieldSystemEngine.UniformInteger.SetUniformInteger
// ()
// Parameters:
// int                            Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformInteger*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformInteger* UUniformInteger::SetUniformInteger(int Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.UniformInteger.SetUniformInteger"));

	UUniformInteger_SetUniformInteger_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUniformInteger::AfterRead()
{
	UFieldNodeInt::AfterRead();

}

void UUniformInteger::BeforeDelete()
{
	UFieldNodeInt::BeforeDelete();

}

// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InteriorValue                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ExteriorValue                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Chaos_ESetMaskConditionType> SetMaskConditionIn             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URadialIntMask*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URadialIntMask* URadialIntMask::SetRadialIntMask(float Radius, const struct FVector& position, int InteriorValue, int ExteriorValue, TEnumAsByte<Chaos_ESetMaskConditionType> SetMaskConditionIn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask"));

	URadialIntMask_SetRadialIntMask_Params params;
	params.Radius = Radius;
	params.position = position;
	params.InteriorValue = InteriorValue;
	params.ExteriorValue = ExteriorValue;
	params.SetMaskConditionIn = SetMaskConditionIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URadialIntMask::AfterRead()
{
	UFieldNodeInt::AfterRead();

}

void URadialIntMask::BeforeDelete()
{
	UFieldNodeInt::BeforeDelete();

}

void UFieldNodeFloat::AfterRead()
{
	UFieldNodeBase::AfterRead();

}

void UFieldNodeFloat::BeforeDelete()
{
	UFieldNodeBase::BeforeDelete();

}

// Function FieldSystemEngine.UniformScalar.SetUniformScalar
// ()
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformScalar*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.UniformScalar.SetUniformScalar"));

	UUniformScalar_SetUniformScalar_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUniformScalar::AfterRead()
{
	UFieldNodeFloat::AfterRead();

}

void UUniformScalar::BeforeDelete()
{
	UFieldNodeFloat::BeforeDelete();

}

// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
// ()
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Default                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Chaos_EFieldFalloffType> Falloff                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URadialFalloff*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& position, TEnumAsByte<Chaos_EFieldFalloffType> Falloff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff"));

	URadialFalloff_SetRadialFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Radius = Radius;
	params.position = position;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URadialFalloff::AfterRead()
{
	UFieldNodeFloat::AfterRead();

}

void URadialFalloff::BeforeDelete()
{
	UFieldNodeFloat::BeforeDelete();

}

// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
// ()
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Default                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Chaos_EFieldFalloffType> Falloff                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlaneFalloff*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& position, const struct FVector& Normal, TEnumAsByte<Chaos_EFieldFalloffType> Falloff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff"));

	UPlaneFalloff_SetPlaneFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Distance = Distance;
	params.position = position;
	params.Normal = Normal;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPlaneFalloff::AfterRead()
{
	UFieldNodeFloat::AfterRead();

}

void UPlaneFalloff::BeforeDelete()
{
	UFieldNodeFloat::BeforeDelete();

}

// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
// ()
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Default                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<Chaos_EFieldFalloffType> Falloff                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBoxFalloff*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<Chaos_EFieldFalloffType> Falloff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff"));

	UBoxFalloff_SetBoxFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Transform = Transform;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBoxFalloff::AfterRead()
{
	UFieldNodeFloat::AfterRead();

}

void UBoxFalloff::BeforeDelete()
{
	UFieldNodeFloat::BeforeDelete();

}

// Function FieldSystemEngine.NoiseField.SetNoiseField
// ()
// Parameters:
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UNoiseField*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNoiseField* UNoiseField::SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.NoiseField.SetNoiseField"));

	UNoiseField_SetNoiseField_Params params;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UNoiseField::AfterRead()
{
	UFieldNodeFloat::AfterRead();

}

void UNoiseField::BeforeDelete()
{
	UFieldNodeFloat::BeforeDelete();

}

// Function FieldSystemEngine.UniformVector.SetUniformVector
// ()
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformVector*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformVector* UUniformVector::SetUniformVector(float Magnitude, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.UniformVector.SetUniformVector"));

	UUniformVector_SetUniformVector_Params params;
	params.Magnitude = Magnitude;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UUniformVector::AfterRead()
{
	UFieldNodeVector::AfterRead();

}

void UUniformVector::BeforeDelete()
{
	UFieldNodeVector::BeforeDelete();

}

// Function FieldSystemEngine.RadialVector.SetRadialVector
// ()
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URadialVector*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URadialVector* URadialVector::SetRadialVector(float Magnitude, const struct FVector& position)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.RadialVector.SetRadialVector"));

	URadialVector_SetRadialVector_Params params;
	params.Magnitude = Magnitude;
	params.position = position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URadialVector::AfterRead()
{
	UFieldNodeVector::AfterRead();

}

void URadialVector::BeforeDelete()
{
	UFieldNodeVector::BeforeDelete();

}

// Function FieldSystemEngine.RandomVector.SetRandomVector
// ()
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URandomVector*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URandomVector* URandomVector::SetRandomVector(float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.RandomVector.SetRandomVector"));

	URandomVector_SetRandomVector_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URandomVector::AfterRead()
{
	UFieldNodeVector::AfterRead();

}

void URandomVector::BeforeDelete()
{
	UFieldNodeVector::BeforeDelete();

}

void AFieldSystemActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(FieldSystemComponent, UFieldSystemComponent);
}

void AFieldSystemActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(FieldSystemComponent);
}

void UFieldSystem::AfterRead()
{
	UObject::AfterRead();

}

void UFieldSystem::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
// ()
void UFieldSystemComponent::ResetFieldSystem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem"));

	UFieldSystemComponent_ResetFieldSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& position, const struct FVector& Direction, float Radius, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce"));

	UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params params;
	params.Enabled = Enabled;
	params.position = position;
	params.Direction = Direction;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Iterations                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyStrainField(bool Enabled, const struct FVector& position, float Radius, float Magnitude, int Iterations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField"));

	UFieldSystemComponent_ApplyStrainField_Params params;
	params.Enabled = Enabled;
	params.position = position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, const struct FVector& position, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField"));

	UFieldSystemComponent_ApplyStayDynamicField_Params params;
	params.Enabled = Enabled;
	params.position = position;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& position, float Radius, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce"));

	UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params params;
	params.Enabled = Enabled;
	params.position = position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyRadialForce(bool Enabled, const struct FVector& position, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce"));

	UFieldSystemComponent_ApplyRadialForce_Params params;
	params.Enabled = Enabled;
	params.position = position;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Chaos_EFieldPhysicsType> Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaData*    MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, TEnumAsByte<Chaos_EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField"));

	UFieldSystemComponent_ApplyPhysicsField_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce"));

	UFieldSystemComponent_ApplyLinearForce_Params params;
	params.Enabled = Enabled;
	params.Direction = Direction;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Chaos_EFieldPhysicsType> Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaData*    MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::AddFieldCommand(bool Enabled, TEnumAsByte<Chaos_EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand"));

	UFieldSystemComponent_AddFieldCommand_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UFieldSystemComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

	READ_PTR_FULL(FieldSystem, UFieldSystem);
}

void UFieldSystemComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

	DELE_PTR_FULL(FieldSystem);
}

void UFieldSystemMetaData::AfterRead()
{
	UActorComponent::AfterRead();

}

void UFieldSystemMetaData::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
// ()
// Parameters:
// int                            Iterations                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaDataIteration* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int Iterations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration"));

	UFieldSystemMetaDataIteration_SetMetaDataIteration_Params params;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFieldSystemMetaDataIteration::AfterRead()
{
	UFieldSystemMetaData::AfterRead();

}

void UFieldSystemMetaDataIteration::BeforeDelete()
{
	UFieldSystemMetaData::BeforeDelete();

}

// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
// ()
// Parameters:
// TEnumAsByte<Chaos_EFieldResolutionType> ResolutionType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaDataProcessingResolution* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(TEnumAsByte<Chaos_EFieldResolutionType> ResolutionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType"));

	UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params params;
	params.ResolutionType = ResolutionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFieldSystemMetaDataProcessingResolution::AfterRead()
{
	UFieldSystemMetaData::AfterRead();

}

void UFieldSystemMetaDataProcessingResolution::BeforeDelete()
{
	UFieldSystemMetaData::BeforeDelete();

}

// Function FieldSystemEngine.OperatorField.SetOperatorField
// ()
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          RightField                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          LeftField                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Chaos_EFieldOperationType> Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOperatorField*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOperatorField* UOperatorField::SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, TEnumAsByte<Chaos_EFieldOperationType> Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.OperatorField.SetOperatorField"));

	UOperatorField_SetOperatorField_Params params;
	params.Magnitude = Magnitude;
	params.RightField = RightField;
	params.LeftField = LeftField;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UOperatorField::AfterRead()
{
	UFieldNodeBase::AfterRead();

	READ_PTR_FULL(RightField, UFieldNodeBase);
	READ_PTR_FULL(LeftField, UFieldNodeBase);
}

void UOperatorField::BeforeDelete()
{
	UFieldNodeBase::BeforeDelete();

	DELE_PTR_FULL(RightField);
	DELE_PTR_FULL(LeftField);
}

// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
// ()
// Parameters:
// class UFieldNodeFloat*         FloatField                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UToIntegerField*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UToIntegerField* UToIntegerField::SetToIntegerField(class UFieldNodeFloat* FloatField)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.ToIntegerField.SetToIntegerField"));

	UToIntegerField_SetToIntegerField_Params params;
	params.FloatField = FloatField;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UToIntegerField::AfterRead()
{
	UFieldNodeInt::AfterRead();

	READ_PTR_FULL(FloatField, UFieldNodeFloat);
}

void UToIntegerField::BeforeDelete()
{
	UFieldNodeInt::BeforeDelete();

	DELE_PTR_FULL(FloatField);
}

// Function FieldSystemEngine.ToFloatField.SetToFloatField
// ()
// Parameters:
// class UFieldNodeInt*           IntegerField                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UToFloatField*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UToFloatField* UToFloatField::SetToFloatField(class UFieldNodeInt* IntegerField)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.ToFloatField.SetToFloatField"));

	UToFloatField_SetToFloatField_Params params;
	params.IntegerField = IntegerField;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UToFloatField::AfterRead()
{
	UFieldNodeFloat::AfterRead();

	READ_PTR_FULL(IntField, UFieldNodeInt);
}

void UToFloatField::BeforeDelete()
{
	UFieldNodeFloat::BeforeDelete();

	DELE_PTR_FULL(IntField);
}

// Function FieldSystemEngine.CullingField.SetCullingField
// ()
// Parameters:
// class UFieldNodeBase*          Culling                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Chaos_EFieldCullingOperationType> Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCullingField*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCullingField* UCullingField::SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<Chaos_EFieldCullingOperationType> Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.CullingField.SetCullingField"));

	UCullingField_SetCullingField_Params params;
	params.Culling = Culling;
	params.Field = Field;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCullingField::AfterRead()
{
	UFieldNodeBase::AfterRead();

	READ_PTR_FULL(Culling, UFieldNodeBase);
	READ_PTR_FULL(Field, UFieldNodeBase);
}

void UCullingField::BeforeDelete()
{
	UFieldNodeBase::BeforeDelete();

	DELE_PTR_FULL(Culling);
	DELE_PTR_FULL(Field);
}

// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
// ()
// Parameters:
// class UReturnResultsTerminal*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal"));

	UReturnResultsTerminal_SetReturnResultsTerminal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UReturnResultsTerminal::AfterRead()
{
	UFieldNodeBase::AfterRead();

}

void UReturnResultsTerminal::BeforeDelete()
{
	UFieldNodeBase::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
