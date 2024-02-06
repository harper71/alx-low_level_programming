#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a particular node
 * @head: points to the list
 * @index: position to be deleted
 * Return: value 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;

	listint_t *temp;

	if (ptr == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = ptr->next;

		free(ptr);
		return (1);
	}
	index--;
	while (index > 0 && ptr != NULL)
	{
		ptr = ptr->next;

		index--;
	}
	if (ptr == NULL || ptr->next == NULL)
	{
		return (-1);
	}
	temp = ptr->next;

	ptr->next = temp->next;

	free(temp);
	return (1);
}
