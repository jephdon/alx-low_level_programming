#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 D grid previously created by alloc_grid function
 * @grid: 2 D grid
 * @height: size
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
