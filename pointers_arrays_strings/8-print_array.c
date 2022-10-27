#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: numbers of elements of the array to be printed
 */

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
