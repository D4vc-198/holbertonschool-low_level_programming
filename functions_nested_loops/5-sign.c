#include <stdio.h>

int print_sign(int n)
{
	int valor = 0;
	char character;
	if(n > 0)
	{
		valor = 1;
		character = '+';
	}
	if (n == 0)
	{
		valor = 0;
	}
	if (n < 0) 
	{
		valor = 1;
	}
	putchar(character);
	return valor;
}
