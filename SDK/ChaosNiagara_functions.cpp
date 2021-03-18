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

void FChaosDestructionEvent::AfterRead()
{
}

void FChaosDestructionEvent::BeforeDelete()
{
}

void UNiagaraDataInterfaceFieldSystem::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(BlueprintSource, UBlueprint);
	READ_PTR_FULL(SourceActor, AActor);
}

void UNiagaraDataInterfaceFieldSystem::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(BlueprintSource);
	DELE_PTR_FULL(SourceActor);
}

void UNiagaraDataInterfaceChaosDestruction::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceChaosDestruction::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
