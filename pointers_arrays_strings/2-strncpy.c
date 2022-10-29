#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	char* initial = dest;

	while (*src && n--)
	{
		dest = src;
		dest++;
		src++;
	}

	dest = '\0';

	return (initial);
}
