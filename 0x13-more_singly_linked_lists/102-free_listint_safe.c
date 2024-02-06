#include "lists.h"
/**
 * free_listint_safe - free all aloccated memory
 * @h: pointes to the strcture memory
 * Return: count.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;

	size_t count = 0;

	current = *h;

	while (current != NULL)
	{
		count++;
		if (current <= current->next)
		{
			*h = NULL;
			free(current);
			return (count);
		}

		next = current->next;

		current = next;

		free(current);
	}
	*h = NULL;

	return (count);
}
