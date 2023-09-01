#include "main.h"

/**
 * _memcpy - a function
 * that copies a memory area
 * @dest: an empty char pointer
 * where we want to copy the memory
 * @src: the memory area to be copied
 * @n: the byte size of the area we
 * want to copy
 * Return: returns a pointer to the copied
 * area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;
	char **str;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}

	str = &dest;
	return (*str);
}
