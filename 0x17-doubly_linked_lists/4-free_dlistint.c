#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: points to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	while (head != NULL)
	{
		freed = head;

		head = head->next;

		free(freed);
	}
}
