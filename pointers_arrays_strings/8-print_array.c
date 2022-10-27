#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int contador = 0;

	for (; contador < n; contador++)
	{
		printf("%d", a[contador]);

		if (contador != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
