#include <stdio.h>

void reverse_array(int *a, int n)
{
	int inicio;
	int final;

	for (inicio = 0; a[inicio] != '\0' && inicio < n; inicio++)
		;

	for (final = inicio; final >= 0; final--)
	{
		a[inicio--] = a[final]; 
	}
}
