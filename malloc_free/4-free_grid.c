#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void free_grid(int **grid, int height)
{
	int cnt;
	for(cnt = 0; cnt < height; cnt++)
	{
		free(grid[cnt]);
	}
	free(grid);
}
