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

// BlueprintGeneratedClass BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C
// 0x0008 (FullSize[0x0410] - InheritedSize[0x0408])
class ABP_WeaponBullet_762x54FMJ_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C"));
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_762x54FMJ(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
