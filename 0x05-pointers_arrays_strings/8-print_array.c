#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array to print.
 * @n: number of elements of the array to print
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int length = 0;

	while (length < n)
	{
		if (length >= n - 1)
		{
			printf("%d", a[length]);
		}
		else
		{
			printf("%d, ", a[length]);
		}
		length++;
	}
	printf("\n");
}
