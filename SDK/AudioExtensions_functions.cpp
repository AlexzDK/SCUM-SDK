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

void UAudioEndpointSettingsBase::AfterRead()
{
	UObject::AfterRead();

}

void UAudioEndpointSettingsBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USpatializationPluginSourceSettingsBase::AfterRead()
{
	UObject::AfterRead();

}

void USpatializationPluginSourceSettingsBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USoundfieldEffectSettingsBase::AfterRead()
{
	UObject::AfterRead();

}

void USoundfieldEffectSettingsBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USoundfieldEffectBase::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Settings, USoundfieldEffectSettingsBase);
}

void USoundfieldEffectBase::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Settings);
}

void USoundfieldEncodingSettingsBase::AfterRead()
{
	UObject::AfterRead();

}

void USoundfieldEncodingSettingsBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USoundModulatorBase::AfterRead()
{
	UObject::AfterRead();

}

void USoundModulatorBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USoundfieldEndpointSettingsBase::AfterRead()
{
	UObject::AfterRead();

}

void USoundfieldEndpointSettingsBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UOcclusionPluginSourceSettingsBase::AfterRead()
{
	UObject::AfterRead();

}

void UOcclusionPluginSourceSettingsBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UReverbPluginSourceSettingsBase::AfterRead()
{
	UObject::AfterRead();

}

void UReverbPluginSourceSettingsBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
