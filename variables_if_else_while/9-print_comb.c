#include <stdio.h>

/**
 * main - Entryes point
 *
 * Return: Always 0 (Succes);
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number < 9)
		{
			putchar((number % 10) + '0');
			putchar(',');
			putchar(' ');
		} else
		{
			putchar((number % 10) + '0');
		}
	}
	return (0);
}