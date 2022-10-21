#include "main.h"

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number ++)
	{
		_putchar('0' + number);
	}

	_putchar('\n');

}
