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

void FNiagaraCompileHash::AfterRead()
{
}

void FNiagaraCompileHash::BeforeDelete()
{
}

void UNiagaraMergeable::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraMergeable::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraDataInterfaceBase::AfterRead()
{
	UNiagaraMergeable::AfterRead();

}

void UNiagaraDataInterfaceBase::BeforeDelete()
{
	UNiagaraMergeable::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
