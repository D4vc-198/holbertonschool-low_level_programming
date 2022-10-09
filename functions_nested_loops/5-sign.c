#include <stdio.h>

int print_sign(int n)
{
	int valor;

	if(n > 0)
	{
		valor = 1;
		return (("%+d", valor));
	}
	if (n == 0)
	{
		valor = 0;
		return (valor);
	}
	else 
	{
		valor = 1;
		return (("%-d", valor));
	}

}
