#include "main.h"
/**
 * _strncpy - copies the string pointed to by src to dest
 * @dest: dest to string
 * @src: source string
 * @n: number byte copies
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int contador;

	for (contador = 0; src[contador] != '\0' && contador < n; contador++)
	{
		dest[contador] = src[contador];
	}

	for (; contador < n; contador++)
		dest[contador] = '\0';

	return (dest);
}
