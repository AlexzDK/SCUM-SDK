﻿#pragma once

// Name: S, Version: N


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlaceableActorBaseBuilding.BP_PlaceableActorBaseBuilding_C
// 0x0000 (FullSize[0x0588] - InheritedSize[0x0588])
class ABP_PlaceableActorBaseBuilding_C : public APlaceableActorBaseBuilding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_PlaceableActorBaseBuilding.BP_PlaceableActorBaseBuilding_C"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
