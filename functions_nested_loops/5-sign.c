#include <stdio.h>

int print_sign(int n)
{
	int valor = 0;
	char character;
	char salto = 'LF';
	if(n > 0)
	{
		valor = 1;
		character = '+';
	}
	if (n == 0)
	{
		valor = 0;
		character = ('0');
	}
	if (n < 0) 
	{
		valor = 1;
		character = ('-');
	}
	
	putchar(character);
	putchar(valor);
	return (salto);
}
