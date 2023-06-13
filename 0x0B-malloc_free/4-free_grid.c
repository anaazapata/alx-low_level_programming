#include "main.h"
/**
 * free_grid - frees a 2D grid previously created
 * by alloc_grid
 * @grid: 2D awway
 * @height: height of array
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
