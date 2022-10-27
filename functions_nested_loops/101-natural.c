#include <stdio.h>

/**
 * main - Entryes point
 * Return: Always 0 (Succes)
 */

int main(void)
{
	unsigned long int suma3, suma5, suma;
	int contador;

	suma3 = 0;
	suma5 = 0;
	suma = 0;

	for (contador = 0; contador < 1024; contador++)
	{
		if ((contador  % 3) == 0)
		{
			suma3 = suma3 + contador;
		} else if ((contador % 5) == 0)
		{
			suma5 = suma5 + contador;
		}
	}

	suma = suma3 + suma5;
	printf("%lu\n", suma);
	return (0);
}
