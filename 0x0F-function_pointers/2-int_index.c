#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size <= 0 && cmp)
		return (-1);
	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
