#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 *@grid: rows of matrix
 *@height: columns of string
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
