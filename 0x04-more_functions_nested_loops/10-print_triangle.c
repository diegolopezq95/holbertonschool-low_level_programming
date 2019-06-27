#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: number of times the character # should be printed
 * Return: Always 0.
 */
void print_triangle(int size)
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
				if ((l + m) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
