#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	res = n % 10;
	/* your code goes there */
	if (res > 5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	}
	if (res == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, res);
	}
	if (res < 6 && res != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, res);
	}
	return (0);
}
