#include <stdio.h>

int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if (numbers % 3 == 0)
		{
			if (numbers % 15 == 0)
				printf("FizzBuzz ");

			printf("Fizz ");
		}
	   	else if ( numbers % 5 == 0)
		 {
			 if(numbers % 15 == 0)
				printf("FizzBuzz");
			printf("Buzz ");
		}
		else 
		{
			printf("%d ", numbers);
		}
	}

	printf("\n");

	return (0);
}
