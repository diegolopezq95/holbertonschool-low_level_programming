#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	int lo, hi;
	size_t mid;
	double mid_d;

	lo = 0;
	hi = (int)size - 1;
	if (array == NULL)
	{
		return (-1);
	}
	while ((array[hi] != array[lo]))
	{
		mid_d = lo + (((double)(hi - lo) /
			       (array[hi] - array[lo])) * (value - array[lo]));
		mid = (size_t)mid_d;
		if (mid >= size || mid_d < 0)
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			return (-1);
		}
		printf("Value checked array[%lu] = [%i]\n", mid, array[mid]);
		if (array[mid] < value)
		{
			lo = mid + 1;
		}
		else if (array[mid] > value)
		{
			hi = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	if (value == array[lo])
	{
		return (lo);
	}
	else
		return (-1);
}
