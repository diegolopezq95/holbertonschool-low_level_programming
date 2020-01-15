#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t lo, hi;

	lo = 0;
	hi = size - 1;
	if (array == NULL)
		return (-1);
	return (binary_search_recursive(array, lo, hi, value));
}
/**
 * binary_search_recursive - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @lo: initial index
 * @hi: last index
 * @value: value to search for
 * Return: first index where value is located
 */
int binary_search_recursive(int *array, size_t lo, size_t hi, int value)
{
	size_t i = 0, j;

	if (lo <= hi)
	{
		i = (lo + hi) / 2;
		printf("Searching in array: ");
		for (j = lo; j <= hi; j++)
			if (j < hi)
				printf("%d, ", array[j]);
			else
				printf("%d", array[j]);
		printf("\n");
		if (array[i] < value)
		{
			return (binary_search_recursive(array, i + 1, hi, value));
		}
		else if (array[i] > value)
		{
			return (binary_search_recursive(array, lo, i - 1, value));
		}
		else if (array[i] == value)
		{
			hi = i;
			if (array[lo] == array[hi])
				return (lo);
			else
				return (binary_search_recursive(array, lo, hi, value));
		}
	}
	return (-1);
}
