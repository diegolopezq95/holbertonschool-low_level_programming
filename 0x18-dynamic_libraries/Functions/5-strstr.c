#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 * @needle: sub string
 * @haystack: string
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
	char *var1;
	char *var2;

	while (*haystack)
	{
		var1 = haystack;
		var2 = needle;

		while (*haystack == *var2)
		{
			haystack++;
			var2++;
		}
		if (*var2 == '\0')
		{
			return (var1);
		}
		haystack++;
	}
	return (0);
}
