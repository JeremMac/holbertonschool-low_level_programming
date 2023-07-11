#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - return a pointer
 * to a 2 dimensional array
 * @width: the width of the array to be created
 * @height: the height of the array to be created
 * Return: pointer to a two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **ar = NULL;
	int cnth, i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (cnth = 0; cnth < height; cnth++)
	{
		ar[cnth] = malloc(sizeof(int) * width);
		if (ar[cnth] == NULL)
		{
			for (i = cnth; i >= 0; i--)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[cnth][j] = 0;
		}
	}
	return (ar);
}
