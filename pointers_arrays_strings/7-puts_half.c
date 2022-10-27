#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int contador;
	int size;

	for (contador = 0; str[contador] != '\0'; contador++)
		;

	size = contador % 2;

	if ( size == 0)
	{
		for( contador /= 2; str[contador] != '\0'; contador++)
		{
			_putchar(str[contador]);
		}
	}

	if (size != 0) {
		contador = contador - 1;
		for ( contador = (contador - 1) / 2; str[contador] != '\0'; contador++)
		{
			_putchar(str[contador]);
		}
	}

	_putchar('\n');
}
