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

	for (length = 0; src[length]; length++)
	{
		dest[length] = src[length];
	}
	return (dest);
}
