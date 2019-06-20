#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
/* your code goes there */
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');

			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
