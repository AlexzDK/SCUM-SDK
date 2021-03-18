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

// BlueprintGeneratedClass BP_WeaponBullet_545x39FMJ1.BP_WeaponBullet_545x39FMJ1_C
// 0x0000 (FullSize[0x0408] - InheritedSize[0x0408])
class ABP_WeaponBullet_545x39FMJ1_C : public AProjectile
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_WeaponBullet_545x39FMJ1.BP_WeaponBullet_545x39FMJ1_C"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
