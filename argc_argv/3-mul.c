#include <stdio.h>

int main(int argc, char *argv[])
{

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	else 
	{
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
