#include "lists.h"

/**
 * sum_listint - get the sum of all the contents of the linked list
 * @head: start node of the linked list
 * Return: sum of the content of the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
