#include <stdio.h>
#include "main.h"
/**
 * print_sign - return sign of a number
 * @n: is a param
 * Return: always 0 (success)
 */

int print_sign(int n)
{
	int valor;

	if (n > 0)
	{
		valor = 1;
		_putchar('+');
		return (valor);
	}
	if (n == 0)
	{
		valor = 0;
		_putchar('0');
		return (valor);
	}
	if (n < 0)
	{
		valor = -1;
		_putchar('-');
		return (valor);
	}

	return (0);
}
