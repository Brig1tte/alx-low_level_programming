#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free a 2 dimensional grid memory
 * @grid: 2 dimensional grid
 * @height: height dimension of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
