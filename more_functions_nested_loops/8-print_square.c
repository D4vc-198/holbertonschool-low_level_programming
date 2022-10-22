#include "main.h"

void print_square(int size)
{
	int count;
	int i;

	count = 0;
	while (count <= size)
	{
		for (i = 0; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		count++;
	}
}
