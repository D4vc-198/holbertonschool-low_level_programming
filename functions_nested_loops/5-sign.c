#include <stdio.h>

int print_sign(int n)
{
	signed int valor;
	
	if(n > 0)
	{
		valor = 1;
		return printf("%+d", valor);
	}
	if (n == 0)
	{
		valor = 0;
		return printf("%d", valor);
	}
	if (n < 0) 
	{
		valor = 1;
		return printf("%-d", valor);
	}

}
