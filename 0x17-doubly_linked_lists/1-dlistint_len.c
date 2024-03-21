#include "lists.h"
/**
 * dlistint_len - prints a doubly linked list
 * @h: head node of the list
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;

		count++;
	}
	return (count);
}
