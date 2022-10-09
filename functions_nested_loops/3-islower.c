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
		c = 1;
		return c;
	}
	else
	{
		c = 0;
		return c;
	}
}