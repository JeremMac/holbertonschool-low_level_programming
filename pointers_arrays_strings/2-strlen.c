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

	cnt = 0;

	while (s[cnt] != '\0')
	{
		s[cnt] = s[cnt] + 1;
		cnt++;
	}
	return (cnt);
}
