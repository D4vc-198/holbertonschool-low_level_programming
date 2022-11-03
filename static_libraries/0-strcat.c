#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: result of the concatenation
 * @src: source string
 * Return: dest result of the concatenation
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	if (i > 0)
	{
		dest[i] = ' ';
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
