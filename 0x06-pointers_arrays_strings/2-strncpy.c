#include "holberton.h"

/**
 * *_strncpy - function that copies a string.
 * @src: string to copy
 * @dest: dest. string
 * @n: bytes
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	
	int count = 0;

	for (; src[count] != '\0' && count < n; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}
	count++;
	return (dest);
}
