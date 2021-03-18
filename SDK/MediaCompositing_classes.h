﻿#pragma once

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

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_MM0H[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MediaCompositing.MovieSceneMediaSection
// 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	class UMediaSource*                                MediaSource;                                               // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLooping;                                                  // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5US1[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFrameNumber                                StartFrameOffset;                                          // 0x00F4(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaTexture*                               MediaTexture;                                              // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundComponent*                        MediaSoundComponent;                                       // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseExternalMediaPlayer;                                   // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1M2F[0x7];                                     // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaPlayer*                                ExternalMediaPlayer;                                       // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MediaCompositing.MovieSceneMediaSection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
public:
	class UMediaSource*                                MediaSource;                                               // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3VVQ[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MediaCompositing.MovieSceneMediaPlayerPropertySection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MediaCompositing.MovieSceneMediaTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_4V6E[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  MediaSections;                                             // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MediaCompositing.MovieSceneMediaTrack"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif