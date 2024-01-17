#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - used to check the length of the string
 * @s: points to a character or a string of characters
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (1);
}
/**
 * _strdup - duplicates a string of characters
 * @str: character to be dulicaterd
 * Return: val5 always
 */
char *_strdup(char *str)
{
	int l = _strlen(str);

	int x = 0;

	char *val5;

	if (str == NULL)
	{
		return (NULL);
	}
	val5 = (char *)malloc(l * sizeof(char));

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
	free(val5);
}
