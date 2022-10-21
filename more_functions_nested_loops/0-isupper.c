#include <ctype.h>
/**
 * _isupper - return 1 or 0
 * @c: is a param
 * Return: valor(isUpper = 1 or 0)
 */
int _isupper(int c)
{
	int valor;

	if (isupper(c))
	{
		valor = 1;
	}
	else
	{
		valor = 0;
	}
	return (valor);
}

