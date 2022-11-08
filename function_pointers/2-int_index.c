#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer so searching function that we need to execute
 * Return: index where integer's found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
