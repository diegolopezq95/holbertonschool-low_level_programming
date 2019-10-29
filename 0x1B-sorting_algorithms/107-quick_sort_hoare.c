#include "sort.h"

/**
 * hoare_part - hoare partition algorithm.
 * @array: array of integers
 * @size: size of the array
 * @hi: last value
 * @lo: first value
 * Return: integer.
 */
int hoare_part(int *array, int lo, int hi, size_t size)
{
	int pivot, i, j;

	i = lo - 1;
	j = hi + 1;
	pivot = array[lo];
	while (1)
	{
		do {
			i = i + 1;
		} while (array[i] < pivot);
		do {
			j = j - 1;
		} while (array[j] > pivot);
		if (i >= j)
		{
			return (j);
		}
		swap(&array[i], &array[j]);
		print_array(array, size);
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
void quick_sort_easy_hoare(int *array, int lo, int hi, size_t size)
{
	int pi;

	if (lo >= hi)
		return;
	pi = hoare_part(array, lo, hi, size);
	quick_sort_easy_hoare(array, lo, pi, size);
	quick_sort_easy_hoare(array, pi + 1, hi, size);
}

/**
 * quick_sort_hoare - Quick sort algorithm.
 * @array: array of integers
 * @size: size of the array
 * Return: Nothing.
 */
void quick_sort_hoare(int *array, size_t size)
{
	size_t lo, hi;

	if (!array || size < 2)
		return;
	hi = size - 1;
	lo = 0;
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
