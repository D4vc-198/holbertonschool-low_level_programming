#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0 (Success);
 */

int main(void)
{
	unsigned long contador, num1, num2;
	unsigned long num1_1, num1_2;
	unsigned long num2_1, num2_2;

	num1 = 1;
	num2 = 2;

	printf("%lu", num1);

	for (contador = 1; contador < 91; contador++)
	{
		printf(", %lu", num2);
		num2 = num2 + num1;
		num1 = num2 - num1;
	}

	num1_1 = num1 / 1000000000;
	num1_2 = num1 % 1000000000;
	num2_1 = num2 / 1000000000;
	num2_2 = num2 % 1000000000;

	for (contador = 92; contador < 99; ++contador)
	{
		printf(", %lu", num2_1 + (num2_2 / 1000000000));
		printf("%lu", num2_2 % 1000000000);
		num2_1 = num2_1 + num1_1;
		num1_1 = num2_1 - num1_1;
		num2_2 = num2_2 + num1_2;
		num1_2 = num2_2 - num1_2;
	}

	printf("\n");
	return (0);
}
