#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: string to print.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int length = 0;

	for (; str[length] != '\0'; length++)
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
	}
	_putchar('\n');
}
