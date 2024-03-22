#include "lists.h"
/**
 * sum_dlistint - sum all element in a list
 * @head: points to the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p_sum = NULL;

	int sum = 0;

	p_sum = head;

	if (head == NULL)
	{
		return (0);
	}
	while (p_sum != NULL)
	{
		sum += p_sum->n;

		p_sum = p_sum->next;
	}
	return (sum);
}
