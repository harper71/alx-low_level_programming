#include "lists.h"
/**
 * free_list - free all aloccated memory
 * @head: pointes to the strcture memory
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;

		free(current->str);
		free(current);

		current = next;
	}
}
