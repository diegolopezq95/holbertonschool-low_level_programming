#include "holberton.h"
/**
 * print_number - prints all natural numbers from n to 98
 * @n: parameter to print
 * Return: Always 0
 */
void print_number(int n)

{
	int m;

	for (m = 0; m <= n;n++)
	{
		if (m > 0)
		{
			_putchar(n);
		}
		else
		{
			n = m * -1;
			_putchar(n);
		}
	}
}
