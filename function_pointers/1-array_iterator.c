#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that execute a function
 * given as a parameter on each element
 * of an array
 * @size: the size of the manipulated array
 * @action: a pointer to the function we
 * use to manipulate the array
 * @array: a pointer to a given array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	if (array == NULL)
	{
		array = NULL;
	}

	while (index < size)
	{
		(action)(array[index]);
		index++;
	}
}
