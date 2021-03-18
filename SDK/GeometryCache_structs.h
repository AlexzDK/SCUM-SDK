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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// 0x000C
struct FGeometryCacheMeshBatchInfo
{
	unsigned char                                      UnknownData_QIWV[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GeometryCache.TrackRenderData
// 0x0070
struct FTrackRenderData
{
	unsigned char                                      UnknownData_L13I[0x70];                                    // 0x0000(0x0070) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GeometryCache.GeometryCacheMeshData
// 0x00A8
struct FGeometryCacheMeshData
{
	unsigned char                                      UnknownData_EU2R[0xA8];                                    // 0x0000(0x00A8) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GeometryCache.GeometryCacheVertexInfo
// 0x0008
struct FGeometryCacheVertexInfo
{
	unsigned char                                      UnknownData_MKZK[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
