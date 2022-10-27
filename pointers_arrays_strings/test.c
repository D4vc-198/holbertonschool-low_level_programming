#include <stdio.h>

int main(void)
{
	int size;
	int res;

	size = 11;
	res = size % 2;

	if (res == 0)
	{
		printf("%d, es par", res);
	} else {
		printf("%d", res);
	}

	return 0;
}
