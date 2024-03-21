#include "lists.h"
/**
 * insert_dnodeint_at_index -  add element at a specific position in the list
 * @h: points to the list
 * @idx: position to add at
 * @n: element to add
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *addPos, *store1, *store2;

	unsigned int count = 0;

	if ((*h) == NULL)
	{
		return (NULL);
	}

	store1 = (*h);

	store2 = NULL;

	addPos = malloc(sizeof(dlistint_t));

	if (addPos == NULL)
	{
		return (NULL);
	}

	addPos->n = n;

	addPos->next = NULL;

	addPos->prev = NULL;

	if (idx == 0)
	{
		addPos->next = (*h);

		if ((*h) != NULL)
		{
			(*h)->prev = addPos;
		}
		return (addPos);
	}
	while (store1 != NULL && idx != 1)
	{
		store2 = store1;

		store1 = store1->next;

		idx--;
	}
	if (idx > count)
	{
		count++;
		return (NULL);
	}
	store2 = store1->next;

	store1->next = addPos;

	store2->prev = addPos;

	addPos->next = store2;

	addPos->prev = store1;

	return (*h);
}
