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

void UAudioAnalyzerAsset::AfterRead()
{
	UObject::AfterRead();

}

void UAudioAnalyzerAsset::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAudioAnalyzerNRTSettings::AfterRead()
{
	UAudioAnalyzerAsset::AfterRead();

}

void UAudioAnalyzerNRTSettings::BeforeDelete()
{
	UAudioAnalyzerAsset::BeforeDelete();

}

void UAudioAnalyzerNRT::AfterRead()
{
	UAudioAnalyzerAsset::AfterRead();

	READ_PTR_FULL(Sound, USoundWave);
}

void UAudioAnalyzerNRT::BeforeDelete()
{
	UAudioAnalyzerAsset::BeforeDelete();

	DELE_PTR_FULL(Sound);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
