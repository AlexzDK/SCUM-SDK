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

// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapSecureStorage.MagicLeapSecureStorage"));
		return ptr;
	}



	bool PutSecureVector(const struct FString& Key, const struct FVector& DataToStore);
	bool PutSecureTransform(const struct FString& Key, const struct FTransform& DataToStore);
	bool PutSecureString(const struct FString& Key, const struct FString& DataToStore);
	bool PutSecureSaveGame(const struct FString& Key, class USaveGame* ObjectToStore);
	bool PutSecureRotator(const struct FString& Key, const struct FRotator& DataToStore);
	bool PutSecureInt64(const struct FString& Key, int64_t DataToStore);
	bool PutSecureInt(const struct FString& Key, int DataToStore);
	bool PutSecureFloat(const struct FString& Key, float DataToStore);
	bool PutSecureByte(const struct FString& Key, unsigned char DataToStore);
	bool PutSecureBool(const struct FString& Key, bool DataToStore);
	bool PutSecureArray(const struct FString& Key, TArray<int> DataToStore);
	bool GetSecureVector(const struct FString& Key, struct FVector* DataToRetrieve);
	bool GetSecureTransform(const struct FString& Key, struct FTransform* DataToRetrieve);
	bool GetSecureString(const struct FString& Key, struct FString* DataToRetrieve);
	bool GetSecureSaveGame(const struct FString& Key, class USaveGame** ObjectToRetrieve);
	bool GetSecureRotator(const struct FString& Key, struct FRotator* DataToRetrieve);
	bool GetSecureInt64(const struct FString& Key, int64_t* DataToRetrieve);
	bool GetSecureInt(const struct FString& Key, int* DataToRetrieve);
	bool GetSecureFloat(const struct FString& Key, float* DataToRetrieve);
	bool GetSecureByte(const struct FString& Key, unsigned char* DataToRetrieve);
	bool GetSecureBool(const struct FString& Key, bool* DataToRetrieve);
	bool GetSecureArray(const struct FString& Key, TArray<int>* DataToRetrieve);
	bool DeleteSecureData(const struct FString& Key);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
