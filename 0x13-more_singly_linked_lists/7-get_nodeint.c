#include "lists.h"

/**
 * get_nodeint_at_index - return the node at specified index
 * @head: start node of the list
 * @index: indext to find the node
 * Return: node or NULL (if node does not exist)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((head != NULL) && (i <= index))
	{
		x = head;
		head = head->next;
		i++;
	}
	if (i < index)
		return (NULL);

	return (x);
}
