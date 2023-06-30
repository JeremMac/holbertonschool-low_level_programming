#include "main.h"
/**
 * _strcmp - Compares pointers to two strings.
 * @s1: member of _strcmp
 * @s2: member of _strcmp
 * Return: the result of comparison between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
