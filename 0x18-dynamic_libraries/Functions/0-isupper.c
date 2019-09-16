#include "holberton.h"
/**
 * _isupper - checks for uppercas character.
 * @c: character to print
 * Return: Always 0.
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
