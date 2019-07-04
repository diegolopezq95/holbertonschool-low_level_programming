#include "holberton.h"

/**
 * *_strcat - function that concatenates two strings.
 * @src: string to append
 * @dest: dest. string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int count = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[count] != '\0')
	{
		dest[length] = src[count];
		length++;
		count++;
	}
	dest[length] = '\0';
	return (dest);
}
