#pragma once

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

// BlueprintGeneratedClass BP_PlaceableActorBaseUpgrade.BP_PlaceableActorBaseUpgrade_C
// 0x0000 (FullSize[0x04E0] - InheritedSize[0x04E0])
class ABP_PlaceableActorBaseUpgrade_C : public APlaceableActorBaseUpgrade
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_PlaceableActorBaseUpgrade.BP_PlaceableActorBaseUpgrade_C"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
