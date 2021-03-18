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

void FLocalizedIconInfo::AfterRead()
{
}

void FLocalizedIconInfo::BeforeDelete()
{
}

void FLocalizedIconInfos::AfterRead()
{
}

void FLocalizedIconInfos::BeforeDelete()
{
}

void FLocalizedAppName::AfterRead()
{
}

void FLocalizedAppName::BeforeDelete()
{
}

void FLuminComponentSubElement::AfterRead()
{
}

void FLuminComponentSubElement::BeforeDelete()
{
}

void FLuminComponentElement::AfterRead()
{
}

void FLuminComponentElement::BeforeDelete()
{
}

void ULuminRuntimeSettings::AfterRead()
{
	UObject::AfterRead();

}

void ULuminRuntimeSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
