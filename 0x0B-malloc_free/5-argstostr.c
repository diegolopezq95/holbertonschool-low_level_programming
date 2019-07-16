#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all the arguments.
 * @av: argument vector.
 * @ac: argument count.
 * Return:.
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, m = 0, strlen = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			strlen++;
		}
	}
	a = malloc((strlen + ac + 1) * sizeof(char));
	if (a == 0)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, m++)
		{
			a[m] = av[i][j];
		}
		a[m] = '\n';
		m++;
	}
	return (a);
}
