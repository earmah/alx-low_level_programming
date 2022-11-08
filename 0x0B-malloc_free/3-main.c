#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_grid - prints a grid of ints
 * @grid: address of 2D grid
 * @width: num of cols
 * @height: num of rows
 *
 * Return: void
 */

void print_grid(int **grid, int width, int height)
{
	int w, h = 0;

	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	int **grid;

	grid = alloc_grid(0, 0);
	if (grid == NULL)
	{
		printf("failed\n");
		return (1);
	}
	print_grid(grid, 0, 0);
	printf("\n");
	/*grid[0][3] = 98;*/
	/*grid[3][4] = 402;*/
	/*print_grid(grid, 48, NULL);*/

	return (0);
}
