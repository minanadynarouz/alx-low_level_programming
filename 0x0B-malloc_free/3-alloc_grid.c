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
	int row;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tableArr = calloc(height, sizeof(tableArr));

	if (tableArr == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		tableArr[row] = calloc(width, sizeof(int));

		if (tableArr[row] == NULL)
		{
			int i;

			for (i = 0; i < row; i++)
			{
				free(tableArr[i]);
			}
			free(tableArr);
			return (NULL);
		}
	}	
	return (tableArr);
}
