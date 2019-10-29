#include "sort.h"

/**
 * hoare_part - hoare partition algorithm.
 * @array: array of integers
 * @size: size of the array
 * @hi: last value
 * @lo: first value
 * Return: integer.
 */
int hoare_part(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	int pivot;
	ssize_t i, j;

	i = lo - 1;
	j = hi + 1;
	pivot = array[hi];
	while (1)
	{
		do {
			i = i + 1;
		} while (array[i] < pivot);
		do {
			j = j - 1;
		} while (array[j] > pivot);
		if (i > j)
		{
			return (j);
		}
		if (array[i] != array[j])
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
}


/**
 * quick_sort_easy_hoare - recurtion algorithm.
 * @array: array of integers
 * @size: size of the array
 * @hi: last value
 * @lo: first value
 * Return: Nothing.
 */
void quick_sort_easy_hoare(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t pi;

	if (lo < hi)
	{
		pi = hoare_part(array, lo, hi, size);
		quick_sort_easy_hoare(array, lo, pi, size);
		quick_sort_easy_hoare(array, pi + 1, hi, size);
	}
}

/**
 * quick_sort_hoare - Quick sort algorithm.
 * @array: array of integers
 * @size: size of the array
 * Return: Nothing.
 */
void quick_sort_hoare(int *array, size_t size)
{
	ssize_t lo = 0;
	ssize_t hi = size - 1;

	if (array == NULL || size < 2)
		return;
	quick_sort_easy_hoare(array, lo, hi, size);
}

/**
 * swap - swap function.
 * @a: pointer to array in position a
 * @b: pointer to array in position b
 * Return: Nothing.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
