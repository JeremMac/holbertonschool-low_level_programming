#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an int inside an array
 * @array: a given array that our program will
 * work on
 * @size: the size of the given array
 * @cmp: a pointer to the function used
 * to compare all elements of the array
 * Return: -1 if array or cmp are NULL
 * else will return an index of the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}

	return (-1);
}
