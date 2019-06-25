#include "holberton.h"

/**
 * jack_bauer - Entry point
 * Description: prints every minute of the day starting from 00:00 to 23:59
 * Return: Always 0
 */
void jack_bauer(void)

{
	int n, m, l, k;

	for (n = '0'; n <= '2'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (l = '0'; l <= '5'; l++)
			{
				for (k = '0'; k <= '9'; k++)
				{
					if (!(n == '2' &&  m > '3'))
					{
						_putchar(n);
						_putchar(m);
						_putchar(':');
						_putchar(l);
						_putchar(k);
						_putchar('\n');
					}
					else
					{
						break;
					}
				}
			}
		}
	}
}
