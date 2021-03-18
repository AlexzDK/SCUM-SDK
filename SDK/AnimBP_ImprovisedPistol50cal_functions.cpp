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

// Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.AnimGraph
// ()
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAnimBP_ImprovisedPistol50cal_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.AnimGraph"));

	UAnimBP_ImprovisedPistol50cal_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.ExecuteUbergraph_AnimBP_ImprovisedPistol50cal
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_ImprovisedPistol50cal_C::ExecuteUbergraph_AnimBP_ImprovisedPistol50cal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.ExecuteUbergraph_AnimBP_ImprovisedPistol50cal"));

	UAnimBP_ImprovisedPistol50cal_C_ExecuteUbergraph_AnimBP_ImprovisedPistol50cal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAnimBP_ImprovisedPistol50cal_C::AfterRead()
{
	UWeaponAnimInstance::AfterRead();

}

void UAnimBP_ImprovisedPistol50cal_C::BeforeDelete()
{
	UWeaponAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
