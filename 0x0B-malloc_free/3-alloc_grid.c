#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimentional array of integers
 * @width: parameter
 * @height: parameter
 *
 * Return: pointer (success), NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **p;

	if (width == 0 || height == 0)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	while (i < height)
	{
		j = 0;
		p[i] = malloc(width * sizeof(int));
		if (p == NULL)
		{
			while (j < i)
			{
				free(p[j]);
				j++;
			}
			free(p);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
