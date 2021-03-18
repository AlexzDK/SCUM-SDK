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

void FMyPluginStruct::AfterRead()
{
}

void FMyPluginStruct::BeforeDelete()
{
}

void UMyPluginObject::AfterRead()
{
	UObject::AfterRead();

}

void UMyPluginObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
