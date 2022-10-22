#include <stdio.h>
/**
 * main - print Fizz-Buzz
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if (numbers % 3 == 0)
		{
			if (numbers % 15 == 0)
			{
				printf(" FizzBuzz");
			}
			else
			{
				printf(" Fizz");
			}
		}
		else if (numbers % 5 == 0)
		{
			if (numbers % 15 == 0)
			{
				printf(" FizzBuzz");
			}
			else
			{
				printf(" Buzz");
			}
		}
		else if (numbers == 1)
		{
			printf("%d", numbers);
		}
		else
		{
			printf(" %d", numbers);
		}
	}

	printf("\n");

	return (0);
}
