#include <stdio.h>
#include "main.h"

/**
 * _memset - a funtion that
 * fills a pointed memory with a n
 * byte
 * @s: a pointer to the memory adress
 * we want to fill
 * @b: a character we will use to fill
 * the memory
 * @n: the byte size of memory we will
 * fill
 * Return: a pointer to the first
 * byte of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char **str;
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	str = &s;
	return (*str);
}
