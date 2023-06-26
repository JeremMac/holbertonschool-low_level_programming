#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * Return: return the number of characters found
 * char - type of *s
 * @s: member of _strlen
 */
int _strlen(char *s)
{
	int cnt;
	int a;

	cnt = 0;
	a = 0;

	while (s[cnt] != '\0')
	{
		s[cnt] = cnt + 1;
		a++;
	}
	return (a);
}
