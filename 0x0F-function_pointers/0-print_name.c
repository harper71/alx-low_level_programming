#include "main.h"
/**
 * print_name - print the name
 * @name: name to be printed
 * @f: pointer to the function
 * Return: f
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
