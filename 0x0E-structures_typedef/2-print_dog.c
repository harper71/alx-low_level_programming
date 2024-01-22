#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints the struct dog
 * @d: points to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("name: (nil)");
	}
	else
	{
		printf("name: %s", d->name);
	}
	printf("age: %f", d->age);
	if (d->owner == NULL)
	{
		printf("owner: (nil)");
	}
	else
	{
		printf("owner: %s", d->owner);
	}
}

