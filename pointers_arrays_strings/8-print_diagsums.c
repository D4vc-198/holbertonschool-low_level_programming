#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size matrix
 */

void print_diagsums(int *a, int size)
{
	int dsum1 = 0;
	int dsum2 = 0;
	int i, row;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		dsum1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		dsum2 += a[i];
	}

	printf("%d, %d\n", dsum1, dsum2);
}
