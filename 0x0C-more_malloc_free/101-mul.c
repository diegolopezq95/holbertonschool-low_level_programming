#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - concatenates two strings.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: .
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;
	
	mul = 1;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (!(argv[num1][num2] >= 48 && argv[num1][num2] <= 57))
			{
				printf("Error\n");
				return (1);
			}
		}
		mul *= atoi(argv[num1]);
	}
	printf("%d\n", mul);
	return (0);
}
