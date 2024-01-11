#include "main.h"

/**
 *_print_rev_recursion - main function that prints a string in reverse
 *
 *@s: function parameter
 *
 * Return: Always thr function.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
	return (0);
}

