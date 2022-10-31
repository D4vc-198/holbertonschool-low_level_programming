#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to copies src
 * @src: source char
 * int: num bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
