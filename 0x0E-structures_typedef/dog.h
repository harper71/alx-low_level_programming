#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a structure of type dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 */
struct dog
{
	float age;
	char *owner;
	char *name;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
