#include <stdio.h>

int print_sign(int n)
{
	signed int valor;
	
	if(n > 0)
	{
		putchar('+');
		return 1;
	}
	if (n == 0)
	{
		valor = 0;
		return printf("%d", valor);
	}
	if (n < 0) 
	{
		valor = -1;
		return valor;
	}

	return (0);
}
