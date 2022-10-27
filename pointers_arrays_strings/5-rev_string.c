#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	int i, size;
	i = 0;
	size = 0;
	size = strlen(s);
	char string[size];

	for (i = size -1; i >= 0; i --)
	{
		string[s[i]];
	}

	*s = string;

	_putchar('\n');
}
