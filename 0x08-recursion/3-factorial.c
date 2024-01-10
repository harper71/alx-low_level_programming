#include "main.h"
#include <stdlib.h>
/**
 * factorial - function that print the factorial of an number
 * @n: number taken by the function
 * Return: n * function(n - 1)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
