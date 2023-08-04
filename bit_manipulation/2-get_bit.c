#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value
 * of a bit at a given index
 * @n: the number we want
 * the size of
 * @index: the index of the
 * number we will work with
 * Return: -1 if the size of
 * the index is ou of range
 * 0 if the conversition
 * results is zero
 * otherwise return 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
