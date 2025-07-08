#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to the grid to be freed
 * @height: height of the grid
 *
 * Description: This function frees the memory allocated
 * for a 2D array of integers.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
