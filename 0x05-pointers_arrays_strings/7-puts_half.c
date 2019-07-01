#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to print.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length = 0;
	int even;

	for (; str[length] != '\0'; length++)
	{
	}
	if (length % 2 == 0)
	{
		even = length / 2;
	}
	else
	{
		even = (length - 1) / 2;
	}
	for (; even < length; even++)
	{
		_putchar(str[even]);
	}
	_putchar('\n');
}
