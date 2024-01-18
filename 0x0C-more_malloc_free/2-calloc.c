#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: array name
 * @size: array size
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	
	char *arr = (char *)malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
