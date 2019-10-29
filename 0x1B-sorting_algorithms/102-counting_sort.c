#include "sort.h"
/**
 * counting_sort - counting sort
 * @array: pointer to array
 * @size: size of the array
 **/
void counting_sort(int *array, size_t size)
{
	unsigned int *count, *output;
	size_t i, max;

	if (!array || size < 2)
		return;
	max = array[0];
	for (i = 0; i < size; i++)
	{
		if ((unsigned int)array[i] > max)
			max = array[i];
	}
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
	for (i = 0; i < size; i++)
		count[array[i]] += 1;
	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];
	print_array((const int *)count, max + 1);
	for (i = 0; i < size; i++)
	{
		output[count[array[i]] - 1] = array[i];
		--count[array[i]];
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(count);
	free(output);
}
