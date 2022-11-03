#include <stdio.h>
#include <ctype.h>

/**
 * _islower - detect char lower
 * @c: is a char
 * Return: 1 is lower - 0 not lower
*/
int _islower(int c)
{
	int valor;

	if (islower(c))
	{
		valor = 1;
	}
	else
	{
		valor = 0;
	}
	return  (valor);
}
