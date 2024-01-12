#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	int result = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], NULL, 10);

			result = result * x;
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
