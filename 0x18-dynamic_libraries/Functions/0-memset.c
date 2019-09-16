#include "holberton.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: variable to point
 * @n: number of bytes
 * @b: constant byte
 * Return: .
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		if (*p == 0)
		{
			break;
		}
		p++;
		n--;
	}
	return (s);
}
