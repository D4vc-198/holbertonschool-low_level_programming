#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select correct op function
 * @s: operation (+, *, -, /, %)
 * Return: correct operation
 */

int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
		{"+", operation_add},
		{"-", operation_sub},
		{"*", operation_mult},
		{"/", operation_div},
		{"%", operation_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
