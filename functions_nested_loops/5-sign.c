#include <stdio.h>

int print_sign(int n)
{
	char valor;

	if(n > 0)
	{
		valor = '+';
	}
	if (n == 0)
	{
		valor = 0;
	}
	else 
	{
		valor = '-';
	}

	return (valor);
}
