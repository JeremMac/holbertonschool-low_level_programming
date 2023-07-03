#include "main.h"
/**
 * _strlen_recursion - return the lenght of a given string
 * Return: the lenght of the string in numbers
 * char - declaration of  a string pointer
 * int - type of the number returned by _strlen_recursion
 * @s: pointer to the first letter of the given string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != 0)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
