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
	int i, j;
	char *a;

	if (s2 == NULL)
	{
		s1 = "";
	}
	if (s1 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	a = (char *)malloc((i + j + 1) * sizeof(char));
	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j + 1] = '\0';
	return (a);
}
