#include "lists.h"
/**
 * pop_listint - deletes the first node int a list
 * @head: points to the list
 * Return: value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	int value = temp->n;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;

	free(temp);

	temp = NULL;

	return (value);
}
