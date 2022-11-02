#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - get the length of a prefix substring.
 * @s: string to search
 * @accept: prefix length
 * Return: length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	i = strspn(s, accept);
	return (i);
}
