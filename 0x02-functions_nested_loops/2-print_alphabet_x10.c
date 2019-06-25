#include "holberton.h"

/**
 * Print_alphabet_x10 - Entry point
 * Description: prints 10 times the alphabet, lowercase, new line
 * Return: Always 0
 */
void print_alphabet_x10(void)

{
	char n, m;

	for (m = 0; m <= 9; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}

		putchar('\n');
	}
}
