#include "lists.h"

/**
 * free_listint - frees up the memory allocated for linked list
 * @head: start point of the pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	lintint_t *temp;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
