#include <limits.h>
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = 98;
	if (r < 0)
		r *= -1;
	putchar(r + '0');
	putchar('\n');
	return (0);
}