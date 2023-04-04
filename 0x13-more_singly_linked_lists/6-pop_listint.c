#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: the start node of the list
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int pop;
	listint_t *temp = *head;

	if (head == NULL)
		return (0);
	if (*had == NULL)
		return (0);

	*head = (*head)->next;
	pop = temp->next;
	free(temp);
	temp = NULL;

	return (pop);
}
