// Fill out your copyright notice in the Description page of Project Settings.


#include "LocomotionAnimationSet.h"

bool FLocomotionAnimationSubSet::TryGetSequenceSetByDirection(float direction, FLocomotionAnimationSequenceSet& result) const
{
	if (SequencesSets.IsEmpty())
	{
		return false;
	}
	
	TArray<FLocomotionAnimationSequenceSet> sequenceSets = SequencesSets;
	sequenceSets.Sort([](const FLocomotionAnimationSequenceSet& i, const FLocomotionAnimationSequenceSet& j)
	{
		return i.Direction < j.Direction;
	});
	
	FLocomotionAnimationSequenceSet* resultptr = &sequenceSets[0];
	
	if (sequenceSets.Num() > 1)
	{
		int low = 0;
		int high = sequenceSets.Num();
	
		while (low <= high)
		{
			int mid = low + (high - low) / 2;
		
			if (FMath::Abs(sequenceSets[mid].Direction - direction) < FMath::Abs(resultptr->Direction - direction))
			{
				resultptr = &sequenceSets[mid];
			}
		
			if (sequenceSets[mid].Direction == direction) {
				result = sequenceSets[mid];
				return true;
			}
			else if (sequenceSets[mid].Direction < direction) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
	}
	
	if(resultptr != nullptr)
	{
		result = *resultptr;
		return true;
	}
	return false;
}
