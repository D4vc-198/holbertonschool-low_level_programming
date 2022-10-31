#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: source string to locate
 * @c: char to locate in string
 * Return: char locate in the string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
