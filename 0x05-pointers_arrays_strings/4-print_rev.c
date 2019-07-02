#include "holberton.h"

/**
 * print_rev - prints a string.
 * @s: string to print in reverse.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0, htgnel = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	htgnel = length - 1;
	for (; htgnel >= 0; htgnel--)
	{
		_putchar(s[htgnel]);

	}
	_putchar('\n');
}
