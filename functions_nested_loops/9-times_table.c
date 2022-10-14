#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - print table x9
*/
void times_table(void)
{
	int i, j;
	int mat[10][10];

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mat[i][j] = i * j;
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d, ", mat[i][j]);
		}
		printf("\n");
	}
}
