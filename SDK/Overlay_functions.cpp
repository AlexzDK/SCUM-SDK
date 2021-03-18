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

void FOverlayItem::AfterRead()
{
}

void FOverlayItem::BeforeDelete()
{
}

void UOverlays::AfterRead()
{
	UObject::AfterRead();

}

void UOverlays::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UBasicOverlays::AfterRead()
{
	UOverlays::AfterRead();

}

void UBasicOverlays::BeforeDelete()
{
	UOverlays::BeforeDelete();

}

void ULocalizedOverlays::AfterRead()
{
	UOverlays::AfterRead();

	READ_PTR_FULL(DefaultOverlays, UBasicOverlays);
}

void ULocalizedOverlays::BeforeDelete()
{
	UOverlays::BeforeDelete();

	DELE_PTR_FULL(DefaultOverlays);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
