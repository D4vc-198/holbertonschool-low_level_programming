#include "main.h"
#define NULL 0;

/**
 * _strstr - locates a substring
 * @haystack: search string
 * @needle: target substring
 * Return: index of string at fist ocurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;

	if(needle[0] == '\0')
		return (haystack);

	while  (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
					x++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
