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

void FMaterialQualityOverrides::AfterRead()
{
}

void FMaterialQualityOverrides::BeforeDelete()
{
}

void UMaterialShaderQualitySettings::AfterRead()
{
	UObject::AfterRead();

}

void UMaterialShaderQualitySettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UShaderPlatformQualitySettings::AfterRead()
{
	UObject::AfterRead();

}

void UShaderPlatformQualitySettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
