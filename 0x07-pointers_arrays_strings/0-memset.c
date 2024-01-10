#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fill memory with a specific  byte
 *  @s: pointer that is returned
 *  @b: chatacter of 1 byte
 *  @n: to initialize an for loop
 *
 *  Return: pointer s as the new byte of the function
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (i = 0; n > i; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
