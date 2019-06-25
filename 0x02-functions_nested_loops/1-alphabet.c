#include "holberton.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)

{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
