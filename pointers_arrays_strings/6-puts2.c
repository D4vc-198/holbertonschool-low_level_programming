#include "main.h"

/**
 * puts2 - prints every other characther of a string
 * @str: string
 */

void puts2(char *str)
{
	int contador;

	for (contador = 0; str[contador] != '\0'; contador++)
	{
		if (contador % 2 == 0)
		{
			_putchar(str[contador]);
		}
	}

	_putchar('\n');
}
