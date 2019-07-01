#include "holberton.h"

/**
 * _puts - prints a string.
 * @str: string to print.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
