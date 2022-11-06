#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * digit - check string contains a non-digit char
 * @str: string
 * Return 0 a non-digit or 1 otherwise
 */
int digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - return lenght of a string
 * @str: string
 * Return: lenght of a string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * main - mult two positive numbers
 * @argc; number of arguments
 * @argv: array of arguments
 * Return: alway 0 (Success)
 */
int main (int argc, char *argv[])
{
	char *s1, *s2;
	int lenght, lenght1,lenght2;
	int i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !digit(s1) || !digit(s2))
	{
		printf("Error\n");
		exit(98);
	}
	lenght1 = _strlen(s1);
	lenght2 = _strlen(s2);
	lenght = lenght1 + lenght2 + 1;
	result = malloc(sizeof(int) * lenght);

	if (!result)
		return (1);
	for (i = 0; i < lenght1 + lenght2; i++)
		result[i] = 0;
	for (lenght1 = lenght1 - 1; lenght1 >= 0; lenght1--)
	{
		digit1 = s1[lenght1] - '0';
		carry = 0;

		for (lenght2 = _strlen(s2) - 1; lenght2 >= 0; lenght2--)
		{
			digit2 = s2[lenght2] - '0';
			carrt += result[lenght1 + lenght2 + 1] + (digit1 * digit2);
			result[lenght1 + lenght2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[lenght1 + lenght2 + 1] += carry;
	}
	for (i = 0; i < lenght - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
