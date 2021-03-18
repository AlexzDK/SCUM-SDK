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

// Function BP_AK47_RemoveBullet.BP_AK47_RemoveBullet_C.Execute
// ()
// Parameters:
// int                            AmmoCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_AK47_RemoveBullet_C::Execute(int AmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AK47_RemoveBullet.BP_AK47_RemoveBullet_C.Execute"));

	UBP_AK47_RemoveBullet_C_Execute_Params params;
	params.AmmoCount = AmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBP_AK47_RemoveBullet_C::AfterRead()
{
	URemoveCartridge::AfterRead();

}

void UBP_AK47_RemoveBullet_C::BeforeDelete()
{
	URemoveCartridge::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
