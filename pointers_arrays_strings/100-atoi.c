#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string
 */

int _atoi(char *s)
{
	int sign;
	unsigned int number;

	sign = 1;
	number = 0;

	do 
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}
