#include <stdio.h>

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		a[i] = a[i];
	}
}
