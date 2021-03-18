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

void FClothVertBoneData::AfterRead()
{
}

void FClothVertBoneData::BeforeDelete()
{
}

void FClothCollisionPrim_Convex::AfterRead()
{
}

void FClothCollisionPrim_Convex::BeforeDelete()
{
}

void FClothCollisionPrim_SphereConnection::AfterRead()
{
}

void FClothCollisionPrim_SphereConnection::BeforeDelete()
{
}

void FClothCollisionPrim_Sphere::AfterRead()
{
}

void FClothCollisionPrim_Sphere::BeforeDelete()
{
}

void FClothCollisionPrim_Box::AfterRead()
{
}

void FClothCollisionPrim_Box::BeforeDelete()
{
}

void FClothCollisionData::AfterRead()
{
}

void FClothCollisionData::BeforeDelete()
{
}

void UClothConfigBase::AfterRead()
{
	UObject::AfterRead();

}

void UClothConfigBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClothingSimulationFactory::AfterRead()
{
	UObject::AfterRead();

}

void UClothingSimulationFactory::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// ()
// Parameters:
// float                          InStiffness                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness"));

	UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// ()
void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated"));

	UClothingSimulationInteractor_PhysicsAssetUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UClothingSimulationInteractor::GetSimulationTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime"));

	UClothingSimulationInteractor_GetSimulationTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UClothingSimulationInteractor::GetNumSubsteps()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps"));

	UClothingSimulationInteractor_GetNumSubsteps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UClothingSimulationInteractor::GetNumKinematicParticles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles"));

	UClothingSimulationInteractor_GetNumKinematicParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UClothingSimulationInteractor::GetNumIterations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations"));

	UClothingSimulationInteractor_GetNumIterations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UClothingSimulationInteractor::GetNumDynamicParticles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles"));

	UClothingSimulationInteractor_GetNumDynamicParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UClothingSimulationInteractor::GetNumCloths()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths"));

	UClothingSimulationInteractor_GetNumCloths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// ()
// Parameters:
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride"));

	UClothingSimulationInteractor_EnableGravityOverride_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
// ()
void UClothingSimulationInteractor::DisableGravityOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride"));

	UClothingSimulationInteractor_DisableGravityOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// ()
void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated"));

	UClothingSimulationInteractor_ClothConfigUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UClothingSimulationInteractor::AfterRead()
{
	UObject::AfterRead();

}

void UClothingSimulationInteractor::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClothSharedSimConfigBase::AfterRead()
{
	UObject::AfterRead();

}

void UClothSharedSimConfigBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClothingAssetBase::AfterRead()
{
	UObject::AfterRead();

}

void UClothingAssetBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClothPhysicalMeshDataBase_Legacy::AfterRead()
{
	UObject::AfterRead();

}

void UClothPhysicalMeshDataBase_Legacy::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
