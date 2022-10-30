#include <stdio.h>

char *cap_string(char *str)
{
	int i;
	int c =0;
	char sep[] = {32, 9, '\n', ',',';','.','!','?','"','(',')','{','}'};

	while (str[c])
	{
		i = 0;
		while (i < 13)
		{
			if( (c == 0 || str[c -1] == sep[i]) && (str[c] >= 97 && str[c] <= 122))
			{
				str[c] = str[c] - 32;
			}
			i++;
		}
		c++;
	}

	return (str);
}
