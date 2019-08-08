#include "holberton.h"

/**
 * flip_bits_count - count bits
 * @n: decimal number
 * Return: count
 */

unsigned int flip_bits_count(unsigned long int n)
{
	unsigned int count, mask = 1;

	count = 0;
	while (n)
	{
		count += n & mask;
		n = n >> mask;
	}
	return (count);
}

/**
 * flip_bits - returns the number of bits need to flip.
 * @n: decimal number
 * @m: decimal number to compare
 * Return: converted binary
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (flip_bits_count(n ^ m));
}
