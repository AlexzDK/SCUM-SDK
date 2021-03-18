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

void UAnimNotifyState_TimedNiagaraEffect::AfterRead()
{
	UAnimNotifyState::AfterRead();

	READ_PTR_FULL(Template, UNiagaraSystem);
}

void UAnimNotifyState_TimedNiagaraEffect::BeforeDelete()
{
	UAnimNotifyState::BeforeDelete();

	DELE_PTR_FULL(Template);
}

// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
// ()
// Parameters:
// class UFXSystemComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect"));

	UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAnimNotify_PlayNiagaraEffect::AfterRead()
{
	UAnimNotify::AfterRead();

	READ_PTR_FULL(Template, UNiagaraSystem);
}

void UAnimNotify_PlayNiagaraEffect::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

	DELE_PTR_FULL(Template);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
