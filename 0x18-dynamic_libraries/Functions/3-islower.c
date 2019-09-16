#include "holberton.h"

/**
 * _islower - Entry point
 * @c: parameter to print
 * Description: checks for lowercase character
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	_putchar('\n');
}
