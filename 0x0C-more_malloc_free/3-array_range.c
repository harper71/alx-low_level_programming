#include "main.h"
#include <stdlib.h>
/**
 * array_range - allocates memory for an array of integers
 * @min: minimum array value
 * @max: maximum array values
 * Return: arr1
 */
int *array_range(int min, int max)
{
	int *arr1 = malloc((min - max + 1) * sizeof(int));
	int i;

	if (min > max)
	{
		return (NULL);
	}
	if (arr1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max; i++)
	{
		arr1[i] = min++;
	}
	return (arr1);
	free(arr1);
}
