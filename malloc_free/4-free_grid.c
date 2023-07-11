#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free the memory used by grid
 * @grid: a pointer to the fuction we need
 * to free the memory of
 * @height: the given height of the array of the function.
 */
void free_grid(int **grid, int height)
{
	int cnt;

	for (cnt = 0; cnt < height; cnt++)
	{
		free(grid[cnt]);
	}
	free(grid);
}
