#include "lists.h"
/**
 * insert_dnodeint_at_index -  add element at a specific position in the list
 * @h: points to the list
 * @idx: position to add at
 * @n: element to add
 * Return: addPos
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *addPos, *store1, *store2;

	unsigned int count = 0;

	if (h == NULL)
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
	while (store1 != NULL && count != idx)
	{
		store2 = store1;

		store1 = store1->next;

		count++;
	}
	if (count != idx)
	{
		return (NULL);
	}
	store2->next = addPos;

	addPos->prev = store2;

	addPos->next = store1;
	if (store1 != NULL)
	{
		store1->prev = addPos;
	}

	return (addPos);
}
