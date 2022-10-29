#include <stdio.h>
/**
 * reverse_array - reverse the content of an array of integers.
 * @a: array reverse
 * @n: elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
