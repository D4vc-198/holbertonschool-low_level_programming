#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: value min array
 * @max: value max array
 * Return: array
 */

int *array_range(int min, int max)
{
	int *array;
	int size, i, j;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (j = 0, i = min; i <= max; j++, i++)
		array[j] = i;

	return (array);
}
