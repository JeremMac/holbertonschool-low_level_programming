#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars with a specific char
 * @size: given size of the array to be created
 * @c: given char to assign to the array
 * Return: the array created by my function
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int cnt = 0;

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (cnt < size)
	{
		ar[cnt] = c;
		cnt++;
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (ar);
}
