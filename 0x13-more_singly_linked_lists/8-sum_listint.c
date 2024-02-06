#include "lists.h"
/**
 * sum_listint - sums the linked list
 * @head: points to the list to be sumed
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}
	return (sum);
}
