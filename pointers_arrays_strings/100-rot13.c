#include "main.h"

/**
 * rot13 - encode string a using rot13
 * @str: string to encode
 * Return: str encode ro13
 */

char *rot13(char *str)
{
	int i, j;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cifrado[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '\0'; j++)
		{
			if (str[i] == alph[j])
			{
				str[i] = cifrado[j];
				break;
			}
		}
	}

	return (str);
}
