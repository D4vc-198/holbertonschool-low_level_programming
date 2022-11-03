#include "main.h"

/**
 * _strlen - return length string
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}

/**
 * palindrome - check two chars string
 * @s: string
 * @i: first i
 * @j: last i
 * Return: 1 or 0 (equal or not)
 */
int palindrome(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome  and 0 if not
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);
	if (length == 0 || *s != s[length - 1])
		return (0);
	return (palindrome(s, 0, len - 1));
}
