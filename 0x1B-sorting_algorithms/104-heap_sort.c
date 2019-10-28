#include "sort.h"

/**
 * heap_sort - heap sort algorithm
 * @array: array of integers
 * @size: size of the array
 * Return: Nothing.
 */
void heap_sort(int *array, size_t size)
{
	int end;

	heapify(array, size);
	end = size - 1;
	while (end > 0)
	{
		swap(&array[end], &array[0]);
		print_array(array, size);
		end = end - 1;
		sift_down(array, 0, end, size);
	}
}

void heapify(int *array, size_t size)
{
	int start;

	start = (size - 2) / 2;
	while (start >= 0)
	{
		sift_down(array, start, size - 1, size);
		start = start - 1;
	}
}

void sift_down(int *array, int start, int end, size_t size)
{
	int root, child;

	root = start;
	while ((root * 2) + 1 <= end)
	{
		child = root * 2 + 1;
		if (child + 1 <= end && array[child] < array[child + 1])
			child = child + 1;
		if (array[root] < array[child])
		{
			swap(&array[root], &array[child]);
			print_array(array, size);
			root = child;
		}
		else
			return;
	}
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
