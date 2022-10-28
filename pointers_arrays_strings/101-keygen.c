#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 0 Always (success)
 */

int main(void)
{
	int suma;
	char c;

	srand(time(NULL));
	while (suma <= 2645)
	{
		c = rand() % 128;
		suma += c;
		putchar(c);
	}

	putchar(2772 - suma);
	return (0);
}
