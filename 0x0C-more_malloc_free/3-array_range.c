#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @max: integer
 * @min: integer
 * Return: .
 */
int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc((max - min + 1) * sizeof(int));
	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; min <= max; min++, i++)
	{
		a[i] = min;
	}
	return (a);
}
