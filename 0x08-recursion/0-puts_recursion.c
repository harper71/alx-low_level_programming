#include "main.h"

/**
 *_puts_recursion - main function that prints a string
 *
 *@s: function parameter
 *
 * Return: Always thr function.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}

