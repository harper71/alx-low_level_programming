#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copy memory with a specific  byte
 *  @dest: pointer that is returned
 *  @src: chatacter of 1 byte to copy
 *  @n: to initialize an for loop
 *
 *  Return: pointer dest as the new byte of the function
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		src[i] = dest[i];
		n--;
	}
	return (dest);
}
