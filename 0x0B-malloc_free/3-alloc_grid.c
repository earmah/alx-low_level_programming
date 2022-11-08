#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - creates a 2D array of ints
 * @width: num of cols
 * @height: num of rows
 *
 * Return: pointer int to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * (height));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int *) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
