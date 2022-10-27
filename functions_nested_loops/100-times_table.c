#include "main.h"

/**
 * print_times_table - print times table
 * @n: number time table
 */

void print_times_table(int n)
{
	int num1, num2, num3;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; num2++)
			{
				num3 = num1 * num2;
				_putchar(44);
				_putchar(32);

				if (num3 <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(num3 + 48);
				}
				else if (num3 <= 99)
				{
					_putchar(32);
					_putchar((num3 / 10) + 48);
					_putchar((num3 % 10) + 48);
				}
				else
				{
					_putchar(((num3 / 100) % 10) + 48);
					_putchar(((num3 / 10) % 10) + 48);
					_putchar((num3 % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
