#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{

	int i, x;
	i = 0;
	x = 0;
	
	x=strlen(s);

	for (i = x; i >= 1; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");

}
