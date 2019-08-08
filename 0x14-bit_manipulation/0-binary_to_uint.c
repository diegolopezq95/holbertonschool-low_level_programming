#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string
 * Return: converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			sum = (sum * 2) + 1;
			i++;
		}
		else if (b[i] == '0')
		{
			sum = (sum * 2);
			i++;
		}
		else
			return (0);
	}
	return (sum);
}
