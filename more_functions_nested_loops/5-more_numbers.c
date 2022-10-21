#include "main.h"

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
