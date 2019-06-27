#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0.
 */
int main(void)
{
	long int m, k = 1;
	long int n;

	n = 612852475143;

	for (m = 2; m <= n; m++)
	{
		if (n % m == 0)
		{
			n /= m;
			m--;
		}
	}
	m = k;
	printf("%li\n", m);
	return (0);
}
