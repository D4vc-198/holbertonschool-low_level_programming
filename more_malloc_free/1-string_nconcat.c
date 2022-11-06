#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: max numbers of bytes
 * Return: concatenates string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int lenght = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		lenght++;

	concat = malloc(sizeof(char) * (lenght - 1));

	if (concat == NULL)
		return (NULL);

	lenght = 0;

	for (i = 0; s1[i]; i++)
		concat[lenght++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[lenght++] = s2[i];

	concat[lenght] = '\0';
	return (concat);
}
