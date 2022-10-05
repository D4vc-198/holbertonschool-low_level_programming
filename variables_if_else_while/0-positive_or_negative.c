#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc para la función principal va allí */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive\n");
	}

	if (n == 0)
	{
		printf("is zero\n");
	}

	if (n < 0)
	{
		printf("is negative\n");
	}

	return (0);
}
