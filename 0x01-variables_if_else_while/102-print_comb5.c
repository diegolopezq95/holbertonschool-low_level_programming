#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l, k;

/* your code goes there */
	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (l = n; l <= '9'; l++)
			{
				if (l ==  n)
				{
					k = m + 1;
				}
				else
				{
					k = '0';
				}
				for (; k <= '9'; k++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(l);
					putchar(k);
					if (n < '9' ||  m < '8' || l < '9' || k < '9')
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
						putchar('\n');
					}
				}
			}
		}
	}

	return (0);
}
