#include "main.h"

int _strlen_recursion(char *s)
{
	return (1 + _strlen_recursion(s++));
}
