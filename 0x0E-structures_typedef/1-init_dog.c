#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - for intializing the structure dog
 * @d: a structure of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *da = malloc(sizeof(d));
	d->name = name;
	d->age = age;
	d.owner = owner;
	return (d);
}
