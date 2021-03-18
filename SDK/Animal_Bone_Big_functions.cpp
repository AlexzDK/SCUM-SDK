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

void AAnimal_Bone_Big_C::AfterRead()
{
	AEquipmentItem::AfterRead();

	READ_PTR_FULL(MeleeAttackCollisionCapsule, UMeleeAttackCollisionCapsule);
}

void AAnimal_Bone_Big_C::BeforeDelete()
{
	AEquipmentItem::BeforeDelete();

	DELE_PTR_FULL(MeleeAttackCollisionCapsule);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
