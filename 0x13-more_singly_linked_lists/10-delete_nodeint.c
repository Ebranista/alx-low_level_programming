#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at any index
 * @head: start node of linked list
 * @index: specified position
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *current = *head;
	unsigned int a;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (a = 0; current && (a <= index); a++)
	{
		if (a == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
	return (-1);
}
