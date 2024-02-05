#include "lists.h"
/**
 * add_nodeint - add a node  to the begining
 * @head: points to the structure
 * @n: add this element to the list
 * Return: temp;
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;

	temp->next = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	temp->next = *head;

	*head = temp;

	return (temp);
}
