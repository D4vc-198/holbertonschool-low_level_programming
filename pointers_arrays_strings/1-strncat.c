#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: dest string
 * @src: source string
 * @n: max n bytes
 * Return: concatenate string - dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
