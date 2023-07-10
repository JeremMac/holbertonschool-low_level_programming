#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatanate the content of two given strings
 * @s1: the first part of the string to concatanated
 * @s2: the second part of the string to be concatanated
 * Return: return the content of str if str != NULL
 */
char *str_concat(char *s1, char *s2)
{
	int ls1 = 0, ls2 = 0, cnt = 0, rst = 0, true_len;
	char *str;

	if (s1 == NULL)
	{
		s1 = NULL;
	}
	if (s2 == NULL)
	{
		s2 = NULL;
	}
	while (s1[ls1] != '\0')
	{
		ls1++;
	}
	while (s2[ls2] != '\0')
	{
		ls2++;
	}
	true_len = ls1 + ls2;
	str = malloc(true_len * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (cnt < ls1)
	{
		str[cnt] += s1[cnt];
		cnt++;
	}
	while (cnt < true_len)
	{
		str[cnt] += s2[rst];
		cnt++;
		rst++;
	}
	return (str);
}
