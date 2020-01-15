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
	size_t jmp, prev = 0;
	int i = 0;

	jmp = sqrt(size);
	if (array == NULL)
		return (-1);
	while (prev < size)
	{
		if (array[prev] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n",prev, array[prev]);
		prev += jmp;
	}
	i = prev - jmp;
	if (prev > 0 && i >= 0)
		printf("Value found between indexes [%d] and [%lu]\n", i, prev);
	while (i < (int)size && i <= (int)prev)
	{
		if (i >= 0)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == 0)
		{
			printf("Value checked array[%lu] = [%lu]\n", prev, prev);
			if (prev == 0)
				printf("Value found between indexes [%lu] and [%lu]\n", prev, jmp);
			return (prev);
		}
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
