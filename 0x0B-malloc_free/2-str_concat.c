#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: pointer type char 1.
 * @s2: pointer type char 2.
 * Return:.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, x, y, k;
	char *a;

	if (s2 == NULL)
	{
		s1 = "";
	}
	if (s1 == NULL)
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
	k = x + y + 1;
	a = malloc(k);
	if (a == 0)
	{
		return (NULL);
	}
	for (; *s1 != '\0'; i++)
	{
		a[i] = *s1;
		s1++;
	}
	for (; *s2 != '\0'; i++)
	{
		a[i] = *s2;
		s2++;
	}
	a[i] = '\0';
	return (a);
}
