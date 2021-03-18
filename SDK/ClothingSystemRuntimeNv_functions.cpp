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

void FClothConstraintSetupNv::AfterRead()
{
}

void FClothConstraintSetupNv::BeforeDelete()
{
}

void UClothingSimulationFactoryNv::AfterRead()
{
	UClothingSimulationFactory::AfterRead();

}

void UClothingSimulationFactoryNv::BeforeDelete()
{
	UClothingSimulationFactory::BeforeDelete();

}

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// ()
// Parameters:
// float                          InStiffness                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness"));

	UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UClothingSimulationInteractorNv::AfterRead()
{
	UClothingSimulationInteractor::AfterRead();

}

void UClothingSimulationInteractorNv::BeforeDelete()
{
	UClothingSimulationInteractor::BeforeDelete();

}

void UClothPhysicalMeshDataNv_Legacy::AfterRead()
{
	UClothPhysicalMeshDataBase_Legacy::AfterRead();

}

void UClothPhysicalMeshDataNv_Legacy::BeforeDelete()
{
	UClothPhysicalMeshDataBase_Legacy::BeforeDelete();

}

void UClothConfigNv::AfterRead()
{
	UClothConfigCommon::AfterRead();

}

void UClothConfigNv::BeforeDelete()
{
	UClothConfigCommon::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
