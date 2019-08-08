#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: decimal number
 * @index: index
 * Return: converted binary
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index > 63)
		return (-1);
	(*n &= ~(mask << index));
	return (1);
}
