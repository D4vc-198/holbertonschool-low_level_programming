#include <stdio.h>

int print_sign(int n)
{
	int valor;

	if(n > 0)
	{
		valor = 1;
		putchar('+');
		putchar(valor);
		return ('\n');
	}
	if (n == 0)
	{
		valor = 0;
		putchar(valor);
		return ('\n');
	}
	else 
	{
		valor = 1;
		putchar('-');
		putchar(valor);
		return ('\n');
	}
}
