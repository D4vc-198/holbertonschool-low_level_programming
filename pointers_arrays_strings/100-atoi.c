#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int sign;
	unsigned int number;

	sign = 1;
	number = 0;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = (number * 10) + (*s - '0');
		}
		else if (number > 0)
			break;

	} while (*s++);

	return (number * sign);
}
