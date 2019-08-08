#include "holberton.h"

/**
 * flip_bits - returns the number of bits need to flip.
 * @n: decimal number
 * @index: index
 * Return: converted binary
 */

unsigned int flip_bits_count(unsigned long int n)
{
	unsigned int count, mask = 1;

	count = 0; 
	while (n)
	{ 
		count += n & mask; 
		n >>= mask; 
	}
	return (count);
} 
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return flip_bits_count(n ^ m);
}
