#include "lists.h"
/**
 * add_dnodeint - add a data at the end of a list
 * @head: points to list
 * @n: element to add
 * Return: head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	if (head == NULL)
	{
		return (NULL);
	}

	add = malloc(sizeof(dlistint_t));

	if (add == NULL)
	{
		return (NULL);
	}

	add->next = NULL;

	add->n = n;

	add->prev = NULL;

	add->next = (*head);

	if (*head != NULL)
	{
		(*head)->prev = add;
	}

	(*head) = add;

	return (add);
}
