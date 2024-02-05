#include "lists.h"
/**
 * free_listint2 - free all aloccated memory
 * @head: pointes to the strcture memory
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (current != NULL)
	{
		next = current->next;

		free(current);

		current = next;
	}
	*head = NULL;
}
