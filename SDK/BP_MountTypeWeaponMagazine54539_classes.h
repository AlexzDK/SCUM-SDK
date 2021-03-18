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

// BlueprintGeneratedClass BP_MountTypeWeaponMagazine54539.BP_MountTypeWeaponMagazine54539_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_MountTypeWeaponMagazine54539_C : public UAttachmentSocketMountType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MountTypeWeaponMagazine54539.BP_MountTypeWeaponMagazine54539_C"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
