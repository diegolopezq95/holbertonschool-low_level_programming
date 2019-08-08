#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal
 * Return: converted binary
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;

	if ((n & (mask << index)) != 0)
		return (1);
	else if ((n & (mask << index)) == 0)
		return (0);
	else 
		return (-1);
}
