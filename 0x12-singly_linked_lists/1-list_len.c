#include "lists.h"

/**
 * list_len - length of the list
 * @h:  pointes to node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
