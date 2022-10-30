#include "main.h"
/**
 * leet - encode string into 1337
 * @str: string to encode
 * Return: str encode
 */
char *leet(char *str)
{
	int i, j;
	char encode[] = {65, 52, 69, 51, 79, 48, 84, 55, 76, 49};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if ((str[i] == encode[j] || str[i] == (encode[j] + 32)))
			{
				str[i] = encode[j + 1];
			}
		}
	}

	return (str);
}
