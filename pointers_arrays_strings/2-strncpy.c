#include "main.h"
/**
 * _strncpy - copy the content of a strinf
 * Return: the copied string
 * char _ type of *dest and *src
 * int - type of n
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: member of _strncpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (src[n] == '\0')
	{
		dest[n] = src[n];
		n++;
		len++;
	}
	return (dest);

}
