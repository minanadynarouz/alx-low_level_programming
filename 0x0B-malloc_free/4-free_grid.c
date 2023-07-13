#include "main.h"

/**
 * free_grid - function free double pointer grid
 * @grid: the grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	grid = NULL;
}
