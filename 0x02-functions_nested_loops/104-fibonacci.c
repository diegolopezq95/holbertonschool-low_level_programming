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
	unsigned long int m = 1;
	unsigned long int l = 2;
	unsigned long int k;
	unsigned long int sum = 0;
	
	if (m == 1 && l == 2)
	{
		printf("%ld, %ld", m, l);
	}
	for (n = 0; n <= 98; n++)
	{
		k = m + l;
		m = l;
		l = k;
		printf(", %ld", k);
	}
	printf("%ld\n", sum);
	return (0);
}
