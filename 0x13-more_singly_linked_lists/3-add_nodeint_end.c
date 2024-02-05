#include "lists.h"
/**
 * add_nodeint_end - add a node  to the end
 * @head: points to the structure
 * @n: add this element to the list
 * Return: temp;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	listint_t *ptr = *head;

	temp->n = n;

	temp->next = NULL;

	if (temp == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = temp;

		return (temp);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return (temp);
}
