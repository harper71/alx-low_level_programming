#include "lists.h"
/**
 * add_node_end - add an an element at rhe end of a list
 * @head: pointer that points to the structure
 * @str: new string to be added
 * Return: new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = *head;

	temp = (list_t *)malloc(sizeof(list_t));

	temp->str = strdup(str);

	temp->next = NULL;

	if (temp == NULL)
	{
		return (NULL);
	}
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);
}
