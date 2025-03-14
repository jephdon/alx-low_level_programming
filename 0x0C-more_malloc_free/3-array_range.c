#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing min to max values
 * @min: parameter
 * @max: parameter
 *
 * Return: pointer (success), NULL otherwise
 */
int *array_range(int min, int max)
{
	int i = 0, b = max - min + 1;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(b * sizeof(int));
	if (p == NULL)
		return (NULL);
	i = min;
	while (i <= max)
	{
		p[i] = i;
		i++;
	}
	return (p);
}
