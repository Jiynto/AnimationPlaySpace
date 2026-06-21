// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimationUtilityFunctionLibrary.h"

#include "LocomotionAnimationSet.h"
#include "Animation/AnimCurveCompressionCodec_UniformIndexable.h"

UAnimSequence* UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(const float direction, const float speed, struct FLocomotionAnimationSubSet locomotionAnimSet)
{
	if (!locomotionAnimSet.bUseBlendSpace)
	{
		FLocomotionAnimationSequenceSet sequenceSet;
		if (locomotionAnimSet.TryGetSequenceSetByDirection(direction, sequenceSet))
		{
			if (sequenceSet.Sequences.Contains(speed))
			{
				return *sequenceSet.Sequences.Find(speed);
			}
		}
	
	}
	return nullptr;
}




/*
UAnimSequence* UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(const float direction, const float speed, struct FLocomotionAnimationSubSet locomotionAnimSet)
{

	if (!locomotionAnimSet.bUseBlendSpace)
	{
		TArray<FLocomotionAnimationSequenceSet> sequenceSets = locomotionAnimSet.SequencesSets;
		sequenceSets.Sort([](const FLocomotionAnimationSequenceSet& i, const FLocomotionAnimationSequenceSet& j)
		{
			return i.Direction < j.Direction;
		});
		
		
		FLocomotionAnimationSequenceSet* animationData = locomotionAnimSet.SequencesSets.FindByPredicate([&direction](const FLocomotionAnimationSequenceSet& data)
		{
			return data.Direction == direction;
		});
	
		if (animationData->Sequences.Contains(speed))
		{
			return *animationData->Sequences.Find(speed);
		}
	}
	return nullptr;
}
*/









float UAnimationUtilityFunctionLibrary::GetKeyFromAnimationCurve(const UAnimSequenceBase* InAnimSequence,
													const float& InValue, FName InCurveName, bool bDescendingCurve)
{
	if (!IsValid(InAnimSequence))
	{
		return 0.f;
	}
	
	FAnimCurveBufferAccess BufferCurveAccess(InAnimSequence, InCurveName);
	if (BufferCurveAccess.IsValid())
	{
		const int32 NumKeys = BufferCurveAccess.GetNumSamples();
		if (NumKeys < 2)
		{
			return 0.f;
		}

		// Some assumptions: 
		// - keys have unique values, so for a given value, it maps to a single position on the timeline of the animation.
		// - key values are sorted in increasing order.

		int32 First = 1;
		int32 Last = NumKeys - 1;
		int32 Count = Last - First;

		while (Count > 0)
		{
			int32 Step = Count / 2;
			int32 Middle = First + Step;

			bool bPastInValue = false;
			if (bDescendingCurve)
			{
				if (InValue < BufferCurveAccess.GetValue(Middle))
				{
					bPastInValue = true;
				}
			}
			else
			{
				if (InValue > BufferCurveAccess.GetValue(Middle))
				{
					bPastInValue = true;
				}
			}
			
			if (bPastInValue)
			{
				First = Middle + 1;
				Count -= Step + 1;
			}
			else
			{
				Count = Step;
			}
		}

		const float KeyAValue = BufferCurveAccess.GetValue(First - 1);
		const float KeyBValue = BufferCurveAccess.GetValue(First);
		const float Diff = KeyBValue - KeyAValue;
		const float Alpha = !FMath::IsNearlyZero(Diff) ? ((InValue - KeyAValue) / Diff) : 0.f;

		const float KeyATime = BufferCurveAccess.GetTime(First - 1);
		const float KeyBTime = BufferCurveAccess.GetTime(First);
		return FMath::Lerp(KeyATime, KeyBTime, Alpha);
	}

	return 0.f;
}


float UAnimationUtilityFunctionLibrary::GetKeyFromAnimationCurveUnsorted(const UAnimSequenceBase* InAnimSequence,
															const float& InValue, FName InCurveName)
{
	
	if (!IsValid(InAnimSequence))
	{
		return 0.f;
	}
	
	FAnimCurveBufferAccess BufferCurveAccess(InAnimSequence, InCurveName);
	if (BufferCurveAccess.IsValid())
	{
		const int32 NumKeys = BufferCurveAccess.GetNumSamples();
		if (NumKeys < 2)
		{
			return 0.f;
		}

		// create a map of the original index value pairs.
		TMultiMap<int32, int32> keyValuePairs;
		for (int32 i = 0; i < NumKeys; i++)
		{
			keyValuePairs.Add(BufferCurveAccess.GetValue(i), i);
		}
		
		// stable sort so that any equal values will be ordered based on which appears earlier in the curve.
		keyValuePairs.KeyStableSort([](const int32& A, const int32& B)
		{
			return A < B;
		});
	
		TArray<int32> sortedValues;
		keyValuePairs.GetKeys(sortedValues);
	
		// now perform a binary search with the sorted values.
	
		int32 First = 1;
		int32 Last = NumKeys - 1;
		int32 Count = Last - First;

		while (Count > 0)
		{
			int32 Step = Count / 2;
			int32 Middle = First + Step;

			if (InValue > sortedValues[Middle])
			{
				First = Middle + 1;
				Count -= Step + 1;
			}
			else
			{
				Count = Step;
			}
		}
		
		// we only care about the first, but I don't know how you get just the first instance from a multimap.
		TArray<int32> indicesWithValue;
		keyValuePairs.MultiFind(sortedValues[First],indicesWithValue, true);
		First = indicesWithValue[0];
		
		
		const float KeyAValue = BufferCurveAccess.GetValue(First - 1);
		const float KeyBValue = BufferCurveAccess.GetValue(First);
		const float Diff = KeyBValue - KeyAValue;
		const float Alpha = !FMath::IsNearlyZero(Diff) ? ((InValue - KeyAValue) / Diff) : 0.f;

		const float KeyATime = BufferCurveAccess.GetTime(First - 1);
		const float KeyBTime = BufferCurveAccess.GetTime(First);
		return FMath::Lerp(KeyATime, KeyBTime, Alpha);
	}

	return 0.f;
}