#include "main.h"
#include <string.h>

int _strlen(char *s)
{
	int lenght;

	lenght = strlen(*s);
	*s = _putchar(lenght + '0');

	return (0);
}
