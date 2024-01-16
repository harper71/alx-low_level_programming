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
	int i;

	int *matrix = (int *)malloc((width * height) * sizeof(int));

	int **grid = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0 || grid == NULL)
	{
		return (NULL);
	}
	if (matrix == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = &matrix[i * width];
	}
	free(matrix);
	return (grid);
}
