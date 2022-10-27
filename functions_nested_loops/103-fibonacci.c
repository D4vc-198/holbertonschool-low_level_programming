#include <stdio.h>

/**
 * main - fibonacci find and prints the sum of the even-evaluated terms.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int contador;
	unsigned long int num1, num2, sig, suma;

	num1 = 1;
	num2 = 2;
	suma = 0;

	for (contador = 1; contador <= 33; ++contador)
	{
		if (num1 < 4000000 && (num1 % 2) == 0)
		{
			suma = suma + num1;
		}
		sig = num1 + num2;
		num1 = num2;
		num2 = sig;
	}

	printf("%lu\n", suma);

	return (0);
}
