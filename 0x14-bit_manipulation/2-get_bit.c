#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal number
 * @index: index
 * Return: converted binary
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;

	if (index > 63)
		return (-1);
	if ((n & (mask << index)) != 0)
		return (1);
	else
		return (0);
}
