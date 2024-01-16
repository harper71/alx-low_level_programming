#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string of characters
 * @str: character to be dulicaterd
 * Return: val5 always
 */
char *_strdup(char *str)
{
	int l = 0;

	int x = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	char *val5 = (char *)malloc((l + 1) * sizeof(char));

	while (str[l] != '\0')
	{
		l++;
	}
	if (val5 != NULL)
	{
		for (; x < l ; x++)
		{
			val5[x] = str[x];
		}
		val5[l] = '\0';
	}
	return (val5);
}
