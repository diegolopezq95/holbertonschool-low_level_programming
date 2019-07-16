#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: pointer to a pointer.
 * @height: rows int value.
 * Return:.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
	{
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
