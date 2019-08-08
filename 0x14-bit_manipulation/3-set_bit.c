#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: decimal number
 * @index: index
 * Return: converted binary
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index > 63)
		return (-1);
        if (*n |= (mask << index))
		return (1);
	return (1);
}
