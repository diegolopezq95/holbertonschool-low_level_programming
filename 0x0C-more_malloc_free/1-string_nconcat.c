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
	unsigned int i, j, a, b;
	char *m = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		;
	}
	if (n >= b)
	{
		n = b;
	}
	m = malloc(a + n + 1);
	if (m == 0)
	{
		return (NULL);
	}
	for (i = 0; i < a ; i++)
	{
		m[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		m[i + j] = s2[j];
	}
	m[i + j] = '\0';
	return (m);
}
