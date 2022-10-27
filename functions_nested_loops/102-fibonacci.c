#include <stdio.h>

/**
 * main - Prints first 50 fibonacci
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int num1, num2, num3, siguiente;

	num2 = 1;
	num3 = 2;

	for (num1 = 1; num1 <= 50; ++num1)
	{
		if (num2 != 20365011074)
		{
			printf("%ld, ", num2);
		} else
		{
			printf("%ld\n", num2);
		}

		siguiente = num2 + num3;
		num2 = num3;
		num3 = siguiente;
	}

	return (0);
}
