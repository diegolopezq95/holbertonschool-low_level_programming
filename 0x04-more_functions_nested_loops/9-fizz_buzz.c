#include "holberton.h"
#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100
 * Return: Always 0.
 */
int fizz_buzz(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if ((m % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((m % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((m % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", m);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
