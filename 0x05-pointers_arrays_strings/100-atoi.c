#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to print
 * Return: Always 0.
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	unsigned int c, j, k, sum = 0;
	int sig = 1;

	while (s[i] != '\0')
	{
		i++;
	}
	for (c = 0; c < i; c++)
	{
		if (s[c] >= '0' && s[c] <= '9')
			break;
	}
	for (j = 0; j < c; j++)
	{
		if (s[j] == '-')
			sig = sig * -1;
	}
	for (k = c; k < i; k++)
	{
		if (!(s[k] >= '0' && s[k] <= '9'))
			break;
		else if (s[k] >= '0' && s[k] <= '9')
			sum = sum * 10 + (s[k] - '0');
	}
	return (sum * sig);

}
