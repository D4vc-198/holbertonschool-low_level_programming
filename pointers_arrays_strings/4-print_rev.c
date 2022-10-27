#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		if(s[i] == ' ')
		{
			s[i] = '\0';
			printf("%s ", &(s[i]) + 1);
		}
	}

	printf("%s", s);
}
