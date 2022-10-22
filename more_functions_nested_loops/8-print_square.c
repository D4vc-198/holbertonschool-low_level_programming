#include "main.h"
/**
 * print_square - print square #
 * @size: is a size square
 */
void print_square(int size)
{
	int count;
	int i;

	count = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			count++;
		}
	}
}
