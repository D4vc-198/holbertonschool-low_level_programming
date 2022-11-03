#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: dest to string
 * @src: source string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int contador;

	for (contador = 0; *(src + contador) != '\0'; contador++)
	{
		dest[contador] = *(src + contador);
	}

	dest[contador] = '\0';

	return (dest);
}
