#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	/* return if empty list */
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
