#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - get the length of a prefix substring.
 * @s: string to search
 * @accept: prefix length
 * Return: length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, coincidencia;

	i = 0;
	coincidencia = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				coincidencia++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j]
					return (coincidencia);
		}
		i++;
	}

	return (coincidencia);
}
