#include "holberton.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: character
 * Return: 0.
 */
void print_chessboard(char (*a)[8])
{
	int length;
	int count;

	for (length = 0; length < 8; length++)
	{
		for (count = 0; count < 8; count++)
		{
			_putchar(a[length][count]);
		}
		_putchar('\n');
	}
}

