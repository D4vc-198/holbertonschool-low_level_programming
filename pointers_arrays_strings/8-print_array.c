#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int contador;

	for (contador = 0; contador <= n; contador++)
	{
		printf("%d", a[contador]);
	}
}
