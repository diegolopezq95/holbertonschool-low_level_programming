#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */
int main(void)

{
	int n;
	unsigned long int m, l, k, mx, my, lx, ly, x, y, z;

	m = 1;
	l = 2;
	if (m == 1 && l == 2)
		printf("%lu, %lu", m, l);
	for (n = 0; n <= 88; n++)
	{
		k = m + l;
		m = l;
		l = k;
		printf(", %lu", k);
	}
	mx = m / 1000000000000000000;
	my = m % 1000000000000000000;
	lx = l / 1000000000000000000;
	ly = l % 1000000000000000000;

	for (n = 89; n < 96; n++)
	{
		y = my + ly;
		z = y / 1000000000000000000;
		y = y % 1000000000000000000;
		x = mx + lx + z;
		my = ly;
		mx = lx;
		ly = y;
		lx = x;
		printf(", %lu%lu", x, y);
		if (n == 95)
		{
			printf("\n");
		}
	}
	return (0);
}

