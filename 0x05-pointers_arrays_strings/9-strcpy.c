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

	while (src[length])
	{
		dest[length] = src[length];
		length++;
	}
	return (dest);
}
