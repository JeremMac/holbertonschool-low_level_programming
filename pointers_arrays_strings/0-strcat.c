#include "main.h"
/**
 * _strcat - concatanate a string at the end of another string
 * Return: return value of dest
 * char - type of *dest end *src
 * @dest: pointer to dest
 * @src: pointer to src
 */
char *_strcat(char *dest, char *src)
{
	int lendest = 0;
	int lensrc = 0;

	while (dest[lendest++] != '\0')
	{
		lensrc++;
	}

	while (src[lendest] == '\0')
	{

		dest[lensrc] = src[lendest];
	}
	return (dest);
}
