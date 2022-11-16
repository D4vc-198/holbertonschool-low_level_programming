#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: list
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;
	
	while (h != NULL)
	{
		n_nodes += 1;
		h = h->next;
	}
	return (num_nodes);
}
