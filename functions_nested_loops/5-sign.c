#include <stdio.h>

int print_sign(int n)
{
	char valor;

	if(n > 0)
	{
		valor = 1;
		printf("%+f", valor);
	}
	if (n == 0)
	{
		valor = 0;
		printf("%d", valor);
	}
	else 
	{
		valor = 1;
		printf("%-f", valor);
	}

	return (0);
}
