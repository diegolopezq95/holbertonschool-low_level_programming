#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: sum.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;

	va_list Argumentlist;

	va_start(Argumentlist, format);

	while (format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(Argumentlist, int));
			break;
		case 'i':
			printf("%d", va_arg(Argumentlist, int));
			break;
		case 'f':
			printf("%f", va_arg(Argumentlist, double));
			break;
		case 's':
			str = va_arg(Argumentlist, char *);
			if (str == NULL)
			{
				printf("nil");
				break;
			}
			printf("%s", str);
			break;
		default:
			continue;
		}
		if (format[i])
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(Argumentlist);
}
