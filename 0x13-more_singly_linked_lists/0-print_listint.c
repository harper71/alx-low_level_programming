#include "lists.h"
/**
 * print_listint - prints a linked list
 * @h: points to the struct node
 * Return: coount
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (-1);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		count++;
	}
	return (count);
}
