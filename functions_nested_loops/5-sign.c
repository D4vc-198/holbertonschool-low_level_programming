#include <stdio.h>

int print_sign(int n)
{
	unsigned int valor;
	
	if(n > 0)
	{
		valor = 1;
	}
	if (n == 0)
	{
		valor = 0;
		return 00;
	}
	if (n < 0) 
	{
		valor = -1;
		return -valor;
	}
	putchar('+');
	return (valor);
}
