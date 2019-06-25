#include "holberton.h"
#include <stdio.h>

/**
 * print_times_times_table - prints the n times table, starting with 0.
 *
 * Return: Always 0
 */
void print_times_table(int n)

{
	int a, b, c;

	if (n > 15 || n < 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (c > 99)
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
