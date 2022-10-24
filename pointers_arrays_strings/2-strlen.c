#include "main.h"
/**
 * _strlen - Return length of a string
 * @s: string count length
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;

	return (length);
}
