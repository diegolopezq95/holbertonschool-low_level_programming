#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);

			for (j = 0; argv[i][j] != 0; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%d\n", sum);
	}
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	return (0);
}
