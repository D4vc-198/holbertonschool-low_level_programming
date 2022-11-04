#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array cointais arguments
 * Return: 1 Error or 0 Success
 */

int main(int argc, char *argv)
{
	int i, j;
	int numbers = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		numbers += atoi(argv[i]);
	}

	printf("%d\n", numbers);
	return (0);
}
