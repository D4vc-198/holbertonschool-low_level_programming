#include <stdio.h>

int print_sign(int n)
{
	char valor;

	if(n > 0)
	{
		valor = 1;
		printf("%+d", valor);
	}
	if (n == 0)
	{
		valor = 0;
		printf("%d", valor);
	}
	else 
	{
		valor = 1;
		printf("%-d", valor);
	}

	return (valor);
}
