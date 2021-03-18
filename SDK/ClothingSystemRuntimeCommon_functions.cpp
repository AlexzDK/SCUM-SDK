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

void FClothConstraintSetup_Legacy::AfterRead()
{
}

void FClothConstraintSetup_Legacy::BeforeDelete()
{
}

void FClothConfig_Legacy::AfterRead()
{
}

void FClothConfig_Legacy::BeforeDelete()
{
}

void FPointWeightMap::AfterRead()
{
}

void FPointWeightMap::BeforeDelete()
{
}

void FClothParameterMask_Legacy::AfterRead()
{
}

void FClothParameterMask_Legacy::BeforeDelete()
{
}

void FClothPhysicalMeshData::AfterRead()
{
}

void FClothPhysicalMeshData::BeforeDelete()
{
}

void FClothLODDataCommon::AfterRead()
{
}

void FClothLODDataCommon::BeforeDelete()
{
}

void UClothConfigCommon::AfterRead()
{
	UClothConfigBase::AfterRead();

}

void UClothConfigCommon::BeforeDelete()
{
	UClothConfigBase::BeforeDelete();

}

void UClothSharedConfigCommon::AfterRead()
{
	UClothConfigCommon::AfterRead();

}

void UClothSharedConfigCommon::BeforeDelete()
{
	UClothConfigCommon::BeforeDelete();

}

void UClothingAssetCustomData::AfterRead()
{
	UObject::AfterRead();

}

void UClothingAssetCustomData::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClothingAssetCommon::AfterRead()
{
	UClothingAssetBase::AfterRead();

	READ_PTR_FULL(PhysicsAsset, UPhysicsAsset);
	READ_PTR_FULL(ClothSharedSimConfig, UClothConfigBase);
	READ_PTR_FULL(ClothSimConfig, UClothConfigBase);
	READ_PTR_FULL(ChaosClothSimConfig, UClothConfigBase);
	READ_PTR_FULL(CustomData, UClothingAssetCustomData);
}

void UClothingAssetCommon::BeforeDelete()
{
	UClothingAssetBase::BeforeDelete();

	DELE_PTR_FULL(PhysicsAsset);
	DELE_PTR_FULL(ClothSharedSimConfig);
	DELE_PTR_FULL(ClothSimConfig);
	DELE_PTR_FULL(ChaosClothSimConfig);
	DELE_PTR_FULL(CustomData);
}

void UClothLODDataCommon_Legacy::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PhysicalMeshData, UClothPhysicalMeshDataBase_Legacy);
}

void UClothLODDataCommon_Legacy::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PhysicalMeshData);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
