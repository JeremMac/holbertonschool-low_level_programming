#include "main.h"
/**
 *_strcpy - copy src string into dest and return the value
 * Return: return value od dest
 * char - type *dest and *src
 * @dest: pointer to dest
 * @src: pointer to src
 */
char *_strcpy(char *dest, char *src)
{
	int chn = 0;

	while (src[chn])
	{
		dest[chn] = src[chn];
		chn++;
	}
	return (dest);
}
