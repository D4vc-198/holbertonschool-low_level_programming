#include <stdio.h>

int print_sign(int n)
{
	int valor;
	char simbol;

	if(n > 0)
	{
		simbol = '+';
		valor = 1;
		return ((simbol+valor));
	}
	if (n == 0)
	{
		valor = 0;
		return (valor);
	}
	else 
	{
		valor = 1;
		return (1);
	}

}
