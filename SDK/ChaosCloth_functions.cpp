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

void UChaosClothingSimulationFactory::AfterRead()
{
	UClothingSimulationFactory::AfterRead();

}

void UChaosClothingSimulationFactory::BeforeDelete()
{
	UClothingSimulationFactory::BeforeDelete();

}

void UChaosClothingSimulationInteractor::AfterRead()
{
	UClothingSimulationInteractor::AfterRead();

}

void UChaosClothingSimulationInteractor::BeforeDelete()
{
	UClothingSimulationInteractor::BeforeDelete();

}

void UChaosClothSharedSimConfig::AfterRead()
{
	UClothSharedConfigCommon::AfterRead();

}

void UChaosClothSharedSimConfig::BeforeDelete()
{
	UClothSharedConfigCommon::BeforeDelete();

}

void UChaosClothConfig::AfterRead()
{
	UClothConfigCommon::AfterRead();

}

void UChaosClothConfig::BeforeDelete()
{
	UClothConfigCommon::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
