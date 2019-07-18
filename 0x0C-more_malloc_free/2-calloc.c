#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array.
 * @nmemb: number of elements of size bytes each.
 * @size: size of bytes
 * Return: .
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 48 || size == 48)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);
	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = nmemb * size;
	}
	a[i] = '\0';
	return (a);
}
