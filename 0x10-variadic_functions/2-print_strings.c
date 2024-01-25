#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print the listed numbers
 * @separator: used to seperate two numbers
 * @n: the total amount of number that is printed
 * @...: the numbers to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		const char *nums = va_arg(args, const char *);

		if (nums == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", nums);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
