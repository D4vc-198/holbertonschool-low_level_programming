#include <stdio.h>

int print_sign(int n)
{
	int valor;
	char simbol;

	if(n > 0)
	{
		valor = 1;
		putchar("+");
		return (valor);
	}
	if (n == 0)
	{
		valor = 0;
		return (valor);
	}
	else 
	{
		valor = 1;
		putchar("-");
		return (valor);
	}

}
