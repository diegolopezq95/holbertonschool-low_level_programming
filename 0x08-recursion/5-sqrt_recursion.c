#include "holberton.h"

/**
 * _sqrt_function - calculates the natural square root of a number.
 * @n: number
 * @m: square root
 * Return: .
 */
int _sqrt_function(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	if (m * m > n)
	{
		return (-1);
	}
	return (_sqrt_function(n, m + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: .
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_function(n, 0));
}
