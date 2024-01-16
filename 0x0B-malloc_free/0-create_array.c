#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates a string of carracter
 * @size: this is the number of character
 * @c: the character array
 * Return: arrSTR always
 */
char *create_array(unsigned int size, char c)
{
	char *arrSTR = (char *)malloc(size * sizeof(char));

	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (arrSTR != NULL)
	{
		while (i < size)
		{
			arrSTR[i] = c;
			i++;
		}
	}
	return (arrSTR);
}
