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

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDatasmithObjectTemplate : public UObject
{
public:
	unsigned char                                      UnknownData_K1R1[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithObjectTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithActorTemplate
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      Layers[0x50];                                              // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      Tags[0x50];                                                // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithActorTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithAdditionalData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithAdditionalData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithAdditionalData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithAreaLightActor
// 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
class ADatasmithAreaLightActor : public AActor
{
public:
	DatasmithContent_EDatasmithAreaLightActorType      LightType;                                                 // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithAreaLightActorShape     LightShape;                                                // 0x0221(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5NKY[0x2];                                     // 0x0222(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Dimensions;                                                // 0x0224(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ELightUnits                                 IntensityUnits;                                            // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8MEH[0x3];                                     // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Color;                                                     // 0x0234(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Temperature;                                               // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureLightProfile*                        IESTexture;                                                // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseIESBrightness;                                         // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G39A[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IESBrightnessScale;                                        // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SourceRadius;                                              // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceLength;                                              // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttenuationRadius;                                         // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpotlightInnerAngle;                                       // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpotlightOuterAngle;                                       // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithAreaLightActor"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	DatasmithContent_EDatasmithAreaLightActorType      LightType;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithAreaLightActorShape     LightShape;                                                // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4PIN[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Dimensions;                                                // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x003C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ELightUnits                                 IntensityUnits;                                            // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q3RN[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Temperature;                                               // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IESTexture[0x28];                                          // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bUseIESBrightness;                                         // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCYI[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IESBrightnessScale;                                        // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0088(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SourceRadius;                                              // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceLength;                                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttenuationRadius;                                         // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithAreaLightActorTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithAssetImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithAssetImportData : public UAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithAssetImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshCADImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithSceneImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithSceneImportData : public UAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithSceneImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithTranslatedSceneImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithTranslatedSceneImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithCADImportSceneData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithMDLSceneImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithGLTFSceneImportData
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
	struct FString                                     Generator;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Version;                                                   // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NLES[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Author;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     License;                                                   // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Source;                                                    // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithGLTFSceneImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceMeshName;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshGLTFImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithFBXSceneImportData
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
public:
	bool                                               bGenerateLightmapUVs;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XF6S[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TexturesDir;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IntermediateSerialization;                                 // 0x0040(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bColorizeMaterials;                                        // 0x0041(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V397[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithFBXSceneImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithDeltaGenAssetImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                               bMergeNodes;                                               // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOptimizeDuplicatedNodes;                                  // 0x0049(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveInvisibleNodes;                                     // 0x004A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimplifyNodeHierarchy;                                    // 0x004B(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportVar;                                                // 0x004C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AIWT[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VarPath;                                                   // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportPos;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KR16[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PosPath;                                                   // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportTml;                                                // 0x0078(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZWM5[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TmlPath;                                                   // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithDeltaGenSceneImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithVREDAssetImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                               bMergeNodes;                                               // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOptimizeDuplicatedNodes;                                  // 0x0049(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportMats;                                               // 0x004A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LKIG[0x5];                                     // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatsPath;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportVar;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCleanVar;                                                 // 0x0061(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VKA2[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VarPath;                                                   // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportLightInfo;                                          // 0x0078(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A2XL[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LightInfoPath;                                             // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportClipInfo;                                           // 0x0090(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9EIE[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ClipInfoPath;                                              // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithVREDSceneImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithOptionsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithOptionsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithOptionsBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithCommonTessellationOptions
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
public:
	struct FDatasmithTessellationOptions               Options;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithCommonTessellationOptions"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithImportOptions
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UDatasmithImportOptions : public UDatasmithOptionsBase
{
public:
	DatasmithContent_EDatasmithImportSearchPackagePolicy SearchPackagePolicy;                                       // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;                                    // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportAssetConflictPolicy TextureConflictPolicy;                                     // 0x002A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportActorPolicy       StaticMeshActorImportPolicy;                               // 0x002B(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportActorPolicy       LightImportPolicy;                                         // 0x002C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportActorPolicy       CameraImportPolicy;                                        // 0x002D(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportActorPolicy       OtherActorImportPolicy;                                    // 0x002E(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportMaterialQuality   MaterialQuality;                                           // 0x002F(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QNN0[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDatasmithImportBaseOptions                 BaseOptions;                                               // 0x0034(0x0014) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithReimportOptions                   ReimportOptions;                                           // 0x0048(0x0002) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_31PU[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FilePath;                                                  // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9QBX[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithImportOptions"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	class UMaterialInterface*                          LandscapeMaterial;                                         // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaticLightingLOD;                                         // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C9C2[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithLandscapeTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      bVisible : 1;                                              // 0x0030(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5C2S[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CastShadows : 1;                                           // 0x0034(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseTemperature : 1;                                       // 0x0034(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseIESBrightness : 1;                                     // 0x0034(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8GIE[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Intensity;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Temperature;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IESBrightnessScale;                                        // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LightColor;                                                // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FO5Q[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          LightFunctionMaterial;                                     // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureLightProfile*                        IESTexture;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithLightComponentTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// 0x0168 (FullSize[0x0198] - InheritedSize[0x0030])
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      ParentMaterial[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TMap<struct FName, float>                          ScalarParameterValues;                                     // 0x0058(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FLinearColor>            VectorParameterValues;                                     // 0x00A8(0x0050) (NativeAccessSpecifierPublic)
	unsigned char                                      TextureParameterValues[0x50];                              // 0x00F8(0x0050) UNKNOWN PROPERTY: MapProperty
	struct FDatasmithStaticParameterSetTemplate        StaticParameters;                                          // 0x0148(0x0050) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithMaterialInstanceTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	Engine_ELightUnits                                 IntensityUnits;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ITF[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SourceRadius;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceLength;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttenuationRadius;                                         // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithPointLightComponentTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithPostProcessSettingsTemplate       Settings;                                                  // 0x0030(0x0040) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnabled : 1;                                              // 0x0070(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUnbound : 1;                                              // 0x0070(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C5UM[0xF];                                     // 0x0071(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithPostProcessVolumeTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithScene
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDatasmithScene : public UObject
{
public:
	unsigned char                                      UnknownData_SNOD[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithScene"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithSceneActor
// 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithScene*                             Scene;                                                     // 0x0220(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RelatedActors[0x50];                                       // 0x0228(0x0050) UNKNOWN PROPERTY: MapProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithSceneActor"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FTransform                                  RelativeTransform;                                         // 0x0030(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EComponentMobility>             Mobility;                                                  // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TNKC[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AttachParent[0x28];                                        // 0x0061(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bVisible;                                                  // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HGYL[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Tags[0x50];                                                // 0x0091(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_BXXJ[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithSceneComponentTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithIFCSceneImportData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithIFCSceneImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceGlobalId;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshIFCImportData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithAssetUserData
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<struct FName, struct FString>                 MetaData;                                                  // 0x0028(0x0050) (Edit, BlueprintVisible, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithAssetUserData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;                                    // 0x0030(0x0030) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithCineCameraActorTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraFilmbackSettingsTemplate    FilmbackSettings;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithCameraLensSettingsTemplate        LensSettings;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithCameraFocusSettingsTemplate       FocusSettings;                                             // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              CurrentFocalLength;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentAperture;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HDNX[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDatasmithPostProcessSettingsTemplate       PostProcessSettings;                                       // 0x0050(0x0040) (NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithCineCameraComponentTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithContentBlueprintLibrary"));
		return ptr;
	}



	struct FString GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& Key);
	void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const struct FString& StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues);
	class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);
	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithCustomActionBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDatasmithCustomActionBase : public UObject
{
public:
	unsigned char                                      UnknownData_TUCX[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithCustomActionBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithDecalComponentTemplate
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{
public:
	int                                                sortOrder;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DecalSize;                                                 // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithDecalComponentTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithImportedSequencesActor
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class ADatasmithImportedSequencesActor : public AActor
{
public:
	TArray<class ULevelSequence*>                      ImportedSequences;                                         // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithImportedSequencesActor"));
		return ptr;
	}



	void PlayLevelSequence(class ULevelSequence* SequenceToPlay);
	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	TEnumAsByte<Engine_ESkyLightSourceType>            SourceType;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WRM[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CubemapResolution;                                         // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                                Cubemap;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithSkyLightComponentTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                              InnerConeAngle;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterConeAngle;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithSpotLightComponentTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
	class UStaticMesh*                                 StaticMesh;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                         // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshComponentTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithMeshSectionInfoMapTemplate        SectionInfoMap;                                            // 0x0030(0x0050) (Edit, EditConst, NativeAccessSpecifierPublic)
	int                                                LightMapCoordinateIndex;                                   // 0x0080(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LightMapResolution;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;                                             // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FDatasmithStaticMaterialTemplate>    StaticMaterials;                                           // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshTemplate"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
