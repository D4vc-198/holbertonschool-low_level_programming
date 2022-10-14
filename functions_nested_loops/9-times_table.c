#include <stdio.h>

int main(void)
{
	int number;
	int contador = 0;
	while (number <= 9)
	{

		for (number = 0; number <= 9; number++)
		{
			printf("%d", contador);
		}
		contador++;
		if(contador == 9)
		{
			break;
		}
	}


}