#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints 10 times the alphabet, lowercase, new line
 * Return: Always 0
 */
void print_alphabet_x10(void)

{
	int n, m;

	for (m = 0; m < 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
