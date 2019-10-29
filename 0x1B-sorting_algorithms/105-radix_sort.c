#include "sort.h"
/**
 * getmax - get max value (Less significant digit)
 * @array: pointer to array
 * @size: size of the array
 * Return: max value
 **/
int getmax(int *array, size_t size)
{
	int max;
	size_t i;

	max = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
 * countsort - counting sort
 * @array: pointer to array
 * @size: size of the array
 * @signum: less significal number
 **/
void countsort(int *array, int size, int signum)
{
	int *count, *output, i, max;

	max = getmax(array, size);
	count = malloc((max + 1) * sizeof(size_t));
	output = malloc(size * sizeof(size_t));
	if (count == NULL)
	{
		free(count);
		return;
	}
	if (output == NULL)
	{
		free(output);
		return;
	}
	for (i = 0; i <= max; ++i)
		count[i] = 0;
	for (i = 0; i < (int)size; i++)
		count[(array[i] / signum) % 10] += 1;
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	for (i = size - 1; i >= 0; i--)
	{
		output[count[(array[i] / signum) % 10] - 1] = array[i];
		count[(array[i] / signum) % 10]--;
	}
	for (i = 0; i < (int)size; i++)
		array[i] = output[i];
	free(count);
	free(output);
}
/**
 * radix_sort - radix sort (radix = 10)
 * @array: pointer to array
 * @size: size of the array
 **/
void radix_sort(int *array, size_t size)
{
	int max;
	int signum;

	if (!array || size < 2)
		return;
	max = getmax(array, size);
	for (signum = 1; max / signum > 0; signum *= 10)
	{
		countsort(array, size, signum);
		print_array(array, size);
	}
}
