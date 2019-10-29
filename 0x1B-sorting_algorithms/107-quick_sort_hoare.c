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
	int pivot, p;

	p = lo + (hi - lo) / 2;
	pivot = array[p];
	while (1)
	{
		while (array[lo] < pivot)
			lo = lo + 1;
		while (array[hi] > pivot)
			hi = hi - 1;
	        if (lo >= hi)
		{
			return (hi);
		}
		swap(&array[lo], &array[hi]);
		print_array(array, size);
		lo = lo + 1;
		hi = hi - 1;
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
