#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: delimiter
 * @n: amount of argument in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valis;
	unsigned int i;

	if (n > 0)
	{
		va_start(valis, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(valis, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valis);
	}
	printf("\n");
}
