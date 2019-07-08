#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @accept: second stirng
 * @s: string
 * Return: dest.
 */
unsigned int _strspn(char *s, char *accept)
{
	int length;
	int n = 0;
	int count;

	for (length = 0; s[length] != '\0'; length++)
	{
		if (n != length)
		{
			break;
		}
		for (count = 0; s[count] != '\0'; count++)
		{
			if (s[length] == accept[count])
			{
				n++;
			}
		}
	}
	return (n);
}
