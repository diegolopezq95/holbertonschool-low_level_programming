#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to print.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length = 0;
	int half;

	for (; str[length] != '\0'; length++)
	{
	}
	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}
	for (; half < length; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
