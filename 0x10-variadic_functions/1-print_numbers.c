#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print the listed numbers
 * @separator: used to seperate two numbers
 * @n: the total amount of number that is printed
 * @...: the numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		int nums = va_arg(args, int);

		printf("%d", nums);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
