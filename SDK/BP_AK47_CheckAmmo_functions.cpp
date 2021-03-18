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

// Function BP_AK47_CheckAmmo.BP_AK47_CheckAmmo_C.Execute
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_AK47_CheckAmmo_C::Execute()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AK47_CheckAmmo.BP_AK47_CheckAmmo_C.Execute"));

	UBP_AK47_CheckAmmo_C_Execute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AK47_CheckAmmo.BP_AK47_CheckAmmo_C.CanExecute
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_AK47_CheckAmmo_C::CanExecute()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AK47_CheckAmmo.BP_AK47_CheckAmmo_C.CanExecute"));

	UBP_AK47_CheckAmmo_C_CanExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBP_AK47_CheckAmmo_C::AfterRead()
{
	UWeaponActionCheckAmmoSequence::AfterRead();

}

void UBP_AK47_CheckAmmo_C::BeforeDelete()
{
	UWeaponActionCheckAmmoSequence::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
