#include <stdio.h>

void print_alphabet(void)
{
    char character;

    for (character = 'a'; character <= 'z'; character++)
    {
        putchar(character);
    }
    putchar('\n');
}