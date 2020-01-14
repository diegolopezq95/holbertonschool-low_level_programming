#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * _min - return the min value
 * @size: number of elements in array
 * @jmp: jump
 * Return: min value
 */
int _min(size_t jmp, size_t size)
{
	size_t mn;

	if (jmp < size)
	{
		mn = jmp - 1;
		return (mn);
	}
	else
	{
		mn = size - 1;
		return (mn);
	}
}
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jmp = sqrt(size), prev = 0, i = 0, j = 0, m = 0, n = 0, w = 0;

	m = jmp;
	while (_min(jmp, size) - 1 < value)
	{ printf("Value checked array[%lu] = [%lu]\n", prev, prev);
		i = size - 1, w = prev, prev = jmp, jmp += sqrt(size);
		if (prev >= size)
		{ printf("Value found between indexes [%lu] and [%lu]\n", w, prev);
			for (n = prev - m; n < i; n++)
				printf("Value checked array[%lu] = [%lu]\n", n, n);
			printf("Value checked array[%lu] = [%lu]\n", i, i);
			return (-1);
		}
		if ((int)prev == value)
		{
			printf("Value found between indexes [%lu] and [%d]\n", prev - m, value);
			for (n = prev - m; n < prev; n++)
			{
				printf("Value checked array[%lu] = [%lu]\n", n, n);
			}
		}
	}
	while (array[prev] < value)
	{ printf("Value checked array[%lu] = [%lu]\n", prev, prev);
		if ((int)prev < value)
		{ printf("Value found between indexes [%lu] and [%lu]\n", prev, jmp);
			for (j = 0; (int)j < value; j++)
				printf("Value checked array[%lu] = [%lu]\n", j, j);
		}
		prev++;
		if ((int)prev == _min(jmp, size))
			return (-1);
	}
	if (array[prev] == value)
	{ printf("Value checked array[%lu] = [%lu]\n", prev, prev);
		if (value == 0)
			printf("Value found between indexes [%d] and [%lu]\n", 0, m);
		return (prev);
	}
	else
		printf("Value checked array[%lu] = [%lu]\n", prev, prev);
	return (-1);
}
