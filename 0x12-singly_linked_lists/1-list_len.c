#include "lists.h"
/**
 * list_len - count the number of element in a list
 * @h: pointer to the list
 * Return: count
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;

	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		ptr = ptr->next;

		count++;
	}
	return (count);
}
