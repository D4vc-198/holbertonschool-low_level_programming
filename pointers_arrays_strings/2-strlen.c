#include "main.h"
#include <string.h>

int _strlen(char *s)
{
	int lenght;

	lenght = strlen(s);
	*s = lenght;

	return (0);
}
