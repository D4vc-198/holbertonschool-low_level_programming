#include <stdio.h>
#include <math.h>

/**
 * main - finds factor number
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int number, max, i;

	number = 612852475143;
	max = -1;

	while (number % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			max = i;
			number = number / i;

		}
	}

	if (number > 2)
	{
		max = number;
	}

	printf("%ld\n", max);

	return (0);
}
