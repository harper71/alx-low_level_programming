#include "lists.h"
/**
 * add_node - add an element at the begining of the list
 * @head: points tothe structure
 * @str: element to add at the start of the list
 * Return: temp
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->next = *head;

	*head = temp;

	return (temp);
}
