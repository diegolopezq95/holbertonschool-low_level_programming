
#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: character
 * @size: matrix size
 * Return: 0.
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, suminv = 0;

	for (i = 0; i < (size * size);)
	{
		sum = sum + a[i];
		i = i + size + 1;
	}
	for (i = 0; i < (size * size) - size;)
	{
		i = i + size - 1;
		suminv = suminv + a[i];
	}
	printf("%d, %d\n", sum, suminv);
}


