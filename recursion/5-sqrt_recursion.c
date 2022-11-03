#include "main.h"

/**
 * c_root - find square root of n
 * @n: n
 * @root: root
 * Return: natural square root
 */

int c_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);

	return (c_root(n, root + 1));
}

/**
 * _sqrt_recursion -find natural square
 * @n: n
 * Return: narutal square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (c_root(n, 0));
}
