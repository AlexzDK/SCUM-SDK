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

void FBodyInstanceCore::AfterRead()
{
}

void FBodyInstanceCore::BeforeDelete()
{
}

void UPhysicalMaterialPropertyBase::AfterRead()
{
	UObject::AfterRead();

}

void UPhysicalMaterialPropertyBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UPhysicsSettingsCore::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UPhysicsSettingsCore::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UBodySetupCore::AfterRead()
{
	UObject::AfterRead();

}

void UBodySetupCore::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UChaosPhysicalMaterial::AfterRead()
{
	UObject::AfterRead();

}

void UChaosPhysicalMaterial::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UPhysicalMaterial::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PhysicalMaterialProperty, UPhysicalMaterialPropertyBase);
}

void UPhysicalMaterial::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PhysicalMaterialProperty);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
