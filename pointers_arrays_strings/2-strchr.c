#include "main.h"

char *_str(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}

	return ('\0');
}
