#include <stdio.h>

/**
* main - Entryes point
*
* Return: always 0 (Success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if ((alphabet != 'e') && (alphabet != 'q'))
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
