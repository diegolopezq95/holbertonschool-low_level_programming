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
	long int m = 1;
	long int l = 2;
	long int k;

	if (m == 1 && l == 2)
	{
		printf("%ld, %ld", m, l);
	}
	for (n = 0; n <= 47; n++)
	{
		k = m + l;
		m = l;
		l = k;
		printf(", %ld", k);
	}
	printf("\n");
	return (0);
}
