#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: number of times the character # should be printed
 * Return: Always 0.
 */
void print_square(int size)
{
	int m, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= size; m++)
		{
			for (l = 1; l <= size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
