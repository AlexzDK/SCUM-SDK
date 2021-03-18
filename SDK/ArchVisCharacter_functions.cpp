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

void UArchVisCharMovementComponent::AfterRead()
{
	UCharacterMovementComponent::AfterRead();

}

void UArchVisCharMovementComponent::BeforeDelete()
{
	UCharacterMovementComponent::BeforeDelete();

}

void AArchVisCharacter::AfterRead()
{
	ACharacter::AfterRead();

}

void AArchVisCharacter::BeforeDelete()
{
	ACharacter::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
