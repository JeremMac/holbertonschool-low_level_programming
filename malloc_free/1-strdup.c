#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - return a pointer to a new
 * allocated space in memory
 * @str: pointer to a given string
 * Return: a copy of the given string
 */
char *_strdup(char *str)
{
	int len = 0;
	int cnt = 0;
	char *str2;

	while (str[len] != '\0')
	{
		len++;
	}
	str2 = malloc(len * sizeof(char));
	if (str2 == 0)
	{
		return (NULL);
	}
	if (str == 0)
	{
		return (NULL);
	}
	while (cnt < len)
	{
		str2[cnt] += str[cnt];
		cnt++;
	}
	return (str2);
}
