#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; i >= 25; cents++)
	{
		i -= 25;
	}
	for (; i >= 10; cents++)
	{
		i -= 10;
	}
	for (; i >= 5; cents++)
	{
		i -= 5;
	}
	for (; i >= 2; cents++)
	{
		i -= 2;
	}
	for (; i >= 1; cents++)
	{
		i -= 1;
	}
	printf("%d\n", cents);
	return (0);
}
