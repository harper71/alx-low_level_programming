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

	unsigned int count;

	temp1 = (*head);

	temp2 = NULL;

	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}

		free(temp1);
		return (1);
	}

	count = 0;
	while (count < index && temp1 != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		count++;
	}
	if (temp1 == NULL)
	{
		return (-1);
	}
	if (temp1->next != NULL)
	{
		temp1->next->prev = temp2;
	}
	temp2->next = temp1->next;

	free(temp1);
	return (1);
}
