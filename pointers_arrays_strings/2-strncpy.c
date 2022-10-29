#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int contador;

	for (contador = 0; *(src + contador) != '\0' && contador < n; contador++)
	{
		dest[contador] = *(src + contador);
	}

	dest[contador] = '\0';

	return (dest);
}
