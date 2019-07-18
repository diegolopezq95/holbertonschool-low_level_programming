#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to memory
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 * Return: .
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *a;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size * sizeof(char));
	if (a == 0)
	{
		return (NULL);
	}
	if (ptr != 0)
	{
		for (i = 0; i < old_size; i++)
		{
			a[i] = ;
		}
	}
	free(ptr);
	return (a);
}
