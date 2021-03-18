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

// Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.CanSwitchFiringMode
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Weapon_Improvised_Handgun_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.CanSwitchFiringMode"));

	ABP_Weapon_Improvised_Handgun_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ReceiveBeginPlay
// ()
void ABP_Weapon_Improvised_Handgun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ReceiveBeginPlay"));

	ABP_Weapon_Improvised_Handgun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Handgun
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weapon_Improvised_Handgun_C::ExecuteUbergraph_BP_Weapon_Improvised_Handgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Handgun"));

	ABP_Weapon_Improvised_Handgun_C_ExecuteUbergraph_BP_Weapon_Improvised_Handgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Weapon_Improvised_Handgun_C::AfterRead()
{
	AWeapon::AfterRead();

	READ_PTR_FULL(ItemObstructionTestCapsule, UItemObstructionTestCapsuleComponent);
	READ_PTR_FULL(MeleeAttackCollisionCapsule, UMeleeAttackCollisionCapsule);
}

void ABP_Weapon_Improvised_Handgun_C::BeforeDelete()
{
	AWeapon::BeforeDelete();

	DELE_PTR_FULL(ItemObstructionTestCapsule);
	DELE_PTR_FULL(MeleeAttackCollisionCapsule);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
