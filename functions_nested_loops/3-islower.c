#include <stdio.h>
#include <ctype.h>

/**
 * _isLower return 1
 *
 * other case return 0
*/
int _islower(int c)
{
	int valor;
	if (islower(c))
	{
		valor = 1;
	}
	else
	{
		valor = 0;
	}
	putchar('\n');
	return  valor;
}
