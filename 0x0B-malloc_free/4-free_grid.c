#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: Araay to be freed
 * @height: Height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
