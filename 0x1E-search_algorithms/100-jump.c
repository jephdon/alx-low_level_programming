#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in sorted aray of integers
 * using Jump Search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if not
 * found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i, start, end;

	if (array == NULL)
		return (-1);
	/* Jump through the array to find the section */
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}
	/* If prev overshoots, adjust it to the last index */
	if (prev >= size)
		prev = size - 1;
	/* Define the section */
	start = (prev < step) ? 0 : prev - step;
	end = (prev < size) ? prev : size - 1;
	/* Print the section */
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	/* Check each element in the section */
	i = start;
	while (i <= end && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
