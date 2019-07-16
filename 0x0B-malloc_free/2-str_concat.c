#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: pointer type char 1.
 * @s2: pointer type char 2.
 * Return:.
 */
char *str_concat(char *s1, char *s2)
{
	int str1, str2, str3;
	int i = 0;
	char *a;

	str1 = strlen(s1);
	str2 = strlen(s2);
	str3 = str1 + str2 + 1;

	if (s2 == 0)
	{
		return (NULL);
	}
	a = malloc(str3);
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
	return (a);
}
