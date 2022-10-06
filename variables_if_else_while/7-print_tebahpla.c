#include <stdio.h>

/**
 * main - Entryes point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}


