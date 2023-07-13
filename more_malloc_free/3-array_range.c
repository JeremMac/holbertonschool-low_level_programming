#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - create an array of integers
 * @min: the minimum number of the array
 * @max: the highest number of the array
 * Return: a poiter to the created array
 */
int *array_range(int min, int max)
{
	int *ar = NULL;
	int counter = 0;

	if (min > max)
	{
		return (NULL);
	}

	ar = malloc((max - min) * sizeof(int) + 1);

	if (ar == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		ar[counter] = min;
		min++;
		counter++;
	}

	return (ar);
}
