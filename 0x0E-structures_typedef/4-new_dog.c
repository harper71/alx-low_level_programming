#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - for intializing the structure dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner's name
 * Return: new
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}

