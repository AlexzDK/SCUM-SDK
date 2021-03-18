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
// Enums
//---------------------------------------------------------------------------

// Enum MeshDescription.EComputeNTBsOptions
enum class MeshDescription_EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None      = 0,
	EComputeNTBsOptions__Normals   = 1,
	EComputeNTBsOptions__Tangents  = 2,
	EComputeNTBsOptions__WeightedNTBs = 3,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshDescription.ElementID
// 0x0004
struct FElementID
{
	int                                                IDValue;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MeshDescription.EdgeID
// 0x0000 (0x0004 - 0x0004)
struct FEdgeID : public FElementID
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MeshDescription.TriangleID
// 0x0000 (0x0004 - 0x0004)
struct FTriangleID : public FElementID
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MeshDescription.PolygonGroupID
// 0x0000 (0x0004 - 0x0004)
struct FPolygonGroupID : public FElementID
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MeshDescription.PolygonID
// 0x0000 (0x0004 - 0x0004)
struct FPolygonID : public FElementID
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MeshDescription.VertexID
// 0x0000 (0x0004 - 0x0004)
struct FVertexID : public FElementID
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MeshDescription.VertexInstanceID
// 0x0000 (0x0004 - 0x0004)
struct FVertexInstanceID : public FElementID
{

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
