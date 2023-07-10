#include <stdio.h>
#include <stdlib.h>
/**
 * _null - a function to return null if two strings are empty
 * @st1: the fist part of the string
 * Return: st1 as NULL
 */
char *_null(char *st1)
{
	if (st1 == NULL)
	{
		return (NULL);
	}
	return (st1);
}
/**
 * str_concat - concatanate the content of two given strings
 * @s1: the first part of the string to concatanated
 * @s2: the second part of the string to be concatanated
 * Return: return the content of str if str != NULL
 */
char *str_concat(char *s1, char *s2)
{
	int ls1 = 0;
	int ls2 = 0;
	int cnt = 0;
	int rst = 0;
	int true_len;
	char *str;

	_null(s1);
	_null(s2);
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
