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

// Function ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C.AnimGraph
// ()
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UABP_Prisoner_Corpse_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C.AnimGraph"));

	UABP_Prisoner_Corpse_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C.ExecuteUbergraph_ABP_Prisoner_Corpse
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Prisoner_Corpse_C::ExecuteUbergraph_ABP_Prisoner_Corpse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C.ExecuteUbergraph_ABP_Prisoner_Corpse"));

	UABP_Prisoner_Corpse_C_ExecuteUbergraph_ABP_Prisoner_Corpse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UABP_Prisoner_Corpse_C::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UABP_Prisoner_Corpse_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
