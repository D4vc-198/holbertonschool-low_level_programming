#include "lists.h"

/**
 * list_len - prints lenght of list_t linked lis
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
