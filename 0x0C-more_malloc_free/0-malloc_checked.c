#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: type of memory to be allocated
 * Return: 0 always
 */
void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
