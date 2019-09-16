#include "holberton.h"

/**
 * *_memcpy - copies memory area.
 * @src: source memory area
 * @dest: destiny memory area
 * @n: number of bytes
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int length;

	for (length = 0; length < n; length++)
	{
		dest[length] = src[length];
	}
	return (dest);
}
