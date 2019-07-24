#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sums.
 * @a: variable a
 * @b: variable b
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference.
 * @a: variable a
 * @b: variable b
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product.
 * @a: variable a
 * @b: variable b
 * Return: product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - result of division.
 * @a: variable a
 * @b: variable b
 * Return: result of division.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division.
 * @a: variable a
 * @b: variable b
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
