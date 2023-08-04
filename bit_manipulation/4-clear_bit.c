#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function
 * that sets the value of
 * a bit to zero at a
 * given index
 * @n: the value we need to
 * set to zero
 * @index: the index we
 * will work with
 * Return: 1 if successful
 * -1 if ther is a error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
