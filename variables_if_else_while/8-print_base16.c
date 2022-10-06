#include <stdio.h>

/**
 * main - Entryes point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int hex1;
	char hex2;

	for (hex1 = 0; hex1 <= 9; hex1++)
	{
		putchar((hex1 % 10) + '0');
		if (hex1 == 9)
		{
			for (hex2 = 'A'; hex2 <= 'F'; hex2++)
			{
				putchar(hex2);
			}
		}
	}
	putchar('\n');
	return (0);
}
