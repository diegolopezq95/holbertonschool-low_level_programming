#include "holberton.h"

/**
 * add - sums.
 * @a: variable a
 * @b: variable b
 * Return: sum.
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - difference.
 * @a: variable a
 * @b: variable b
 * Return: difference.
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - product.
 * @a: variable a
 * @b: variable b
 * Return: product.
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - result of division.
 * @a: variable a
 * @b: variable b
 * Return: result of division.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - remainder of the division.
 * @a: variable a
 * @b: variable b
 * Return: remainder of the division.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (0);
	}
	return (a % b);
}
