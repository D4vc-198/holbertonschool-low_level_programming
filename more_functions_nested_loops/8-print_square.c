#include "main"

void print_square(int size)
{
	int count;
	int i;

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
