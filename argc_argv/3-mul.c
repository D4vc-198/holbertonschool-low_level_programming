#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of the multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 Error or 0 Success
 */

int main(int argc, char *argv[])
{

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
