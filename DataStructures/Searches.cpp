
#include "Searches.h"
#include <stdexcept>

//------------------------------------------------------------------------------
/// Returns the index of the element being searched for is presewnt.
/// Otherwise, returns -1
int BinarySearch(int * array, size_t startIndex, size_t endIndex, int key)
{
	// Check if we have reached the end of our search
	if (endIndex >= startIndex)
	{
		size_t middleIndex = (startIndex + endIndex) / 2;

		if (array[middleIndex] == key)
		{
			return middleIndex;
		}

		// Check left of middle
		if (array[middleIndex] > key)
		{
			// Overflow protection
			if (middleIndex == std::numeric_limits<size_t>::min())
			{
				return -1;
			}

			return BinarySearch(array, startIndex, middleIndex - 1, key);
		}

		// Check right of middle
		if (array[middleIndex] < key)
		{
			// Overflow protection
			if (middleIndex == std::numeric_limits<size_t>::max())
			{
				return -1;
			}

			return BinarySearch(array, middleIndex + 1, endIndex, key);
		}
	}

	return -1;
}

