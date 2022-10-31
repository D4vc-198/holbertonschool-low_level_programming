#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: content of bytes of the buffer
 * @size: size of the buffer
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <=)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x", i);
			for (j = i; j < i + 10; j++)
			{
				if (j  % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", *(b + j));
				else
					printf(" ");
			}
			printf(" ");
			for (k = i; k < i + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
		}
	}
}
