#include <stdio.h>

int print_sign(int n)
{
	char valor;

	if(n > 0)
	{
		valor = 1;
		printf("%+d");
	}
	if (n == 0)
	{
		valor = 0;
		printf("%d");
	}
	else 
	{
		valor = 1;
		printf("%-d");
	}

}
