#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - to sum a set of number
 * @n: total number of numbers needed to sum
 * @...: all numbers being sumed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum = sum + num;
	}
	va_end(args);
	return (sum);
}
