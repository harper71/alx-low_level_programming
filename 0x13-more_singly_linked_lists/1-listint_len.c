#include "lists.h"
/**
 * listint_len - counts a linked list
 * @h: points to the struct node
 * Return: coount
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (-1);
	}
	while (h != NULL)
	{
		count++;

		h = h->next;
	}
	return (count);
}
