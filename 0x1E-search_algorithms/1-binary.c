#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a soerted array
 * using binary search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements  in the array
 * @value: The value to search for
 *
 * Return: The value index, or -1 if value not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;		/* Start of the search space */
	size_t high = size - 1; /* End of the search space */
	size_t mid;		/* Middle index */
	size_t i;		/* For printing the array */

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		/* Print the current part of the array we're searching */
		printf("Searching in array: ");
		i = low;
		while (i <= high)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
			i++;
		}
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
