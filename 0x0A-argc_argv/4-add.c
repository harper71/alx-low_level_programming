#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the main function
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	char *flag;

	int result = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], &flag, 10);

			if (*flag)
			{
				printf("Error\n");
				return (1);
			}

			result += x;
		}
		printf("%d\n", result);
	}
	return (0);
}
