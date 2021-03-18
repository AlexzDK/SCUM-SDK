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

// Function BP_ImprPistol_Driver_OpenChamberInsertBullet.BP_ImprPistol_Driver_OpenChamberInsertBullet_C.CanExecuteUsingData
// ()
// Parameters:
// struct FWeaponReloadData       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_ImprPistol_Driver_OpenChamberInsertBullet_C::CanExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ImprPistol_Driver_OpenChamberInsertBullet.BP_ImprPistol_Driver_OpenChamberInsertBullet_C.CanExecuteUsingData"));

	UBP_ImprPistol_Driver_OpenChamberInsertBullet_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBP_ImprPistol_Driver_OpenChamberInsertBullet_C::AfterRead()
{
	UInsertCartridge::AfterRead();

}

void UBP_ImprPistol_Driver_OpenChamberInsertBullet_C::BeforeDelete()
{
	UInsertCartridge::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
