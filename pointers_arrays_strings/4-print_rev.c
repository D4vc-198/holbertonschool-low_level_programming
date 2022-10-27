#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{

	int i, sizeString;

	i = 0;
	sizeString = 0;

	sizeString = strlen(s);

	for (i = sizeString - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
