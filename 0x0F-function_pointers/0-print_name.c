#include "main.h"
/**
 * print_name - print the name
 * @name: name to be printed
 * @f: pointer to the function
 * Return: f
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * name_1 - name if the person
 * @name: the name
 * Return: nothing
 */
void name_1(char *name)
{
	int i = 0;

	while (name[i] != '\n' && name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}
