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

void APrisoner_Left_Arm_C::AfterRead()
{
	AWeaponItem::AfterRead();

	READ_PTR_FULL(MeleeAttackCollisionCapsule, UMeleeAttackCollisionCapsule);
}

void APrisoner_Left_Arm_C::BeforeDelete()
{
	AWeaponItem::BeforeDelete();

	DELE_PTR_FULL(MeleeAttackCollisionCapsule);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
