#include <stdio.h>

int print_sign(int n)
{
	if(n > 0)
	{
		printf("%-d", 1);
	}
	if (n == 0)
	{
		printf("%d", 0);
	}
	else 
	{
		printf("%-d", 1);
	}

	return (0);
}
