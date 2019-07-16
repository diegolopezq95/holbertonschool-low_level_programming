#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer.
 * Return: .
 */
char *_strdup(char *str)
{
	int length, i;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; length++)
	{
		;
	}
	a = malloc(length + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
