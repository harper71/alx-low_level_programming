#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a two dimensional array
 * @width: the width of the matrix
 * @height: the height of the matrix
 * Return: matrix
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **matrix = (int **)malloc((width * height) * sizeof(int *));

	if (width <= 0 || height <= 0 || matrix == NULL)
	{
		return (NULL);
	}
	if (matrix != NULL)
	{
		for (i = 0; i < height; i++)
		{
			matrix[i] = (int *)malloc(width * sizeof(int));

			if (matrix[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(matrix[j]);
				}
			}

		}
	}
	return (matrix);
}
