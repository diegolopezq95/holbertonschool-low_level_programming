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
	int length = 0;
	int i;
	char *a;

	if (str == 0)
	{
		return (NULL);
	}
	a = malloc(length * sizeof(int));
	if (a == 0)
	{
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; length++)
	{
	}
	for (i = 0; i < length; i++)
	{
		a[i] = str[i];
	}
	a[i] = '\0';
	return (a);
}
