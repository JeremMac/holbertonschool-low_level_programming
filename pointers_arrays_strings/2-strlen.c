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

	while (s[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}
