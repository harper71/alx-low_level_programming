#include "lists.h"
/**
 * free_listint - free all aloccated memory
 * @head: pointes to the strcture memory
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;

		free(current);

		current = next;
	}
}
