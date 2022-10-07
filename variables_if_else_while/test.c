#include <stdio.h>

/**
 * main - Entryes point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	int contador = 0;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = num1 + 1; num2 < 58; num2++, contador++)
		{
			for (num3 = num2 + 1; num3 < 58; num3++, contador++)
			{
				if (contador > 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(num1);
				putchar(num2);
				putchar(num3);
			}
		}
	}
	putchar('\n');
	return (0);
}
