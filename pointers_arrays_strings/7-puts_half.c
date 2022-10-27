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

	if (contador % 2 == 0)
	{
		for( contador /= 2; str[contador] != '\0'; contador++)
		{
			_putchar(str[contador]);
		}
	} else {
		for ( contador = (contador - 1) / 2; str[contador] != '\0'; contador++)
		{
			_putchar(str[contador]);
		}
	}

	_putchar('\n');
}
