#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src to buffer pointed to by dest
 * @src: source string
 * @dest: destiny string
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int length2;

	while (src[length] != '\0')
	{
		length++;
	}
	for (length2 = 0; length2 < length; length2++)
	{
		dest[length2] = src[length2];
	}
	return (dest);
}
