#include <stdio.h>

int print_sign(int n)
{
	int valor;

	if(n > 0)
	{
		valor = 1;
		printf("%-d", 1);
	}
	if (n == 0)
	{
		valor = 0;
		printf("%d", 0);
	}
	else 
	{
		valor = 1;
		printf("%-d", 1);
	}

	return (0);
}
