#include "holberton.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @accept: second string
 * @s: string
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int count;
	int length;

	for (length = 0; s[length] != '\0'; s++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (s[length] == accept[count])
			{
				return (s);
			}
		}
	}
	return (0);
}
