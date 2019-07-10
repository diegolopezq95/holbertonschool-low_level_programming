#include "holberton.h"

/**
 * is_length - calculates the length.
 * @s: string
 * Return: .
 */
int is_length(char *s)
{
	if (*s != '\0')
	{
		return (1 + is_length(s + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome_function - calculates if the function is palindrome.
 * @s: string
 * @m: length1
 * @n: lengthrev
 * Return: .
 */
int is_palindrome_function(char *s, int m, int n)
{
	if (m == n)
	{
		return (1);
	}
	if (m > n || n < m)
	{
		return (1);
	}
	if (s[m] == s[n])
	{
		return (is_palindrome_function(s, m + 1, n - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: .
 */
int is_palindrome(char *s)
{
	return (is_palindrome_function(s, 0, is_length(s) - 1));
}
