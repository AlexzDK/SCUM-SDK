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

// BlueprintGeneratedClass BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C
// 0x0020 (FullSize[0x2D68] - InheritedSize[0x2D48])
class ABP_Weapon_Improvised_Handgun_C : public AWeapon
{
public:
	unsigned char                                      UnknownData_818F[0x8];                                     // 0x2D48(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x2D50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UItemObstructionTestCapsuleComponent*        ItemObstructionTestCapsule;                                // 0x2D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                               // 0x2D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C"));
		return ptr;
	}



	bool CanSwitchFiringMode();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Weapon_Improvised_Handgun(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
