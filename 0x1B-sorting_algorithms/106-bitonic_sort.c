#include "sort.h"

/**
 * hoare_part - hoare partition algorithm.
 * @array: array of integers
 * @size: size of the array
 * @hi: last value
 * @lo: first value
 * Return: integer.
 */
void compAndSwap(int *array, int i, int j, int dir, size_t size) 
{
	(void)size;

	if (dir == (array[i] > array[j]))
	{
		swap(&array[i], &array[j]);
	}
}
void bitonicMerge(int *array, int low, int num, int dir, size_t size) 
{
	int k = num / 2;
	int i = low;

	if (num > 1)
	{
		for (i = low; i < low + k; i++)
			compAndSwap(array, i, i + k, dir, size);
		bitonicMerge(array, low, k, dir, size);
	        bitonicMerge(array, low + k, k, dir, size);
	}
}
void bitonicSort(int *array, int low, int num, int dir, size_t size) 
{
	if (num > 1)
	{
		int k = num / 2;

		if (dir == 1)
		{
			printf("Merging [%i/%i] (UP):\n", num, (int)size);
		}
		else
			printf("Merging [%i/%i] (DOWN):\n", num, (int)size);
		print_array(array, num);
		bitonicSort(array, low, k, 1, size);
		bitonicSort(array, low + k, k, 0, size);
		bitonicMerge(array, low, num, dir, size);
		if (dir == 1)
		{
			printf("Result [%i/%i] (UP):\n", num, (int)size);
		}
		else
			printf("Result [%i/%i] (DOWN):\n", num, (int)size);
		print_array(array, num);
	}
}
void bitonic_sort(int *array, size_t size)
{
	int up = 1;

	bitonicSort(array, 0, size, up, size); 
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
