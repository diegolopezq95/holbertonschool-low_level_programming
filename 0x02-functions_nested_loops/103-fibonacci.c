#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */
int main(void)

{
	int n;
	int m = 1;
	int l = 2;
	int k;

	if (m == 1 && l == 2)
	{
		printf("%d, %d", m, l);
	}
	for (n = 0; n < 50; n++)
	{
		k = m + l;
		m = l;
		l = k;
		printf(", %d", k);
	}
	printf("\n");
	return (0);
}
