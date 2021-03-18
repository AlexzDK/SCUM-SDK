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

void FCustomFieldData::AfterRead()
{
}

void FCustomFieldData::BeforeDelete()
{
}

void FSHAHashData::AfterRead()
{
}

void FSHAHashData::BeforeDelete()
{
}

void FChunkPartData::AfterRead()
{
}

void FChunkPartData::BeforeDelete()
{
}

void FChunkInfoData::AfterRead()
{
}

void FChunkInfoData::BeforeDelete()
{
}

void FFileManifestData::AfterRead()
{
}

void FFileManifestData::BeforeDelete()
{
}

void UBuildPatchManifest::AfterRead()
{
	UObject::AfterRead();

}

void UBuildPatchManifest::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
