#include "main.h"

void more_numbers(void)
{
	int number;
	int count;

	while (count <= 9)
	{
		for (number = 0; number <= 14; number++)
		{
			_putchar('0' + number);
		}
		_putchar('\n');
		count++;
	}

	_putchar('\n');
}
