#include <stdio.h>

int print_sign(int n)
{
	char* valor;
	
	if(n > 0)
	{
		valor = "+1";
	}
	if (n == 0)
	{
		valor = "00";
	}
	if (n < 0) 
	{
		valor = "-1";
	}

	return (valor);
}
