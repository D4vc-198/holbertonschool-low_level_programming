#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: 1er integer
 * @b: 2do integer
 */
void swap_int(int *a, int *b)
{
	int a1, b1;

	a1 = *a;
	b1 = *b;

	*a = b1;
	*b = a1;
}
