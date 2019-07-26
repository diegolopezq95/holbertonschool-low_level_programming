#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @n: number of strings
 * @separator: string to be printed between numbers.
 * Return: sum.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;

	va_list Argumentlist;

	va_start(Argumentlist, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}
		c = va_arg(Argumentlist, char *);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
	}
	printf("\n");
	va_end(Argumentlist);
}
