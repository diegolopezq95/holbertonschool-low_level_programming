#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_function - selects the correct function to perform the operation.
 * @s: pointer to a function
 * Return:.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op)
		{
			return (*ops[i].f);
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
