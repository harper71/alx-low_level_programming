#include "main.h"
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
	return (i);
}
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: join pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;

	int len1 = _strlen(s1);

	int len2 = _strlen(s2);

	char *join = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (join != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			join[i] = s1[i];
		}
		for (j = 0; j < len2; j++, i++)
		{
			join[i] = s2[j];
		}
		join[i] = '\0';
	}
	return (join);
	free(join);
}
