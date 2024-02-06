#include "lists.h"
/**
 * get_nodeint_at_index - returns the value of a particular index
 * @head: points to the linked list
 * @index: the index of the value to return
 * Return: temp
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	unsigned int count = 0;

	while (temp != NULL && count < index)
	{
		temp = temp->next;

		count++;
	}
	if (temp == NULL || count > index)
	{
		return (NULL);
	}
	return (temp);
}
