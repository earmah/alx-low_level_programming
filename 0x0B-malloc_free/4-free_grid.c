#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2d grid 
 * @grid: 2d grid
 * @height: num of rows
 *
 * Return: void
 */

void free_grid(int ** grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
