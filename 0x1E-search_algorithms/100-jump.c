#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jmp = sqrt(size), prev = 0, i = 0, j = 0, m = 0, n = 0;

	m = jmp;
	while (array[MIN(jmp, size) - 1] < value)
	{ printf("Value checked array[%lu] = [%lu]\n", prev, prev);
		i = prev, prev = jmp, jmp += sqrt(size);
		if (prev >= size)
		{ printf("Value found between indexes [%lu] and [%lu]\n", i, prev);
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
		if (prev == MIN(jmp, size))
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
