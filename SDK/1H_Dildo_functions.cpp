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

void A1H_Dildo_C::AfterRead()
{
	AWeaponItem::AfterRead();

	READ_PTR_FULL(MeleeAttackCollisionCapsule, UMeleeAttackCollisionCapsule);
}

void A1H_Dildo_C::BeforeDelete()
{
	AWeaponItem::BeforeDelete();

	DELE_PTR_FULL(MeleeAttackCollisionCapsule);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
