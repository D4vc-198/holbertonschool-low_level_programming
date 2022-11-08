#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - instance of struct dog
 * @d: instance to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);

	free(d);
}
