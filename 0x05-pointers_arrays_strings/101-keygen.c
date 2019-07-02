#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0, sumrand;
	time_t t;

	srand(time(&t));

	while (sum < 2772)
	{
		sumrand = rand() % 127;

		if (sumrand > 0)
		{
			putchar(sumrand);
			sum = sum + sumrand;
		}
	}
	putchar(2772 - sum);
	return (0);
}
