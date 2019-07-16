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
	int i, j, k;
	char *a;

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	k = i + j;
	if (s2 == 0)
	{
		return (NULL);
	}
	a = malloc(k + 1 * sizeof(char));
	for (i = 0; *s1 != '\0'; i++)
	{
		a[i] = *s1;
		s1++;
	}
	for (j = 0; *s2 != '\0'; i++)
	{
		a[i] = *s2;
		s2++;
	}
	return (a);
}
