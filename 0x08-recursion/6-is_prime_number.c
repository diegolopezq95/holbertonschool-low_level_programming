#include "holberton.h"

/**
 * _is_prime_function - calculates the prime number.
 * @n: number
 * @m: square root
 * Return: .
 */
int _is_prime_function(int n, int m)
{
	if (m * m == n || n < 0)
	{
		return (0);
	}
	if (m * m > n)
	{
		return (1);
	}
	return (_is_prime_function(n, m + 1));
}
/**
 * is_prime_number - return 1 if input is a prime number, otherwise return 0.
 * @n: number
 * Return: .
 */
int is_prime_number(int n)
{
	return (_is_prime_function(n, 0));
}
