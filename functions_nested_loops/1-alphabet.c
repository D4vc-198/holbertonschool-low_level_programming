#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
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

int main(void)
{
	print_alphabet();
	return (0);
}