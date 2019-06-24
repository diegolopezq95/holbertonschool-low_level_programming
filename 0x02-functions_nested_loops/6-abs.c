#include "holberton.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 *
 * Return: Always 0
 */
int _abs(int r)

{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
	putchar('\n');
}
