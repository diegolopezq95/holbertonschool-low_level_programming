#include "holberton.h"
#include <stdio.h>

/**
 * time_table - prints the 9 times table
 *
 * Return: Always 0
 */
void times_table(void)

{
	int n, m, l;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			l = n * m;

			if (l < 10)
			{
				_putchar(' ');
			}
			if (l > 9)
			{
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
			else
			{
				_putchar(l + '0');
			}
			if (m == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
