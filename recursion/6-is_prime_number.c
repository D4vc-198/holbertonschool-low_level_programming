#include "main.h"

/**
 * is_prime - check number is prime or no
 * @n: number
 * @x: buffer
 * Return: prime number or no (1 or 0)
 */
int is_prime(int n, int x)
{
	if (n == 1)
		return (0);
	else if (n % x == 0 && x != n && x != 1)
		return (0);
	else if (n % x == 0 && x == n)
		return (1);
	else
		return (is_prime(n, x + 1));
}

/**
 * is_prime_number - return 1 if the inpute integer is a primer number
 * @n: number
 * Return: 1 or 0 primer number
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
