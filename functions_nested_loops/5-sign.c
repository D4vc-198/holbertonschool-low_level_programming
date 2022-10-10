#include <stdio.h>

int print_sign(int n)
{
	unsigned int valor;
	
	if(n > 0)
	{
		valor = 1;
		return valor;
	}
	if (n == 0)
	{
		valor = 0;
		return 0;
	}
	if (n < 0) 
	{
		valor = -1;
		return valor;
	}

	return (0);
}
