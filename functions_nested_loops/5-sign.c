#include <stdio.h>

int print_sign(int n)
{
	if(n > 0)
	{
		return ('\n');
		putchar('+');
		putchar('1');
	}
	if (n == 0)
	{
		putchar('0');
		putchar('0');
	}
	if (n < 0) 
	{
		putchar('-');
		putchar('1');
	}
}
