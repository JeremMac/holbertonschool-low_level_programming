#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that
 * sets the value of a bit
 * to 1 at a given index
 * @n: a pointer to the
 * value we need to set
 * @index: the given index
 * we will work with
 * Return: -1 if there is
 * an error or 1 if
 * the function succeded
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n ^= (1 << index);

	return (1);
}
