#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the function alloc_grid
 * @grid: points to the function needed to be free
 * @height: height of the 2d array
 * Return: 0 always
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
