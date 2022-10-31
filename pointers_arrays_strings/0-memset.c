#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to instert constant
 * @b: constant
 * @n: bytes
 * Return: pointer to the memory area S
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
