#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers, print the result.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int result;
	int i = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", result);
		return (0);
	}
}
