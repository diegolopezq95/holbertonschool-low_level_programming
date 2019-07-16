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
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(width * sizeof(int));
		if (a[i] == 0)
		{
			for (; i >= 0; i++)
			{
				free(a[i]);
			}
			free(a);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
