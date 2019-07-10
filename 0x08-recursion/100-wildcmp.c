#include "holberton.h"
#include <stdbool.h>

/**
 * wildcmp_function - compares two strings with wildcard.
 * @s1: string 1
 * @s2: string 2
 * Return: .
 */
bool wildcmp_function(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp_function(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp_function(s1, s2 + 1) || wildcmp_function(s1 + 1, s2));
	}
	return (0);
}
/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: .
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_function(s1, s2));
}
