#include "holberton.h"

/**
 * print_times_table - Entry point
 * @n: prints the n times table, starting with 0
 * Description: prints the n times table
 */
void print_times_table(int n)

{
	int m, l, k;

	if (n >= 0 && n < 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (l = 0; l <= n; l++)
			{
				k = m * l;
				if (l != 0)
				{
					_putchar(' ');
					if (k > 99)
					{
						_putchar((k / 100) + '0');
						_putchar((k / 10) % 10 + '0');
					}
					else if (k < 100 && k > 9)
					{
						_putchar(' ');
						_putchar((k / 10) + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((k % 10) + '0');
					if (l != n)
						_putchar(',');
					continue;
				}
				_putchar(l + '0');
				if (n != 0)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
