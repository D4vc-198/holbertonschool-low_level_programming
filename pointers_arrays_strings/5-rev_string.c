#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string reverse
 */
void rev_string(char *s)
{
	char temporal;
	int i, size, size1;

	size = 0;
	size1 = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	size1 = size - 1;

	for (i = 0; i < size / 2; i++)
	{
		temporal = s[i];
		s[i] = s[size1];
		s[size1--] = temporal;
	}
}
