#include "sort.h"

/**
 * check_swap - swap if ascending or descending
 * @array: array of integers
 * @size: size of the array
 * @i: index position i
 * @j: index position i + k
 * @dir: direction = 1 if ascending, 0 if descending
 * Return: Nothing.
 */
void check_swap(int *array, int i, int j, int dir, size_t size)
{
	(void)size;

	if (dir == (array[i] > array[j]))
	{
		swap(&array[i], &array[j]);
	}
}
/**
 * bitonic_merge - recursively sorts a bitonic sequence
 * @array: array of integers
 * @size: size of the array
 * @lo: index position lo
 * @num: num of elements to be sorted
 * @dir: direction = 1 if ascending, 0 if descending
 * Return: Nothing.
 */
void bitonic_merge(int *array, int lo, int num, int dir, size_t size)
{
	int k = num / 2;
	int i = lo;

	if (num > 1)
	{
		for (i = lo; i < lo + k; i++)
			check_swap(array, i, i + k, dir, size);
		bitonic_merge(array, lo, k, dir, size);
		bitonic_merge(array, lo + k, k, dir, size);
	}
}
/**
 * bitonic_sort algorithm - produces a bitonic sequence by recursively sorting
 * @array: array of integers
 * @size: size of the array
 * @lo: index position lo
 * @num: num of elements to be sorted
 * @dir: direction = 1 if ascending, 0 if descending
 * Return: Nothing.
 */
void bitonic_sort_algorithm(int *array, int lo, int num, int dir, size_t size)
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
		bitonic_sort_algorithm(array, lo, k, 1, size);
		bitonic_sort_algorithm(array, lo + k, k, 0, size);
		bitonic_merge(array, lo, num, dir, size);
		if (dir == 1)
		{
			printf("Result [%i/%i] (UP):\n", num, (int)size);
		}
		else
			printf("Result [%i/%i] (DOWN):\n", num, (int)size);
		print_array(array, num);
	}
}

/**
 * bitonic_sort - sort the entire array
 * @array: array of integers
 * @size: size of the array
 * Return: Nothing.
 */
void bitonic_sort(int *array, size_t size)
{
	int up = 1;
	int lo = 0;

	bitonic_sort_algorithm(array, lo, size, up, size);
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
