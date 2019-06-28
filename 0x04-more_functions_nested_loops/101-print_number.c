#include "holberton.h"
/**
 * print_number - prints all natural numbers from n to 98
 * @n: parameter to print
 * Return: Always 0
 */
void print_number(int n)

{
	unsigned int m, digits, counter;
	
	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}
	
	digits = m;
	counter = 1;
	
	while (digits > 9)
	{
	        digits = digits / 10;
		counter = counter * 10;
	}
	for (digits = digits / 10; counter >= 1; counter = counter / 10)
	{
		_putchar(((m / counter) % 10) + '0');
	}
}
