#include <ctype.h>

int _isupper(int c)
{
	int valor;

	if (isupper(c))
	{
		valor = 1;
	} else {
		valor = 0;
	}

	return (valor);

}