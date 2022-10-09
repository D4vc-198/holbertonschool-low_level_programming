#include <stdio.h>

int print_sign(int n)
{
	int valor;
	
	if(n > 0)
	{
		valor = 1;
		putchar('+');
	}
	if (n == 0)
	{
		valor = 0;
	}
	if (n < 0) 
	{
		valor = 1;
	}

	return (valor);
}
