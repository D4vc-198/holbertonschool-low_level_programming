#include <stdio.h>
/**
 * print_to_98 - print natural numbers
 * @n: is param to print
 * Return: void
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i <= 97)
			{
				printf(", ");
			}
		}
	}

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i >= 99)
			{
				printf(", ");
			}
		}
	}
	printf("\n");

}