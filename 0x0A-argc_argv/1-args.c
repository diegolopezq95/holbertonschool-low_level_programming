#include "holberton.h"
#include <stdio.h>

/**
 * main - prints number of arguments.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
