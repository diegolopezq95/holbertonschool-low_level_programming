#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: pointer to string s1.
 * @s2: pointer to string s2.
 * @n: number of bytes.
 * Return: .
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *a = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		;
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		;
	}
	if (n >= y)
	{
		n = y;
	}
	a = malloc(x + n + 1);
	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < x ; i++)
	{
		a[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = '\0';
	return (a);
}
