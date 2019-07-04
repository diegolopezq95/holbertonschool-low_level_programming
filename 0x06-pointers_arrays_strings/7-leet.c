#include "holberton.h"

/**
 * *leet - function that encodes a string into 1337.
 * @s: array of integer
 * Return: Always 0.
 */
char *leet(char *s)
{
	int count = 0;
	int length = 0;
	char num[] = "4433007711";
	char alf[] = "aAeEoOtTlL";

	while (s[count] != '\0')
	{
		length = 0;
		while (alf[length] != '\0')
		{
			if (s[count] == alf[length])
			{
				s[count] = num[length];
			}
			length++;
		}
		count++;
	}
	return (s);
}
