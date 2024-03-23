#include "lists.h"
/**
 * get_dnodeint_at_index - get data at a specif pos in list
 * @head: points to the list
 * @index: to be accesed
 * Return: get
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get;

	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	get = head;

	while (get != NULL && count < index)
	{
		get = get->next;
		count++;
	}
	if (count != index)
	{
		return (NULL);
	}
	return (get);
}
