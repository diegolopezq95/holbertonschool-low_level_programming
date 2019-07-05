#include "holberton.h"
#include <stdio.h>

/**
 * *infinite_add - function that adds two numbers.
 * @n1: number 1
 * @n2: number 2
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int count;
	int length;
        int temp;
        int temp2;
	int first;
	int second;

	count = 0;
	length = 0;
        while (n1[count] != '\0')
	{
                count++;
	}
        while (n2[length] != '\0')
	{
                length++;
	}
        while (count != 0 && length != 0 && size_r != 0)
	{
		if (n1[0] == '-')
		{
			first = (n1[count] - '0');
		}
		else
		{
			first = (n1[count] - '0') * -1;
		}
		if (n2[0] == '-')
		{
			second = (n2[count] - '0');
		}
		else
		{
			second = (n2[count] - '0') * -1;
		}
		temp = first + second + temp2;
		if (temp > 9)
		{
			temp2 = temp / 10;
			
			temp = temp % 10;
		}
		r[size_r--] = temp;
		printf("%d\n", r[size_r + 1]);
		count--;
		length--;
	}
	if (r[0] == '0')
	{
		return (r + 1);
	}
	else
	{
		return (r);	
	}
}
