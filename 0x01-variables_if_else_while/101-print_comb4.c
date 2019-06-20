#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

/* your code goes there */
	for (n = '0'; n <= '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			for (l = m + 1; l <= '9'; l++)
			{
				putchar(n);
				putchar(m);
				putchar(l);

				if (n < '7' || m < '8' || l < '9')
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

	return (0);
}
