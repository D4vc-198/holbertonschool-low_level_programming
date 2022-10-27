#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	int i, j, contador;
	char stringRev[100];

	contador = 0;
	i = 0;

	while (s[contador] != '\0')
	{
		contador++;
	}
	j = contador -1;

	for (i = 0; i < contador; i++)
	{
		stringRev[i] = s[j];
		j--
	}

	*s = *stringRev;

	_putchar('\n');
}
