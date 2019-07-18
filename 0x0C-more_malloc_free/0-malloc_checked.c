#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: size of character b.
 * Return: .
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	if (b == 0)
	{
		return (NULL);
	}
	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	else
	{
		return (a);
	}
}
