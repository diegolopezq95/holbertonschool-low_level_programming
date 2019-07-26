#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of elements
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list Argumentlist;

	if (n == 0)
	{
		return (0);
	}
	va_start(Argumentlist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(Argumentlist, int);
	}
	va_end(Argumentlist);

	return (sum);
}
