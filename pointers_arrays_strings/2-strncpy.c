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
	int index = 0;
	int count = 0;

	while (src[index] != '\0')
	{
		len++;
		index++;
	}
	while (count > src[index] && count < n)
	{
		dest[count] = src[count];
	}
	index = len;
	while (index < n)
	{
		dest[index] = '\0';
	}
	return (dest);

}
