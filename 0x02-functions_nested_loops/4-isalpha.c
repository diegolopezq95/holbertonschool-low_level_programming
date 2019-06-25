#include "holberton.h"

/**
 * _isalpha - Entry point
 * @c: parameter to print
 * Description: checks for letter, lowercase, uppercase
 * Return: Always 0
 */
int _isalpha(int c)

{
	if (c > 'a' && c < 'z')
		return (1);
	else if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);

	putchar('\n');
}
