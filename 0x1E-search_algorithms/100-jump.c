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
	size_t jump = sqrt(size); /* Calculate the jump step */
	size_t prev = 0;	  /* Previous jump position */
	size_t current;		  /* Current jump position */
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		current = prev + jump;
		if (current >= size)
			current = size - 1; /* Dont go past the end */
		if (array[current] >= value || current == size - 1)
			break;
		prev += jump;
	}
	/* Print the block where value might be */
	printf("Value found between index [%lu] and [%lu]\n", prev, current);
	while (i <= current && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
