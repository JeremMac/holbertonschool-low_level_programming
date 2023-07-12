#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatanate two strings
 * @s1: the fist string to concatanate
 * @s2: the second string to concatanate
 * @n: the int value of the memory space assignement
 * Return: a pointer to the concatanated string
 * or NULL if mallock fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length, idx;
	char *chn;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		length++;
	}
	chn = malloc(length * sizeof(char) + 1);

	if (chn == NULL)
	{
		return (NULL);
	}

	length = 0;

	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		chn[length++] = s1[idx];
	}
	for (idx = 0; s2[idx] != '\0' && idx < n; idx++)
	{
		chn[length++] = s2[idx];
	}
	chn[length] = '\0';
	return (chn);
}
