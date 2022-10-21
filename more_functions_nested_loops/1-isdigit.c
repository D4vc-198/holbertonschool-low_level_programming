#include <ctype.h>
/**
 * _isdigit - return 1 or 0 (is digit or not)
 * @c: is a param
 * Return: valor 1 or 0
 */

int _isdigit(int c)
{
	int valor;

	if (isdigit(c))
	{
		valor = 1;
	}
	else
	{
		valor = 0;
	}

	return (valor);
}
