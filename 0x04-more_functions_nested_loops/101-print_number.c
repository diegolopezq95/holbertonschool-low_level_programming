#include "holberton.h"
/**
 * print_number - prints all natural numbers from n to 98
 * @n: parameter to print
 * Return: Always 0
 */
void print_number(int n)

{
	unsigned int m;
	unsigned int digits;
	unsigned int counter = 1;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}

	digits = m;

	while (digits > 9)
	{
		digits = digits / 10;
		counter = counter * 10;
	}
	for (; counter >= 1; counter = counter / 10)
	{
		_putchar(((m / counter) % 10) + '0');
	}
}
