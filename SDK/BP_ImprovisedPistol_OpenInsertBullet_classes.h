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

// BlueprintGeneratedClass BP_ImprovisedPistol_OpenInsertBullet.BP_ImprovisedPistol_OpenInsertBullet_C
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UBP_ImprovisedPistol_OpenInsertBullet_C : public UInsertCartridge
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ImprovisedPistol_OpenInsertBullet.BP_ImprovisedPistol_OpenInsertBullet_C"));
		return ptr;
	}



	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
