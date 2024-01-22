#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - for intializing the structure dog
 * @d: a structure of type struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
