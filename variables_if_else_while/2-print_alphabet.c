#include <stdio.h>

/**
* main - Entryes point
*
* Return: always 0 (Success)
*/
int main(void)
{
    char character;
    for (character = 'a'; character <= 'z'; character++)
    {
        putchar(character);
    }
    return (0);
}