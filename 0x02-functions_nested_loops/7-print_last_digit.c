#include "holberton.h"

/**
 * print_last_digit - Entry point
 * Description: print the last digit of a number
 * Return: Always 0
 */
int print_last_digit(int r)

{
	r = r  % 10;

	if (r > 0)
	{
		_putchar('0' + r);
		return (r);
	}
	else
	{
		_putchar('0' - r);
		return (-r);
	}
}
