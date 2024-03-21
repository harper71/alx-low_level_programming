#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a specific node
 * @head: pointd to a list
 * @index: position to be deleted
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp2;

	temp1 = (*head);

	temp2 = NULL;

	if (index == 1)
	{
		free(temp1);
		return (1);
	}

	while (index > 1)
	{
		temp1 = temp1->next;
		index--;
	}
	if (temp1->next == NULL)
	{
		free(temp1);
		return (-1);
	}
	else
	{
		temp2 = temp1->prev;
		temp2->next = temp1->next;
		temp->next->prev = temp2;
		free(temp1);
		temp1 = NULL;
	}
	return (1);
}


