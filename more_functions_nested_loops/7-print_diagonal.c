#include "main.h"

void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(' ');

		if(i == n)
		{
			_putchar('\\');
		}
	}
}
