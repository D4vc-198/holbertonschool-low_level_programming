#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	char test[20];
	int i = 0; x = 0;

	x = strlen(s);

	for (i = x; i >= 0; i--)
	{
		test[i] = nombre[i];
	}
	
	*s = *test;
}
