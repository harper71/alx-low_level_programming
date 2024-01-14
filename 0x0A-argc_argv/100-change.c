#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of input gotten from the user
 * @argv: an array of strings
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	unsigned int i;

	int cents[] = {25, 10, 5, 2, 1};

	int total, count;

	char *p;

	if (argc <= 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	count = 0;
	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
