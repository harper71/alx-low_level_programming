#include "lists.h"
/**
 * print_listint - prints a linked list
 * @h: points to the struct node
 * Return: coount
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	const listint_t *ptr = h;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);

		ptr = ptr->next;

		count++;
	}
	return (count);
}
