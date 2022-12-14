#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string concatenate string_1-string2
 */

char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int i, str_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	str_concat = malloc(sizeof(char) * len);

	if (str_concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_concat[str_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		str_concat[str_i++] = s2[i];

	return (str_concat);
}
