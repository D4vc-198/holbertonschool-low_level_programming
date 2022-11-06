#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: size allocated space for ptr
 * @new_size: size for the new memory
 * Return: pointer to the address of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *numptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		numptr = malloc(new_size);
		if (numptr == NULL)
			return (NULL);
		return (numptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	numptr = malloc(new_size);
	if (numptr == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
	{
		numptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (numptr);
}
