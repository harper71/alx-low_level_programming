#include "lists.h"
/**
 * print_list - used to print the values in alinked list
 * @h: point to the stucture type list_t
 * Return: nothing
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;

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
	}
	return (0);
}
