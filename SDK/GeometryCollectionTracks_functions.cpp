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

void FMovieSceneGeometryCollectionParams::AfterRead()
{
}

void FMovieSceneGeometryCollectionParams::BeforeDelete()
{
}

void FMovieSceneGeometryCollectionSectionTemplateParameters::AfterRead()
{
	FMovieSceneGeometryCollectionParams::AfterRead();

}

void FMovieSceneGeometryCollectionSectionTemplateParameters::BeforeDelete()
{
	FMovieSceneGeometryCollectionParams::BeforeDelete();

}

void FMovieSceneGeometryCollectionSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneGeometryCollectionSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void UMovieSceneGeometryCollectionTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneGeometryCollectionTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneGeometryCollectionSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneGeometryCollectionSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
