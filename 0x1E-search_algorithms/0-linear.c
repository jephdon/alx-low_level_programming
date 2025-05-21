#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The value index, or -1 if value not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
