#include "main.h"

void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
}
