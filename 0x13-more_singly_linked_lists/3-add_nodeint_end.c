#include "lists.h"

/**
 * add_nodeint_end - add the new node at the end
 * @head: start point of the pointer
 * @n: data
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head, *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = ptr;

	return (*head);
}
