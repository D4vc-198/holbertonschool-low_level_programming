#include <stdio.h>
#include <ctype.h>

/**
 * _isLower return 1
 *
 * other case return 0
*/
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