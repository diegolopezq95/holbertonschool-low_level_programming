#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of integers
 * @separator: string to be printed between numbers.
 * Return: sum.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list Argumentlist;

	va_start(Argumentlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(Argumentlist, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(Argumentlist);
}
