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

	if (width <= 0 || height <= 0)
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
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	if (grid == NULL || grid[0] == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
		return (NULL);
	}

	return (grid);
}
