#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: count of args passed
 * @av: array arguments
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	string = malloc(sizeof(char) * size + 1);

	if (string == NULL)
		return (NULL);
	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			string(i++) = av[arg][byte];

		string[i++] = '\n';
	}
	string[size] = '\0';
	return (string);
}
