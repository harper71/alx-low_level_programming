#include "search_algos.h"
/**
 * binary_search - create a linear search algorithm
 * @array: pointer to an array of elements
 * @size: size of the array
 * @value: value to search for
 * Return: -1 or the value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;

	size_t l = 0, r, middle;

	r = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (l < r)
	{
		middle = (l + r) / 2;

		if (value == array[middle])
		{
			return (middle);
		}
		else if (value < array[middle])
		{
			r = middle - 1;
		}
		else
		{
			l = middle + 1;
		}
	}

	return (-1);
}