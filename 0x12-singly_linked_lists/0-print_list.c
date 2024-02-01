#include "lists.h"
/**
 * print_list - used to print the values in alinked list
 * @h: point to the stucture type list_t
 * Return: count
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;

	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		ptr = ptr->next;

		count++;
	}
	return (count);
}
