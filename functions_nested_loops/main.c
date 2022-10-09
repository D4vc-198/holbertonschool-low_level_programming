#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _islower(int c)
{
	if (islower(c))
	{
		putchar(1);
	}
	else
	{
		putchar(0);
	}
}

int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');

    r = _islower('o');
    _putchar(r + '0');
    
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return 0;
}