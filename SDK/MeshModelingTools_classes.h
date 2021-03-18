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

// Class MeshModelingTools.AddPatchToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_8BU1[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddPatchToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddPatchToolProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{
public:
	float                                              Width;                                                     // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rotation;                                                  // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Subdivisions;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Shift;                                                     // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddPatchToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddPatchTool
// 0x0078 (FullSize[0x0100] - InheritedSize[0x0088])
class UAddPatchTool : public USingleClickTool
{
public:
	unsigned char                                      UnknownData_HWX5[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAddPatchToolProperties*                     ShapeSettings;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ELUG[0x58];                                    // 0x00A8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddPatchTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddPrimitiveToolBuilder
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_OQE4[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddPrimitiveToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralShapeToolProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bInstanceIfPossible;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMakeMeshPolygroupMode           PolygroupMode;                                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMakeMeshPlacementType           PlaceMode;                                                 // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToGrid;                                               // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMakeMeshPivotLocation           PivotLocation;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZTWX[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Rotation;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlignShapeToPlacementSurface;                             // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T0WC[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralShapeToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralRectangleToolProperties
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                              Width;                                                     // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WidthSubdivisions;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DepthSubdivisions;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralRectangleToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralBoxToolProperties
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UProceduralBoxToolProperties : public UProceduralRectangleToolProperties
{
public:
	float                                              Height;                                                    // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeightSubdivisions;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralBoxToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralRoundedRectangleToolProperties
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UProceduralRoundedRectangleToolProperties : public UProceduralRectangleToolProperties
{
public:
	float                                              CornerRadius;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CornerSlices;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralRoundedRectangleToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralDiscToolProperties
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                              Radius;                                                    // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RadialSlices;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RadialSubdivisions;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7Q0A[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralDiscToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralPuncturedDiscToolProperties
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UProceduralPuncturedDiscToolProperties : public UProceduralDiscToolProperties
{
public:
	float                                              HoleRadius;                                                // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WT2M[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralPuncturedDiscToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralTorusToolProperties
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                              MajorRadius;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinorRadius;                                               // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TubeSlices;                                                // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CrossSectionSlices;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralTorusToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralCylinderToolProperties
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                              Radius;                                                    // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RadialSlices;                                              // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeightSubdivisions;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralCylinderToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralConeToolProperties
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                              Radius;                                                    // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RadialSlices;                                              // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeightSubdivisions;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralConeToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralArrowToolProperties
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                              ShaftRadius;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShaftHeight;                                               // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeadRadius;                                                // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeadHeight;                                                // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RadialSlices;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalSubdivisions;                                         // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralArrowToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralSphereToolProperties
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                              Radius;                                                    // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LatitudeSlices;                                            // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LongitudeSlices;                                           // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_870K[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralSphereToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProceduralSphericalBoxToolProperties
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UProceduralSphericalBoxToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                              Radius;                                                    // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Subdivisions;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProceduralSphericalBoxToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.LastActorInfo
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class ULastActorInfo : public UObject
{
public:
	unsigned char                                      UnknownData_ZKI6[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Actor;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 StaticMesh;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProceduralShapeToolProperties*              ShapeSettings;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.LastActorInfo"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddPrimitiveTool
// 0x0068 (FullSize[0x00F0] - InheritedSize[0x0088])
class UAddPrimitiveTool : public USingleClickTool
{
public:
	unsigned char                                      UnknownData_J5N1[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProceduralShapeToolProperties*              ShapeSettings;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULastActorInfo*                              LastGenerated;                                             // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     AssetName;                                                 // 0x00B0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5O61[0x30];                                    // 0x00C0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddPrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddBoxPrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddBoxPrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddCylinderPrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddCylinderPrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddConePrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddConePrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddConePrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddRectanglePrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddRectanglePrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddRoundedRectanglePrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddRoundedRectanglePrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddRoundedRectanglePrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddDiscPrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddDiscPrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddPuncturedDiscPrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddPuncturedDiscPrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddPuncturedDiscPrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddTorusPrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddTorusPrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddArrowPrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddArrowPrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddSpherePrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddSpherePrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AddSphericalBoxPrimitiveTool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UAddSphericalBoxPrimitiveTool : public UAddPrimitiveTool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AddSphericalBoxPrimitiveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AlignObjectsToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAlignObjectsToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AlignObjectsToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AlignObjectsToolProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EAlignObjectsAlignTypes          AlignType;                                                 // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LN1T[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EAlignObjectsAlignToOptions      AlignTo;                                                   // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SF5G[0x3];                                     // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EAlignObjectsBoxPoint            BoxPosition;                                               // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EZVI[0x3];                                     // 0x0068(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bAlignX;                                                   // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlignY;                                                   // 0x006D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlignZ;                                                   // 0x006E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YNL[0x1];                                     // 0x006F(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AlignObjectsToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AlignObjectsTool
// 0x00B0 (FullSize[0x0140] - InheritedSize[0x0090])
class UAlignObjectsTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_XAG4[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAlignObjectsToolProperties*                 AlignProps;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JUGI[0xA0];                                    // 0x00A0(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AlignObjectsTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UBakeMeshAttributeMapsToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_HEJQ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakeMeshAttributeMapsToolProperties
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EBakeMapType                     MapType;                                                   // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9VWY[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EBakeTextureResolution           Resolution;                                                // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4JZ0[0x3];                                     // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     UVLayer;                                                   // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UVLayerNamesList;                                          // 0x0078(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bUseWorldSpace;                                            // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OA38[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Result;                                                    // 0x0090(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakeMeshAttributeMapsToolProperties"));
		return ptr;
	}



	TArray<struct FString> GetUVLayerNamesFunc();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakedNormalMapToolProperties
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBakedNormalMapToolProperties : public UInteractiveToolPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakedNormalMapToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakedOcclusionMapToolProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UBakedOcclusionMapToolProperties : public UInteractiveToolPropertySet
{
public:
	int                                                OcclusionRays;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGaussianBlur;                                             // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GMLO[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlurRadius;                                                // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BiasAngle;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5WWX[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakedOcclusionMapToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakedOcclusionMapVisualizationProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBakedOcclusionMapVisualizationProperties : public UInteractiveToolPropertySet
{
public:
	float                                              BaseGrayLevel;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionMultiplier;                                       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakedOcclusionMapVisualizationProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakedCurvatureMapToolProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UBakedCurvatureMapToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EBakedCurvatureTypeMode          CurvatureType;                                             // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VGUM[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EBakedCurvatureColorMode         ColorMode;                                                 // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C8KT[0x3];                                     // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              RangeMultiplier;                                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRangeMultiplier;                                        // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EBakedCurvatureClampMode         Clamping;                                                  // 0x0070(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QVWU[0x3];                                     // 0x0070(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bGaussianBlur;                                             // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OSGG[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlurRadius;                                                // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1DJ7[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakedCurvatureMapToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakedTexture2DImageProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBakedTexture2DImageProperties : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                                  SourceTexture;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UVLayer;                                                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5ZHH[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakedTexture2DImageProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakeMeshAttributeMapsTool
// 0x0440 (FullSize[0x04D0] - InheritedSize[0x0090])
class UBakeMeshAttributeMapsTool : public UMultiSelectionTool
{
public:
	class UBakeMeshAttributeMapsToolProperties*        Settings;                                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBakedNormalMapToolProperties*               NormalMapProps;                                            // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBakedOcclusionMapToolProperties*            OcclusionMapProps;                                         // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBakedCurvatureMapToolProperties*            CurvatureMapProps;                                         // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBakedTexture2DImageProperties*              Texture2DProps;                                            // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBakedOcclusionMapVisualizationProperties*   VisualizationProps;                                        // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XMQM[0x10];                                    // 0x00C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    PreviewMaterial;                                           // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SCQ6[0x358];                                   // 0x00D8(0x0358) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  CachedNormalMap;                                           // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4O2N[0x18];                                    // 0x0438(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  CachedOcclusionMap;                                        // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5MZ2[0x28];                                    // 0x0458(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  CachedCurvatureMap;                                        // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W76W[0x10];                                    // 0x0488(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  CachedMeshPropertyMap;                                     // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EQ2M[0x10];                                    // 0x04A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  CachedTexture2DImageMap;                                   // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  EmptyNormalMap;                                            // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  EmptyColorMapBlack;                                        // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  EmptyColorMapWhite;                                        // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakeMeshAttributeMapsTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakeTransformToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UBakeTransformToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_1V98[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakeTransformToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakeTransformToolProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bBakeRotation;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EBakeScaleMethod                 BakeScale;                                                 // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecenterPivot;                                            // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IRCW[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakeTransformToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BakeTransformTool
// 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
class UBakeTransformTool : public UMultiSelectionTool
{
public:
	class UBakeTransformToolProperties*                BasicProperties;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9NPO[0x20];                                    // 0x0098(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BakeTransformTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PhysicsObjectToolPropertySet
// 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{
public:
	struct FString                                     ObjectName;                                                // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_ECollisionGeometryMode           CollisionType;                                             // 0x0070(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DD8W[0x3];                                     // 0x0070(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_BBNQ[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPhysicsSphereData>                  Spheres;                                                   // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPhysicsBoxData>                     Boxes;                                                     // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPhysicsCapsuleData>                 capsules;                                                  // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPhysicsConvexData>                  Convexes;                                                  // 0x00A8(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PhysicsObjectToolPropertySet"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.CollisionGeometryVisualizationProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{
public:
	float                                              LineThickness;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowHidden;                                               // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DHGR[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      Color;                                                     // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E9O6[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.CollisionGeometryVisualizationProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.CombineMeshesToolBuilder
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCombineMeshesToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_B2GN[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.CombineMeshesToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.CombineMeshesToolProperties
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bIsDuplicateMode;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GKH1[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_ECombineTargetType               WriteOutputTo;                                             // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3Z9M[0x3];                                     // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     OutputName;                                                // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutputAsset;                                               // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.CombineMeshesToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.CombineMeshesTool
// 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
class UCombineMeshesTool : public UMultiSelectionTool
{
public:
	class UCombineMeshesToolProperties*                BasicProperties;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOnAcceptHandleSourcesProperties*            HandleSourceProperties;                                    // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7LGZ[0x18];                                    // 0x00A0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.CombineMeshesTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ConvertToPolygonsToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ConvertToPolygonsToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ConvertToPolygonsToolProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EConvertToPolygonsMode           ConversionMode;                                            // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YJ5H[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AngleTolerance;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCalculateNormals;                                         // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGroupColors;                                          // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G7SD[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ConvertToPolygonsToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ConvertToPolygonsTool
// 0x0358 (FullSize[0x03E0] - InheritedSize[0x0088])
class UConvertToPolygonsTool : public USingleSelectionTool
{
public:
	class UConvertToPolygonsToolProperties*            Settings;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TK3U[0x348];                                   // 0x0098(0x0348) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ConvertToPolygonsTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.CSGMeshesToolProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	ModelingOperators_ECSGOperation                    Operation;                                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowNewBoundaryEdges;                                     // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttemptFixHoles;                                          // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyUseFirstMeshMaterials;                                // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0WXG[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.CSGMeshesToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.CSGMeshesTool
// 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{
public:
	class UCSGMeshesToolProperties*                    CSGProperties;                                             // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MJ8Z[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULineSetComponent*                           DrawnLineSet;                                              // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_89LA[0x10];                                    // 0x0110(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.CSGMeshesTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.CSGMeshesToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.CSGMeshesToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DeformMeshPolygonsToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DeformMeshPolygonsToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DeformMeshPolygonsTransformProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EGroupTopologyDeformationStrategy DeformationStrategy;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EQuickTransformerMode            TransformMode;                                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectFaces;                                              // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectEdges;                                              // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectVertices;                                           // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWireframe;                                            // 0x0066(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QIKF[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EWeightScheme                    SelectedWeightScheme;                                      // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BN8Y[0x3];                                     // 0x0067(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_UEQK[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             HandleWeight;                                              // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPostFixHandles;                                           // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HMJQ[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DeformMeshPolygonsTransformProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DeformMeshPolygonsTool
// 0x1230 (FullSize[0x12F0] - InheritedSize[0x00C0])
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData_A9HK[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDeformMeshPolygonsTransformProperties*      TransformProps;                                            // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KR4V[0x1218];                                  // 0x00D8(0x1218) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DeformMeshPolygonsTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DisplaceMeshCommonProperties
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EDisplaceMeshToolDisplaceType    DisplacementType;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8TNZ[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DisplaceIntensity;                                         // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                randomSeed;                                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Subdivisions;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       WeightMap;                                                 // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             WeightMapsList;                                            // 0x0078(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bInvertWeightMap;                                          // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableSizeWarning;                                       // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VQCP[0x6];                                     // 0x008A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DisplaceMeshCommonProperties"));
		return ptr;
	}



	TArray<struct FString> GetWeightMapsFunc();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DisplaceMeshTextureMapProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                                  DisplacementMap;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DisplaceMeshTextureMapProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bEnableFilter;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ILF[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     FilterDirection;                                           // 0x0064(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilterWidth;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N5KZ[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{
public:
	TArray<struct FPerlinLayerProperties>              PerlinLayerProperties;                                     // 0x0060(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DisplaceMeshSineWaveProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{
public:
	float                                              SineWaveFrequency;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SineWavePhaseShift;                                        // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SineWaveDirection;                                         // 0x0068(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B61C[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DisplaceMeshSineWaveProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DisplaceMeshToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DisplaceMeshToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DisplaceMeshTool
// 0x0368 (FullSize[0x03F0] - InheritedSize[0x0088])
class UDisplaceMeshTool : public USingleSelectionTool
{
public:
	class UDisplaceMeshCommonProperties*               CommonProperties;                                          // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDisplaceMeshDirectionalFilterProperties*    DirectionalFilterProperties;                               // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDisplaceMeshTextureMapProperties*           TextureMapProperties;                                      // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDisplaceMeshPerlinNoiseProperties*          NoiseProperties;                                           // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDisplaceMeshSineWaveProperties*             SineWaveProperties;                                        // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5SW6[0x340];                                   // 0x00B0(0x0340) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DisplaceMeshTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DrawAndRevolveToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_YR3X[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DrawAndRevolveToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RevolveProperties
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class URevolveProperties : public UInteractiveToolPropertySet
{
public:
	double                                             RevolutionDegrees;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             RevolutionDegreesOffset;                                   // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Steps;                                                     // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReverseRevolutionDirection;                               // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipMesh;                                                 // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bProfileIsCrossSectionOfSide;                              // 0x0076(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_ERevolvePropertiesPolygroupMode  PolygroupMode;                                             // 0x0077(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_ERevolvePropertiesQuadSplit      QuadSplitMode;                                             // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2GM[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             DiagonalProportionTolerance;                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_ERevolvePropertiesCapFillMode    CapFillMode;                                               // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWeldFullRevolution;                                       // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWeldVertsOnAxis;                                          // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZU1J[0x5];                                     // 0x008B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             AxisWeldTolerance;                                         // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSharpNormals;                                             // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X60U[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             SharpNormalAngleTolerance;                                 // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipVs;                                                   // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUVsSkipFullyWeldedEdges;                                  // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CS3L[0x6];                                     // 0x00AA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RevolveProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RevolveToolProperties
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class URevolveToolProperties : public URevolveProperties
{
public:
	bool                                               bConnectOpenProfileToAxis;                                 // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IBX5[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     DrawPlaneOrigin;                                           // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    DrawPlaneOrientation;                                      // 0x00C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bEnableSnapping;                                           // 0x00CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowedToEditDrawPlane;                                   // 0x00CD(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PPFE[0x2];                                     // 0x00CE(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RevolveToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RevolveOperatorFactory
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class URevolveOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_7PE3[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDrawAndRevolveTool*                         RevolveTool;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RevolveOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DrawAndRevolveTool
// 0x00A0 (FullSize[0x0120] - InheritedSize[0x0080])
class UDrawAndRevolveTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_1VXW[0x78];                                    // 0x0080(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveControlPointsMechanic*                 ControlPointsMechanic;                                     // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URevolveToolProperties*                      Settings;                                                  // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DrawAndRevolveTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DrawPolygonToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_586V[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DrawPolygonToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DrawPolygonToolStandardProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EDrawPolygonDrawMode             PolygonType;                                               // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EDrawPolygonOutputMode           OutputMode;                                                // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVEK[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeatureSizeRatio;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtrudeHeight;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Steps;                                                     // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowSelfIntersections;                                   // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGizmo;                                                // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UL5R[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DrawPolygonToolStandardProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DrawPolygonToolSnapProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bEnableSnapping;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToVertices;                                           // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToEdges;                                              // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToAngles;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToLengths;                                            // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q85J[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SegmentLength;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitSceneObjects;                                          // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z3E7[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HitNormalOffset;                                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BQ8K[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DrawPolygonToolSnapProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DrawPolygonTool
// 0x04F0 (FullSize[0x0570] - InheritedSize[0x0080])
class UDrawPolygonTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_OLTK[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDrawPolygonToolStandardProperties*          PolygonProperties;                                         // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDrawPolygonToolSnapProperties*              SnapProperties;                                            // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KMHM[0xB0];                                    // 0x00A0(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WKA6[0x3D8];                                   // 0x0168(0x03D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneDistanceFromHitMechanic*               HeightMechanic;                                            // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E65R[0x28];                                    // 0x0548(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DrawPolygonTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DrawPolyPathToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_ZU3N[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DrawPolyPathToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DrawPolyPathProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EDrawPolyPathOutputMode          OutputType;                                                // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9YI3[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EDrawPolyPathWidthMode           WidthMode;                                                 // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CNLJ[0x3];                                     // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Width;                                                     // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EDrawPolyPathHeightMode          HeightMode;                                                // 0x006C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8YUX[0x3];                                     // 0x006C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Height;                                                    // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RampStartRatio;                                            // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2KL[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DrawPolyPathProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DrawPolyPathExtrudeProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EDrawPolyPathExtrudeDirection    Direction;                                                 // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8V1F[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_3HO8[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DrawPolyPathExtrudeProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DrawPolyPathTool
// 0x0190 (FullSize[0x0210] - InheritedSize[0x0080])
class UDrawPolyPathTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_4FG7[0x20];                                    // 0x0080(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDrawPolyPathProperties*                     TransformProps;                                            // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDrawPolyPathExtrudeProperties*              ExtrudeProperties;                                         // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M0H0[0x88];                                    // 0x00B8(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                             // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N50N[0xA0];                                    // 0x0148(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolyEditPreviewMesh*                        EditPreview;                                               // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                     // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                         // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                       // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2HS6[0x8];                                     // 0x0208(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DrawPolyPathTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DynamicMeshSculptToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_307D[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DynamicMeshSculptToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BrushSculptProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bIsRemeshingEnabled;                                       // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EDynamicMeshSculptBrushType      PrimaryBrushType;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OATH[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PrimaryBrushSpeed;                                         // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreserveUVFlow;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFreezeTarget;                                             // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LCCT[0x2];                                     // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SmoothBrushSpeed;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetailPreservingSmooth;                                   // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DSBQ[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BrushSculptProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshConstraintProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bPreserveSharpEdges;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMeshBoundaryConstraint          MeshBoundaryConstraint;                                    // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EGroupBoundaryConstraint         GroupBoundaryConstraint;                                   // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMaterialBoundaryConstraint      MaterialBoundaryConstraint;                                // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreventNormalFlips;                                       // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QHL2[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshConstraintProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RemeshProperties
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class URemeshProperties : public UMeshConstraintProperties
{
public:
	float                                              SmoothingStrength;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlips;                                                    // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSplits;                                                   // 0x006D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCollapses;                                                // 0x006E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CJJZ[0x1];                                     // 0x006F(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RemeshProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BrushRemeshProperties
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UBrushRemeshProperties : public URemeshProperties
{
public:
	bool                                               bEnableRemeshing;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FBFG[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TriangleSize;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreserveDetail;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SCJJ[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BrushRemeshProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.FixedPlaneBrushProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bPropertySetEnabled;                                       // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGizmo;                                                // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToGrid;                                               // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S6I7[0x1];                                     // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     position;                                                  // 0x0064(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       Rotation;                                                  // 0x0070(0x0010) (Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.FixedPlaneBrushProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DynamicMeshSculptTool
// 0x0BB0 (FullSize[0x0C70] - InheritedSize[0x00C0])
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
public:
	class USculptBrushProperties*                      BrushProperties;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrushSculptProperties*                      SculptProperties;                                          // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USculptMaxBrushProperties*                   SculptMaxBrushProperties;                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKelvinBrushProperties*                      KelvinBrushProperties;                                     // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrushRemeshProperties*                      RemeshProperties;                                          // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFixedPlaneBrushProperties*                  GizmoProperties;                                           // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshEditingViewProperties*                  ViewProperties;                                            // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MTYG[0x38];                                    // 0x00F8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBrushStampIndicator*                        BrushIndicator;                                            // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                    // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPreviewMesh*                                BrushIndicatorMesh;                                        // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOctreeDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x0148(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                    // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SJYZ[0xAF8];                                   // 0x0158(0x0AF8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x0C50(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x0C58(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JLH9[0x10];                                    // 0x0C60(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DynamicMeshSculptTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EdgeLoopInsertionToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEdgeLoopInsertionToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_3CNN[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EdgeLoopInsertionToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EdgeLoopInsertionProperties
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EEdgeLoopPositioningMode         PositionMode;                                              // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IR42[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EEdgeLoopInsertionMode           InsertionMode;                                             // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R0TD[0x3];                                     // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                NumLoops;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CRDI[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             ProportionOffset;                                          // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             DistanceOffset;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInteractive;                                              // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipOffsetDirection;                                      // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWireframe;                                                // 0x0082(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ILTE[0x5];                                     // 0x0083(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             VertexTolerance;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EdgeLoopInsertionProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EdgeLoopInsertionOperatorFactory
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UEdgeLoopInsertionOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_CA8M[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEdgeLoopInsertionTool*                      Tool;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EdgeLoopInsertionOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EdgeLoopInsertionTool
// 0x0478 (FullSize[0x0500] - InheritedSize[0x0088])
class UEdgeLoopInsertionTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_L3ZH[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEdgeLoopInsertionProperties*                Settings;                                                  // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YC4G[0x260];                                   // 0x00A0(0x0260) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5DPC[0x1F8];                                   // 0x0308(0x01F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EdgeLoopInsertionTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_PEOI[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditMeshPolygonsToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PolyEditCommonProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowWireframe;                                            // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectEdgeLoops;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KOED[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_ELocalFrameMode                  LocalFrameMode;                                            // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X4J2[0x3];                                     // 0x0062(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bLockRotation;                                             // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S5SA[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PolyEditCommonProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_B6RF[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditMeshPolygonsToolActions
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditMeshPolygonsToolActions"));
		return ptr;
	}



	void Retriangulate();
	void RecalcNormals();
	void Outset();
	void Offset();
	void Merge();
	void Inset();
	void Flip();
	void Extrude();
	void Disconnect();
	void Delete();
	void Decompose();
	void CutFaces();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles"));
		return ptr;
	}



	void RecalcNormals();
	void Poke();
	void Outset();
	void Offset();
	void Inset();
	void Flip();
	void Extrude();
	void Disconnect();
	void Delete();
	void CutFaces();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditMeshPolygonsToolUVActions"));
		return ptr;
	}



	void PlanarProjection();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions"));
		return ptr;
	}



	void Weld();
	void Straighten();
	void FillHole();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles"));
		return ptr;
	}



	void Weld();
	void Split();
	void Flip();
	void FillHole();
	void Collapse();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PolyEditExtrudeProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EPolyEditExtrudeDirection        Direction;                                                 // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7Y0A[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bShellsToSolids;                                           // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BVBW[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PolyEditExtrudeProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PolyEditOffsetProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bUseFaceNormals;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4H5K[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PolyEditOffsetProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PolyEditInsetProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UPolyEditInsetProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bReproject;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YZH[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Softness;                                                  // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBoundaryOnly;                                             // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XMAV[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AreaScale;                                                 // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PolyEditInsetProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PolyEditOutsetProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UPolyEditOutsetProperties : public UInteractiveToolPropertySet
{
public:
	float                                              Softness;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBoundaryOnly;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P56X[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AreaScale;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OLOD[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PolyEditOutsetProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PolyEditCutProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EPolyEditCutPlaneOrientation     Orientation;                                               // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LWXB[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bSnapToVertices;                                           // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YH60[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PolyEditCutProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PolyEditSetUVProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowMaterial;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DP4O[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PolyEditSetUVProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditMeshPolygonsTool
// 0x0710 (FullSize[0x07D0] - InheritedSize[0x00C0])
class UEditMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData_5K09[0x10];                                    // 0x00C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditCommonProperties*                   CommonProps;                                               // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolActions*                EditActions;                                               // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolActions_Triangles*      EditActions_Triangles;                                     // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolEdgeActions*            EditEdgeActions;                                           // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolEdgeActions_Triangles*  EditEdgeActions_Triangles;                                 // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolUVActions*              EditUVActions;                                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditExtrudeProperties*                  ExtrudeProperties;                                         // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditOffsetProperties*                   OffsetProperties;                                          // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditInsetProperties*                    InsetProperties;                                           // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditOutsetProperties*                   OutsetProperties;                                          // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditCutProperties*                      CutProperties;                                             // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditSetUVProperties*                    SetUVProperties;                                           // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                         // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SL7H[0x8];                                     // 0x0140(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiTransformer*                           MultiTransformer;                                          // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G7TM[0x350];                                   // 0x0150(0x0350) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolyEditPreviewMesh*                        EditPreview;                                               // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZH4O[0x8];                                     // 0x04A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                     // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                         // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                       // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BK9O[0x308];                                   // 0x04C8(0x0308) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditMeshPolygonsTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditNormalsToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEditNormalsToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_T6KS[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditNormalsToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditNormalsToolProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bRecomputeNormals;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingOperators_ENormalCalculationMethod         NormalCalculationMethod;                                   // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFixInconsistentNormals;                                   // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertNormals;                                            // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingOperators_ESplitNormalMethod               SplitNormalMethod;                                         // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HFMH[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SharpEdgeAngleThreshold;                                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowSharpVertices;                                       // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6H1O[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditNormalsToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditNormalsAdvancedProperties
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditNormalsAdvancedProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditNormalsOperatorFactory
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UEditNormalsOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_QZN4[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditNormalsTool*                            Tool;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UHXS[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditNormalsOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditNormalsTool
// 0x0070 (FullSize[0x0100] - InheritedSize[0x0090])
class UEditNormalsTool : public UMultiSelectionTool
{
public:
	class UEditNormalsToolProperties*                  BasicProperties;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditNormalsAdvancedProperties*              AdvancedProperties;                                        // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GT18[0x50];                                    // 0x00B0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditNormalsTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditPivotToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEditPivotToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditPivotToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditPivotToolProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bEnableSnapDragging;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EEditPivotSnapDragRotationMode   RotationMode;                                              // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S4ZG[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditPivotToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditPivotToolActionPropertySet
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_TTSU[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseWorldBox;                                              // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V56X[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditPivotToolActionPropertySet"));
		return ptr;
	}



	void Top();
	void Right();
	void Left();
	void Front();
	void Center();
	void Bottom();
	void Back();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditPivotTool
// 0x0170 (FullSize[0x0200] - InheritedSize[0x0090])
class UEditPivotTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_G3SQ[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditPivotToolProperties*                    TransformProps;                                            // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEditPivotToolActionPropertySet*             EditPivotActions;                                          // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_543Y[0xD0];                                    // 0x00A8(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEditPivotTarget>                    ActiveGizmos;                                              // 0x0178(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_04Y8[0x78];                                    // 0x0188(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditPivotTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditUVIslandsToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditUVIslandsToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EditUVIslandsTool
// 0x02B0 (FullSize[0x0370] - InheritedSize[0x00C0])
class UEditUVIslandsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData_GZ10[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                          // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                           // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                         // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I80K[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiTransformer*                           MultiTransformer;                                          // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L5PQ[0x278];                                   // 0x00F8(0x0278) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EditUVIslandsTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ExtractCollisionGeometryToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UExtractCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_12PA[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ExtractCollisionGeometryToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ExtractCollisionGeometryTool
// 0x02A8 (FullSize[0x0330] - InheritedSize[0x0088])
class UExtractCollisionGeometryTool : public USingleSelectionTool
{
public:
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                               // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPhysicsObjectToolPropertySet*               ObjectProps;                                               // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewGeometry*                            PreviewElements;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LGJR[0x288];                                   // 0x00A8(0x0288) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ExtractCollisionGeometryTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.GroupEdgeInsertionToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UGroupEdgeInsertionToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_I5T9[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.GroupEdgeInsertionToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.GroupEdgeInsertionProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EGroupEdgeInsertionMode          InsertionMode;                                             // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WYNS[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bWireframe;                                                // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BJOL[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             VertexTolerance;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.GroupEdgeInsertionProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshSculptToolBase
// 0x0918 (FullSize[0x09D8] - InheritedSize[0x00C0])
class UMeshSculptToolBase : public UMeshSurfacePointTool
{
public:
	class USculptBrushProperties*                      BrushProperties;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorkPlaneProperties*                        GizmoProperties;                                           // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5TSD[0xE0];                                    // 0x00D0(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, class UMeshSculptBrushOpProps*>          BrushOpPropSets;                                           // 0x01B0(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EPKL[0x50];                                    // 0x0200(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, class UMeshSculptBrushOpProps*>          SecondaryBrushOpPropSets;                                  // 0x0250(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S6EZ[0x5D0];                                   // 0x02A0(0x05D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshEditingViewProperties*                  ViewProperties;                                            // 0x0870(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                    // 0x0878(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrushStampIndicator*                        BrushIndicator;                                            // 0x0880(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                    // 0x0888(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                BrushIndicatorMesh;                                        // 0x0890(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x0898(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x08A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZAB[0x130];                                   // 0x08A8(0x0130) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshSculptToolBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshVertexSculptTool
// 0x0858 (FullSize[0x1230] - InheritedSize[0x09D8])
class UMeshVertexSculptTool : public UMeshSculptToolBase
{
public:
	class UVertexBrushSculptProperties*                SculptProperties;                                          // 0x09D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x09E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CRG6[0x848];                                   // 0x09E8(0x0848) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshVertexSculptTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MirrorToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UMirrorToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_OKWZ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MirrorToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MirrorToolProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMirrorToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EMirrorOperationMode             OperationMode;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCropAlongMirrorPlaneFirst;                                // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWeldVerticesOnMirrorPlane;                                // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowBowtieVertexCreation;                                // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMirrorCtrlClickBehavior         CtrlClickBehavior;                                         // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bButtonsOnlyChangeOrientation;                             // 0x0066(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowPreview;                                              // 0x0067(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMirrorSaveMode                  SaveMode;                                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HDA9[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MirrorToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MirrorOperatorFactory
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMirrorOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_MGL8[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMirrorTool*                                 MirrorTool;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1ZEC[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MirrorOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MirrorToolActionPropertySet
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_N4IZ[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MirrorToolActionPropertySet"));
		return ptr;
	}



	void Up();
	void ShiftToCenter();
	void Right();
	void Left();
	void Forward();
	void Down();
	void Backward();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MirrorTool
// 0x00A8 (FullSize[0x0138] - InheritedSize[0x0090])
class UMirrorTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_Z0PI[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMirrorToolProperties*                       Settings;                                                  // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMirrorToolActionPropertySet*                ToolActions;                                               // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToMirror;                                            // 0x00A8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00B8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A9SQ[0x48];                                    // 0x00C8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                             // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QUCT[0x20];                                    // 0x0118(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MirrorTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.OffsetMeshToolProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EOffsetMeshToolOffsetType        OffsetType;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HYW2[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Distance;                                                  // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateShell;                                              // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ETRQ[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.OffsetMeshToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.OffsetWeightMapSetProperties
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{
public:
	float                                              MinDistance;                                               // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7808[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.OffsetWeightMapSetProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.IterativeOffsetProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{
public:
	int                                                Steps;                                                     // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOffsetBoundaries;                                         // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4LVD[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SmoothingPerStep;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReprojectSmooth;                                          // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UVQK[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.IterativeOffsetProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ImplicitOffsetProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{
public:
	float                                              Smoothness;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreserveUVs;                                              // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KTM6[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ImplicitOffsetProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.OffsetMeshTool
// 0x0020 (FullSize[0x0420] - InheritedSize[0x0400])
class UOffsetMeshTool : public UBaseMeshProcessingTool
{
public:
	class UOffsetMeshToolProperties*                   OffsetProperties;                                          // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UIterativeOffsetProperties*                  IterativeProperties;                                       // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImplicitOffsetProperties*                   ImplicitProperties;                                        // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOffsetWeightMapSetProperties*               WeightMapProperties;                                       // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.OffsetMeshTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.OffsetMeshToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.OffsetMeshToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PhysicsInspectorToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPhysicsInspectorToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PhysicsInspectorToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PhysicsInspectorTool
// 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
class UPhysicsInspectorTool : public UMultiSelectionTool
{
public:
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                               // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPhysicsObjectToolPropertySet*>       ObjectData;                                                // 0x0098(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          LineMaterial;                                              // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPreviewGeometry*>                    PreviewElements;                                           // 0x00B0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UWD7[0x18];                                    // 0x00C0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PhysicsInspectorTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PlaneCutToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UPlaneCutToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_4RYT[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PlaneCutToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.AcceptOutputProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bExportSeparatedPiecesAsNewMeshAssets;                     // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LG9E[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.AcceptOutputProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PlaneCutToolProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bSnapToWorldGrid;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepBothHalves;                                           // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QIW4[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpacingBetweenHalves;                                      // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFillCutHole;                                              // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowPreview;                                              // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFillSpans;                                                // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4JEU[0x5];                                     // 0x006B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PlaneCutToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PlaneCutOperatorFactory
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UPlaneCutOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_KR2C[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneCutTool*                               CutTool;                                                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EM4T[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PlaneCutOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PlaneCutTool
// 0x00E0 (FullSize[0x0170] - InheritedSize[0x0090])
class UPlaneCutTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_S1E7[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneCutToolProperties*                     BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAcceptOutputProperties*                     AcceptProperties;                                          // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     CutPlaneOrigin;                                            // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CLYL[0xC];                                     // 0x00B4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       CutPlaneOrientation;                                       // 0x00C0(0x0010) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00D0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                                               // 0x00E0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T7B8[0x68];                                    // 0x00F0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q5DA[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PlaneCutTool"));
		return ptr;
	}



	void Cut();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PositionPlaneGizmoBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PositionPlaneGizmoBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PositionPlaneGizmo
// 0x04E8 (FullSize[0x0520] - InheritedSize[0x0038])
class UPositionPlaneGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_BUI0[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                CenterBallShape;                                           // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           CenterBallMaterial;                                        // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q1YT[0x488];                                   // 0x0098(0x0488) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PositionPlaneGizmo"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
// 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData_I0E3[0x30];                                    // 0x0080(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PositionPlaneOnSceneInputBehavior"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProjectToTargetToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UProjectToTargetToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_57YT[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProjectToTargetToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RemeshMeshToolProperties
// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
class URemeshMeshToolProperties : public URemeshProperties
{
public:
	int                                                TargetTriangleCount;                                       // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingOperators_ERemeshSmoothingType             SmoothingType;                                             // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDiscardAttributes;                                        // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWireframe;                                            // 0x0076(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGroupColors;                                          // 0x0077(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingOperators_ERemeshType                      RemeshType;                                                // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CQI5[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RemeshIterations;                                          // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTargetEdgeLength;                                      // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7EDF[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetEdgeLength;                                          // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReproject;                                                // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HYFX[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RemeshMeshToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProjectToTargetToolProperties
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProjectToTargetToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RemeshMeshTool
// 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
class URemeshMeshTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_3TMR[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URemeshMeshToolProperties*                   BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshStatisticsProperties*                   MeshStatisticsProperties;                                  // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OETG[0x38];                                    // 0x00B0(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RemeshMeshTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ProjectToTargetTool
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UProjectToTargetTool : public URemeshMeshTool
{
public:
	unsigned char                                      UnknownData_WCOH[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ProjectToTargetTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RemeshMeshToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class URemeshMeshToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_RXSW[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RemeshMeshToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_9PF6[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EOcclusionCalculationUIMode      OcclusionTestMethod;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EOcclusionTriangleSamplingUIMode TriangleSampling;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QV1F[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             WindingIsoValue;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddRandomRays;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddTriangleSamples;                                        // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlySelfOcclude;                                          // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LET8[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RemoveOccludedTrianglesToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_T4NO[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class URemoveOccludedTrianglesOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_HD8I[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URemoveOccludedTrianglesTool*                Tool;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LATW[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RemoveOccludedTrianglesTool
// 0x00C0 (FullSize[0x0150] - InheritedSize[0x0090])
class URemoveOccludedTrianglesTool : public UMultiSelectionTool
{
public:
	class URemoveOccludedTrianglesToolProperties*      BasicProperties;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URemoveOccludedTrianglesAdvancedProperties*  AdvancedProperties;                                        // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UPreviewMesh*>                        PreviewCopies;                                             // 0x00B0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JQE6[0x90];                                    // 0x00C0(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RemoveOccludedTrianglesTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RevolveBoundaryToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class URevolveBoundaryToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_TO38[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RevolveBoundaryToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RevolveBoundaryOperatorFactory
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class URevolveBoundaryOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_45XN[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URevolveBoundaryTool*                        RevolveBoundaryTool;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RevolveBoundaryOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RevolveBoundaryToolProperties
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class URevolveBoundaryToolProperties : public URevolveProperties
{
public:
	bool                                               bDisplayOriginalMesh;                                      // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9QLD[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AxisOrigin;                                                // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AxisYaw;                                                   // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AxisPitch;                                                 // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_014O[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RevolveBoundaryToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshBoundaryToolBase
// 0x00C8 (FullSize[0x0150] - InheritedSize[0x0088])
class UMeshBoundaryToolBase : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_BEHM[0xB0];                                    // 0x0088(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                         // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USingleClickInputBehavior*                   LoopSelectClickBehavior;                                   // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GXZC[0x8];                                     // 0x0148(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshBoundaryToolBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.RevolveBoundaryTool
// 0x0060 (FullSize[0x01B0] - InheritedSize[0x0150])
class URevolveBoundaryTool : public UMeshBoundaryToolBase
{
public:
	unsigned char                                      UnknownData_CX92[0x10];                                    // 0x0150(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URevolveBoundaryToolProperties*              Settings;                                                  // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                             // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4P7O[0x30];                                    // 0x0180(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.RevolveBoundaryTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SeamSculptToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USeamSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SeamSculptToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SeamSculptToolProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class USeamSculptToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowWireframe;                                            // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitBackFaces;                                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZE3[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SeamSculptToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DynamicMeshBrushTool
// 0x0040 (FullSize[0x0200] - InheritedSize[0x01C0])
class UDynamicMeshBrushTool : public UBaseBrushTool
{
public:
	class UPreviewMesh*                                PreviewMesh;                                               // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9N1A[0x38];                                    // 0x01C8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DynamicMeshBrushTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SeamSculptTool
// 0x00E0 (FullSize[0x02E0] - InheritedSize[0x0200])
class USeamSculptTool : public UDynamicMeshBrushTool
{
public:
	class USeamSculptToolProperties*                   Settings;                                                  // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPreviewGeometry*                            PreviewGeom;                                               // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N9WL[0xD0];                                    // 0x0210(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SeamSculptTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SelfUnionMeshesToolProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bAttemptFixHoles;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowNewBoundaryEdges;                                     // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTrimFlaps;                                                // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MSN9[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             WindingNumberThreshold;                                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyUseFirstMeshMaterials;                                // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJKL[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SelfUnionMeshesToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SelfUnionMeshesTool
// 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{
public:
	class USelfUnionMeshesToolProperties*              Properties;                                                // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                           DrawnLineSet;                                              // 0x00F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2EXY[0x20];                                    // 0x0100(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SelfUnionMeshesTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SelfUnionMeshesToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SelfUnionMeshesToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SetCollisionGeometryToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USetCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SetCollisionGeometryToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SetCollisionGeometryToolProperties
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_ECollisionGeometryType           GeometryType;                                              // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1GP5[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_ESetCollisionGeometryInputMode   InputMode;                                                 // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E7SU[0x3];                                     // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bUseWorldSpace;                                            // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveContained;                                          // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableMaxCount;                                           // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KNS2[0x1];                                     // 0x006B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxCount;                                                  // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinThickness;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetectBoxes;                                              // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetectSpheres;                                            // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetectCapsules;                                           // 0x0076(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimplifyHulls;                                            // 0x0077(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HullTargetFaceCount;                                       // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimplifyPolygons;                                         // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D25K[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HullTolerance;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EProjectedHullAxis               SweepAxis;                                                 // 0x0084(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7H9C[0x3];                                     // 0x0084(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bAppendToExisting;                                         // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q1N3[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_ECollisionGeometryMode           SetCollisionType;                                          // 0x008C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HG5S[0x3];                                     // 0x0089(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SetCollisionGeometryToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SetCollisionGeometryTool
// 0x0130 (FullSize[0x01C0] - InheritedSize[0x0090])
class USetCollisionGeometryTool : public UMultiSelectionTool
{
public:
	class USetCollisionGeometryToolProperties*         Settings;                                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPhysicsObjectToolPropertySet*               CollisionProps;                                            // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          LineMaterial;                                              // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewGeometry*                            PreviewGeom;                                               // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EB6M[0x108];                                   // 0x00B8(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SetCollisionGeometryTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SmoothMeshToolProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_ESmoothMeshToolSmoothType        SmoothingType;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4AYN[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SmoothMeshToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.IterativeSmoothProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                              SmoothingPerStep;                                          // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Steps;                                                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSmoothBoundary;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZFG[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.IterativeSmoothProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.DiffusionSmoothProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                              SmoothingPerStep;                                          // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Steps;                                                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreserveUVs;                                              // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JXPW[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.DiffusionSmoothProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ImplicitSmoothProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                              SmoothSpeed;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Smoothness;                                                // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreserveUVs;                                              // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LD4P[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VolumeCorrection;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ImplicitSmoothProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SmoothWeightMapSetProperties
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{
public:
	float                                              MinSmoothMultiplier;                                       // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3OC0[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SmoothWeightMapSetProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SmoothMeshTool
// 0x0030 (FullSize[0x0430] - InheritedSize[0x0400])
class USmoothMeshTool : public UBaseMeshProcessingTool
{
public:
	class USmoothMeshToolProperties*                   SmoothProperties;                                          // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UIterativeSmoothProperties*                  IterativeProperties;                                       // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDiffusionSmoothProperties*                  DiffusionProperties;                                       // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImplicitSmoothProperties*                   ImplicitProperties;                                        // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmoothWeightMapSetProperties*               WeightMapProperties;                                       // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XYQ3[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SmoothMeshTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SmoothMeshToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SmoothMeshToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.TransformMeshesToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.TransformMeshesToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.TransformMeshesToolProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_ETransformMeshesTransformMode    TransformMode;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetPivot;                                                 // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableSnapDragging;                                       // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_ETransformMeshesSnapDragSource   SnapDragSource;                                            // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_ETransformMeshesSnapDragRotationMode RotationMode;                                              // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PB0G[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.TransformMeshesToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.TransformMeshesTool
// 0x00B0 (FullSize[0x0140] - InheritedSize[0x0090])
class UTransformMeshesTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_QY31[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformMeshesToolProperties*              TransformProps;                                            // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1B3J[0x10];                                    // 0x00A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTransformMeshesTarget>              ActiveGizmos;                                              // 0x00B0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_48YE[0x80];                                    // 0x00C0(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.TransformMeshesTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.UVProjectionToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UUVProjectionToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_CYVB[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.UVProjectionToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.UVProjectionToolProperties
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
public:
	ModelingOperators_EUVProjectionMethod              UVProjectionMethod;                                        // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q8UQ[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ProjectionPrimitiveScale;                                  // 0x0064(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CylinderProjectToTopOrBottomAngleThreshold;                // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UVScale;                                                   // 0x0074(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UVOffset;                                                  // 0x007C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpaceUVScale;                                        // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZ1X[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.UVProjectionToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.UVProjectionAdvancedProperties
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.UVProjectionAdvancedProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.UVProjectionOperatorFactory
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UUVProjectionOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_WH1Y[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUVProjectionTool*                           Tool;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9840[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.UVProjectionOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.GroupEdgeInsertionOperatorFactory
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGroupEdgeInsertionOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_16M4[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGroupEdgeInsertionTool*                     Tool;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.GroupEdgeInsertionOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.GroupEdgeInsertionTool
// 0x04C8 (FullSize[0x0550] - InheritedSize[0x0088])
class UGroupEdgeInsertionTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_GEFX[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGroupEdgeInsertionProperties*               Settings;                                                  // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JXDQ[0x4A8];                                   // 0x00A8(0x04A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.GroupEdgeInsertionTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.HoleFillToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHoleFillToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.HoleFillToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SmoothHoleFillProperties
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bConstrainToHoleInterior;                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RBPO[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RemeshingExteriorRegionWidth;                              // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SmoothingExteriorRegionWidth;                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SmoothingInteriorRegionWidth;                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorSmoothness;                                        // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G3GT[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             FillDensityScalar;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bProjectDuringRemesh;                                      // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O1YU[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SmoothHoleFillProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.HoleFillToolProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UHoleFillToolProperties : public UInteractiveToolPropertySet
{
public:
	ModelingOperators_EHoleFillOpFillType              FillType;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveIsolatedTriangles;                                  // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SCHM[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.HoleFillToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.HoleFillToolActions
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UHoleFillToolActions : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_N2F5[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.HoleFillToolActions"));
		return ptr;
	}



	void SelectAll();
	void Clear();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.HoleFillStatisticsProperties
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     InitialHoles;                                              // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SelectedHoles;                                             // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SuccessfulFills;                                           // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FailedFills;                                               // 0x0090(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RemainingHoles;                                            // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.HoleFillStatisticsProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.HoleFillOperatorFactory
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UHoleFillOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_0HPY[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHoleFillTool*                               FillTool;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.HoleFillOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.HoleFillTool
// 0x0158 (FullSize[0x01E0] - InheritedSize[0x0088])
class UHoleFillTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_6D96[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USmoothHoleFillProperties*                   SmoothHoleFillProperties;                                  // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHoleFillToolProperties*                     Properties;                                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHoleFillToolActions*                        Actions;                                                   // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHoleFillStatisticsProperties*               Statistics;                                                // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                         // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C051[0x118];                                   // 0x00C8(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.HoleFillTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshSculptBrushOpProps
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshSculptBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BaseKelvinletBrushOpProps
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                              Stiffness;                                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Incompressiblity;                                          // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BrushSteps;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_93UG[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BaseKelvinletBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ScaleKelvinletBrushOpProps
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ScaleKelvinletBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PullKelvinletBrushOpProps
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                              Falloff;                                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PullKelvinletBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SharpPullKelvinletBrushOpProps
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                              Falloff;                                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SharpPullKelvinletBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.TwistKelvinletBrushOpProps
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.TwistKelvinletBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshAnalysisProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     SurfaceArea;                                               // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Volume;                                                    // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshAnalysisProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshAttributePaintToolBuilder
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_3443[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshAttributePaintToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshAttributePaintToolProperties
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{
public:
	TArray<struct FName>                               Attributes;                                                // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int                                                SelectedAttribute;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QEQS[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AttributeName;                                             // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshAttributePaintToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshAttributePaintEditActions
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_WXBK[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshAttributePaintEditActions"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshAttributePaintTool
// 0x0430 (FullSize[0x0630] - InheritedSize[0x0200])
class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{
public:
	class UMeshAttributePaintToolProperties*           AttribProps;                                               // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y1C9[0x428];                                   // 0x0208(0x0428) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshAttributePaintTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.InflateBrushOpProps
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.InflateBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshInspectorToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshInspectorToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshInspectorProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bWireframe;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBoundaryEdges;                                            // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBowtieVertices;                                           // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPolygonBorders;                                           // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUVSeams;                                                  // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUVBowties;                                                // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalSeams;                                              // 0x0066(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalVectors;                                            // 0x0067(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTangentVectors;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J9GZ[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NormalLength;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TangentLength;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_94KV[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshInspectorProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshInspectorTool
// 0x00A0 (FullSize[0x0128] - InheritedSize[0x0088])
class UMeshInspectorTool : public USingleSelectionTool
{
public:
	class UMeshInspectorProperties*                    Settings;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PBD2[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                           DrawnLineSet;                                              // 0x00A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          DefaultMaterial;                                           // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MD1N[0x70];                                    // 0x00B8(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshInspectorTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.NewMeshMaterialProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	TWeakObjectPtr<class UMaterialInterface>           Material;                                                  // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UVScale;                                                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpaceUVScale;                                        // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWireframe;                                                // 0x006D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowExtendedOptions;                                      // 0x006E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SARG[0x1];                                     // 0x006F(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.NewMeshMaterialProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ExistingMeshMaterialProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_ESetMeshMaterialMode             MaterialMode;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XO4O[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CheckerDensity;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideMaterial;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                           // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ExistingMeshMaterialProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshEditingViewProperties
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowWireframe;                                            // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H5KS[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EMeshEditingMaterialModes        MaterialMode;                                              // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QBCY[0x3];                                     // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bFlatShading;                                              // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NTA1[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Color;                                                     // 0x006C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ILTS[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Image;                                                     // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshEditingViewProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MoveBrushOpProps
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_80YQ[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MoveBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PinchBrushOpProps
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPerpDamping;                                              // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X33S[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PinchBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BasePlaneBrushOpProps
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BasePlaneBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.PlaneBrushOpProps
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EPlaneBrushSideMode              WhichSide;                                                 // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4TQ9[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.PlaneBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ViewAlignedPlaneBrushOpProps
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EPlaneBrushSideMode              WhichSide;                                                 // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_903X[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ViewAlignedPlaneBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.FixedPlaneBrushOpProps
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EPlaneBrushSideMode              WhichSide;                                                 // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4OC[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.FixedPlaneBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.StandardSculptBrushOpProps
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.StandardSculptBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.ViewAlignedSculptBrushOpProps
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.ViewAlignedSculptBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SculptMaxBrushOpProps
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHeight;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseFixedHeight;                                           // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WJCL[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FixedHeight;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3PVV[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SculptMaxBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SculptBrushProperties
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class USculptBrushProperties : public UBrushBaseProperties
{
public:
	float                                              Depth;                                                     // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitBackFaces;                                             // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_178I[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Lazyness;                                                  // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowPerBrushProps;                                        // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J7O2[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SculptBrushProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.KelvinBrushProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UKelvinBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                              FalloffDistance;                                           // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Stiffness;                                                 // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Incompressiblity;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BrushSteps;                                                // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.KelvinBrushProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.WorkPlaneProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UWorkPlaneProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bPropertySetEnabled;                                       // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGizmo;                                                // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToGrid;                                               // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_01QF[0x1];                                     // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     position;                                                  // 0x0064(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       Rotation;                                                  // 0x0070(0x0010) (Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.WorkPlaneProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SculptMaxBrushProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                              MaxHeight;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFreezeCurrentHeight;                                      // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PGZN[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SculptMaxBrushProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshSelectionToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_A258[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshSelectionToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshSelectionToolActionPropertySet
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_9DVQ[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshSelectionToolActionPropertySet"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshSelectionEditActions
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshSelectionEditActions"));
		return ptr;
	}



	void Shrink();
	void SelectLargestComponentByTriCount();
	void SelectLargestComponentByArea();
	void SelectAll();
	void OptimizeSelection();
	void Invert();
	void Grow();
	void ExpandToConnected();
	void Clear();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshSelectionMeshEditActions
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshSelectionMeshEditActions"));
		return ptr;
	}



	void SeparateTriangles();
	void FlipNormals();
	void DisconnectTriangles();
	void DeleteTriangles();
	void CreatePolygroup();
	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshSelectionToolProperties
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EMeshSelectionToolPrimaryMode    SelectionMode;                                             // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HOA4[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AngleTolerance;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitBackFaces;                                             // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWireframe;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WSJ2[0x2];                                     // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EMeshFacesColorMode              FaceColorMode;                                             // 0x006C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JC3L[0x3];                                     // 0x006A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshSelectionToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshSelectionTool
// 0x02A0 (FullSize[0x04A0] - InheritedSize[0x0200])
class UMeshSelectionTool : public UDynamicMeshBrushTool
{
public:
	class UMeshSelectionToolProperties*                SelectionProps;                                            // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionEditActions*                   SelectionActions;                                          // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionToolActionPropertySet*         EditActions;                                               // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionSet*                           Selection;                                                 // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              SpawnedActors;                                             // 0x0220(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WP44[0x270];                                   // 0x0230(0x0270) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshSelectionTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.BaseSmoothBrushOpProps
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.BaseSmoothBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SmoothBrushOpProps
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreserveUVFlow;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F7LH[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SmoothBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SecondarySmoothBrushOpProps
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreserveUVFlow;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0FCU[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SecondarySmoothBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SmoothFillBrushOpProps
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreserveUVFlow;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UGBI[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SmoothFillBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.FlattenBrushOpProps
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EPlaneBrushSideMode              WhichSide;                                                 // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YTB6[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.FlattenBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.EraseBrushOpProps
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.EraseBrushOpProps"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshSpaceDeformerToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.SpaceDeformerOperatorFactory
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class USpaceDeformerOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_O0EB[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshSpaceDeformerTool*                      SpaceDeformerTool;                                         // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.SpaceDeformerOperatorFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshSpaceDeformerTool
// 0x0100 (FullSize[0x01C0] - InheritedSize[0x00C0])
class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{
public:
	MeshModelingTools_ENonlinearOperationType          SelectedOperationType;                                     // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OKI[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UpperBoundsInterval;                                       // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LowerBoundsInterval;                                       // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ModifierPercent;                                           // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YIAW[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                               // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G0AM[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_82FP[0x20];                                    // 0x00F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     GizmoCenter;                                               // 0x0110(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TESR[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       GizmoOrientation;                                          // 0x0120(0x0010) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UIntervalGizmo*                              IntervalGizmo;                                             // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                             TransformGizmo;                                            // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                             TransformProxy;                                            // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*             UpIntervalSource;                                          // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*             DownIntervalSource;                                        // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*             ForwardIntervalSource;                                     // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J4QH[0x60];                                    // 0x0160(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshSpaceDeformerTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshStatisticsProperties
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     Mesh;                                                      // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UV;                                                        // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Attributes;                                                // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshStatisticsProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.MeshVertexSculptToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.MeshVertexSculptToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.VertexBrushSculptProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EMeshVertexSculptBrushType       PrimaryBrushType;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMeshSculptFalloffType           PrimaryFalloffType;                                        // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFreezeTarget;                                             // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSmoothErases;                                             // 0x0063(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P9YK[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.VertexBrushSculptProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.UVProjectionTool
// 0x0190 (FullSize[0x0220] - InheritedSize[0x0090])
class UUVProjectionTool : public UMultiSelectionTool
{
public:
	class UUVProjectionToolProperties*                 BasicProperties;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUVProjectionAdvancedProperties*             AdvancedProperties;                                        // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                          // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00A8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                           // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTransformGizmo*>                     TransformGizmos;                                           // 0x00C0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UTransformProxy*>                     TransformProxies;                                          // 0x00D0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7OAQ[0x140];                                   // 0x00E0(0x0140) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.UVProjectionTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.VoxelBlendMeshesToolProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	double                                             BlendPower;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             BlendFalloff;                                              // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSolidifyInput;                                            // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveInternalsAfterSolidify;                             // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JRWT[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             OffsetSolidifySurface;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.VoxelBlendMeshesToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.VoxelBlendMeshesTool
// 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
class UVoxelBlendMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelBlendMeshesToolProperties*             BlendProperties;                                           // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.VoxelBlendMeshesTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.VoxelBlendMeshesToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.VoxelBlendMeshesToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.VoxelMorphologyMeshesToolProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	ModelingOperators_EMorphologyOperation             Operation;                                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SGOT[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             Distance;                                                  // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSolidifyInput;                                            // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveInternalsAfterSolidify;                             // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YVM5[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             OffsetSolidifySurface;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.VoxelMorphologyMeshesToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.VoxelMorphologyMeshesTool
// 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelMorphologyMeshesToolProperties*        MorphologyProperties;                                      // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.VoxelMorphologyMeshesTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.VoxelSolidifyMeshesToolProperties
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	double                                             WindingThreshold;                                          // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             ExtendBounds;                                              // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SurfaceSearchSteps;                                        // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSolidAtBoundaries;                                        // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMakeOffsetSurfaces;                                       // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TVGZ[0x2];                                     // 0x0076(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             OffsetThickness;                                           // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.VoxelSolidifyMeshesToolProperties"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.VoxelSolidifyMeshesTool
// 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelSolidifyMeshesToolProperties*          SolidifyProperties;                                        // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.VoxelSolidifyMeshesTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.WeldMeshEdgesToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.WeldMeshEdgesToolBuilder"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MeshModelingTools.WeldMeshEdgesTool
// 0x0278 (FullSize[0x0300] - InheritedSize[0x0088])
class UWeldMeshEdgesTool : public USingleSelectionTool
{
public:
	float                                              Tolerance;                                                 // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOnlyUnique;                                               // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MEYZ[0x273];                                   // 0x008D(0x0273) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MeshModelingTools.WeldMeshEdgesTool"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
