#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - Prints anything based on the provided format.
 * @format: takes a c, s, i, f as formarts to be printed
 * @...: takes a list of caracters
 * Returns: nothing.
 */
void print_all(const char * const format, ...)
{
	int i = 0;

	char *str, *sep = "";

	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
