#include <stdio.h>

int main(int argc, char *argv[])
{

	if (argc == 0)
		printf("Error");
	else 
	{
		printf("%d", (int)(argv[1] * argv[2]));
	}

	return (0);
}
