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

	for (i = 1; i < argc; i++)
	{
		int x = atoi(argv[i]);

		result = result * x;
	}
	if (argc > 3 || argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
