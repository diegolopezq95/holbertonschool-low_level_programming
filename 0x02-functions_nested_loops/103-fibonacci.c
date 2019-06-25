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
	long int j = 0;

	for (n = 0; n <= 32; n++)
	{
		k = m + l;
		m = l;
		l = k;

		if ((k % 2 == 0) || (k % 10 == 0))
		{
			j = j + k;
		}
	}
	printf("%ld\n", j);
	return (0);
}
