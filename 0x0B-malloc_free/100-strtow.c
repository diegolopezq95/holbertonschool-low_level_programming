#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - concatenates all the arg
 * @str: pointer string.
 * Return:.
 */
char **strtow(char *str)
{
	char *a;
	int i, pcount, length, m = 0;

	if (str == 0 || *str == '\0')
	{
		return (NULL);
	}
	i = 0;
	length = 0;
	while (str[length] != '\0')
	{
		if (str[length] == ' ')
			i++;
		else
		{
			if (str[length] == ' ' || str[length] == '\0')
				pcount++;
			i++;
		}
		length++;
	}
	a = malloc((length - i + pcount) * sizeof(char));
	if (a == 0)
	{
		free(a);
		return (NULL);
	}
	/*for (i = 0; str[i] != '\0'; i++)*/
	{
			if (str[i] == ' ')
				a[m] = str[i];
			a[m] = '\0';
			m++;
	}
	return (0);
}
