#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
	unsigned int valor;
	
	if(n > 0)
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
	}
}
