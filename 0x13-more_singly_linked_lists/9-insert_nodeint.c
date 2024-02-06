#include "lists.h"
/**
 * insert_nodeint_at_index - add an element at a certian indx in the list
 * @head: points to the list
 * @idx: the position to add the value to
 * @n: the value to be added
 * Return: addToPos
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;

	listint_t *addToPos = malloc(sizeof(listint_t));

	addToPos->n = n;

	addToPos->next = NULL;

	if (addToPos == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		addToPos->next = *head;

		*head = addToPos;

		return (addToPos);
	}
	idx--;
	while (idx > 0  && ptr !=    NULL)
	{
		ptr = ptr->next;

		idx--;
	}
	if (ptr == NULL)
	{
		free(addToPos);
		return (NULL);
	}
	addToPos->next = ptr->next;

	ptr->next = addToPos;

	return (addToPos);
}
