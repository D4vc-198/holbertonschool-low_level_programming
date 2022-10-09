#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: Alphabet x10
 */
void print_alphabet_x10(void)
{
	int contador = 0;

	while (contador <= 9)
	{
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		putchar('\n');
		contador++;
	}
}
