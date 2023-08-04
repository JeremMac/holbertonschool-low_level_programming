#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a funtction
 * that convert a binary
 * number to an unsigned int
 * @b: a pointer to the string
 * containing the numbers
 * Return: return the converted
 * number
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, index = 0;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len++;
	}

	for (index = 0; index < len; index++)
	{
		if (b[index] == '0' || b[index] == '1')
		{
			result = (result << 1) | (b[index] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
