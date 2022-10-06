#include <stdio.h>

/**
* main - Entryes point
*
* Return: always 0 (Success)
*/
int main(void)
{
	char primerString;
	char segundoString;

	for (primerString = 'a'; primerString <= 'z'; primerString++)
	{
		putchar(primerString);

		if (primerString == 'z')
		{
			for (segundoString = 'A'; segundoString <= 'Z'; segundoString++)
			{
				putchar(segundoString);
			}
		}
	}
	putchar('\n');
	return (0);
}