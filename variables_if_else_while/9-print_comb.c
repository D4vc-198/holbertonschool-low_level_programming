#include <stdio.h>

/**
 * main - Entryes point
 *
 * Return: Always 0 (Succes);
 */
int main(void)
{
	int number;
	int coma;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
		for (coma = number; coma <= number; coma++)
		{
			if (coma < 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
