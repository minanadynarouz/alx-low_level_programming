#include "main.h"

/**
 * alloc_grid - function for doubl pointer to 2 decimal ints
 * @width: width of the grid
 * @height: height of the grid
 * Return: double pointer
 */

int **alloc_grid(int width, int height)
{
	int **tableArr;
	int row, col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tableArr = malloc(sizeof(int *) * width);

	if (tableArr == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < width; row++)
	{
		tableArr[row] = malloc(sizeof(int) * height);

		if (tableArr[row] == NULL)
		{
			for (int i = 0; i < row; i++)
			{
				free(tableArr[i]);
			}
			free(tableArr);
			return (NULL);
		}

		for (col = 0; col < height; col++)
		{
			tableArr[row][col] = 0;
		}
	}

	return tableArr;
}
