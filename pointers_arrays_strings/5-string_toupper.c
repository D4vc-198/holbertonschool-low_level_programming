#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string lowercase.
 * Return: string to uppercase.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = toupper((str[i]));
	}

	return (str);
}
