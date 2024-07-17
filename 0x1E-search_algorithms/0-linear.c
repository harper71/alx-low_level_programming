#include "search_algos.h"
/**
 * linear_search - create a linear search algorithm
 * @array: pointer to an array of elements
 * @size: size of the array
 * @value: value to search for
 * Return: value of the element
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array ==  NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
			break;
		}
	}
	return (-1);
}
