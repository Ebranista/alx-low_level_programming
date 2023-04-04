#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning
 * @head: start of the list
 * @n: data to the new node
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listitn_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
