#include <ctype.h>

/**
 * _isalpha - check alphabetic character
 * @c: is a char (value param)
 * Return: 1 is alphabet char - 0 not char alphabet
 */
int _isalpha(int c)
{
	int valor;

	if (isalpha(c))
	{
		valor = 1;
	} else
	{
		valor = 0;
	}

	return (valor);
}
