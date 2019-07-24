#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int);

/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument vector
 * Return:.
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	char a;

	a = argv[2][0];
	if (argc < 3 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (a != '+' && a != '-' && a != '*' && a != '/' && a != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}
