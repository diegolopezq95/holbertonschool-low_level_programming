#include "holberton.h"

/**
 * *infinite_add - function that adds two numbers.
 * @n1: number 1
 * @n2: number 2
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	count = 0;
	while (s[count] != '\0')
	{
		length = 0;
		while (alf[length] != '\0')
		{
			if (s[count] == alf[length])
			{
				s[count] = rot[length];

				break;
			}
			length++;
		}
		count++;
	}
	return (s);
}
