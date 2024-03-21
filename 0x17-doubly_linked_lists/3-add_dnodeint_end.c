#include "lists.h"
/**
 * add_dnodeint_end - add a data at the end of a list
 * @head: points to list
 * @n: element to add
 * Return: head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add, *ptr;

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

	if (*head == NULL)
	{
		(*head) = add;
		return (add);
	}

	ptr = *head;

	while ((ptr)->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = add;

	add->prev = ptr;

	return (add);
}
