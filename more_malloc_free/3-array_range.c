#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
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
