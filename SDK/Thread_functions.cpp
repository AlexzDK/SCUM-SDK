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

void AThread_C::AfterRead()
{
	AEquipmentItem::AfterRead();

}

void AThread_C::BeforeDelete()
{
	AEquipmentItem::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
