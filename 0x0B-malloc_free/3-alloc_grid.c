#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @height: rows.
 * @width: columns.
 * Return:.
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **) malloc(height * sizeof(int *));
	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
