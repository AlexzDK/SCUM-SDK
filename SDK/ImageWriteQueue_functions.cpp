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

void FImageWriteOptions::AfterRead()
{
}

void FImageWriteOptions::BeforeDelete()
{
}

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// ()
// Parameters:
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageWriteOptions      Options                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UImageWriteBlueprintLibrary::ExportToDisk(class UTexture* Texture, const struct FString& Filename, const struct FImageWriteOptions& Options)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk"));

	UImageWriteBlueprintLibrary_ExportToDisk_Params params;
	params.Texture = Texture;
	params.Filename = Filename;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UImageWriteBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UImageWriteBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
