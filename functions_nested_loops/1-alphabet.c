#include <stdio.h>
/**
 * print_alphabet - function
 *
 * Return: alphabet a-z
 */
void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
}
