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

// Function ImgMedia.ImgMediaSource.SetSequencePath
// ()
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImgMediaSource::SetSequencePath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ImgMedia.ImgMediaSource.SetSequencePath"));

	UImgMediaSource_SetSequencePath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// ()
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UImgMediaSource::GetSequencePath()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ImgMedia.ImgMediaSource.GetSequencePath"));

	UImgMediaSource_GetSequencePath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ImgMedia.ImgMediaSource.GetProxies
// ()
// Parameters:
// TArray<struct FString>         OutProxies                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UImgMediaSource::GetProxies(TArray<struct FString>* OutProxies)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ImgMedia.ImgMediaSource.GetProxies"));

	UImgMediaSource_GetProxies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutProxies != nullptr)
		*OutProxies = params.OutProxies;

}


void UImgMediaSource::AfterRead()
{
	UBaseMediaSource::AfterRead();

}

void UImgMediaSource::BeforeDelete()
{
	UBaseMediaSource::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
