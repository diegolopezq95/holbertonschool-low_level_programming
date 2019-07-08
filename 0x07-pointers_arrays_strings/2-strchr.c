#include "holberton.h"

/**
 * *_strchr - locates a character in a string.
 * @c: character
 * @s: string
 * Return: 0.
 */
char *_strchr(char *s, char c)
{
	for (; *s != c; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (0);
		}
	}
	return (0);
}
