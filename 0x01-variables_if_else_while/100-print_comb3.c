#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

/* your code goes there */
	for (n = '0'; n <= '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);

			if (n < '8' || m < '9')
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

	return (0);
}
