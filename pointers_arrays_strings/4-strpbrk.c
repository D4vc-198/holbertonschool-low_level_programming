#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: matches
 * Return: first ocurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}

		i++;
	}
	return (NULL);
}
