#include "holberton.h"

/**
 * *_strncat - function that concatenates two strings.
 * @src: string to append
 * @dest: dest. string
 * @n: bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int count;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[length] = src[count];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
