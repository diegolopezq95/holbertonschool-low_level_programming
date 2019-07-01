#include "holberton.h"

/**
 * print_rev - prints a string.
 * @s: string to print in reverse.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (s[length] >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
