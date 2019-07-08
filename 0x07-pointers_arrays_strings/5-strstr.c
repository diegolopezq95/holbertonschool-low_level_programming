#include "holberton.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @needle: sub string
 * @haystack: string
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int length;
	int count;

	length = 0;
	while (haystack[length] != '\0')
	{
		count = 0;
		while (haystack[length] == needle[count])
		{
			haystack++;
			needle++;
		}
		if (needle[count] == 0)
			return (haystack);
		haystack++;
	}
	return (0);
} 
