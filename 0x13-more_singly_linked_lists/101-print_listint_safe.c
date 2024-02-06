#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: points to the struct node
 * Return: coount
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head;

	size_t count = 0;

	if (head == NULL)
	{
		exit(98);
	}
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		if (ptr <= ptr->next)
		{
			exit(98);
		}

		ptr = ptr->next;

		count++;
	}
	return (count);
}
