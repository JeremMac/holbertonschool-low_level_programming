#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: a variable that contain the amont
 * of memory to be allocated
 * Return: the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *malptr = malloc(b);

	if (malptr == NULL)
	{
		exit(98);
	}
	return (malptr);
}
