#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	int i, j, size, contador;
	char stringRev[];

	contador = 0;
	i = 0;
	size = 0;
	size = strlen(s);

	while (s[contador] != '\0')
	{
		contador++;
	}
	j = contador -1;

	for (i = 0; i < contador; i++)
	{
		stringRev[i] = s[j];
	}

	*s = *stringRev;

	_putchar('\n');
}
