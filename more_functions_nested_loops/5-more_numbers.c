#include "main.h"
/**
 * more_numbers - print 10 times the numbers 0-14
 */

void more_numbers(void)
{
	int number;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				_putchar('0' + number / 10);
			}
			_putchar('0' + number % 10);
		}
		_putchar('\n');
	}
}
