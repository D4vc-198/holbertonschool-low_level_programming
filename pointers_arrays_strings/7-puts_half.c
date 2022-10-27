#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int contador;

	for (contador = 0; str[contador] != '\0'; contador++)
		;

	for(contador /= 2; str[contador] != '\0'; contador++)
	{
		_putchar(str[contador]);
	}

	_putchar('\n');
}
