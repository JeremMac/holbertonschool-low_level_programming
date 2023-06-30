#include "main.h"
/**
 * string_toupper - changes lowercases letters to upper case
 * Return: returns value of str
 * @str: member of string_toupper
 * char - type of *str
 */
char *string_toupper(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[len] >= 'a' && str[len] <= 'z')
		{
			str[len] -= 32;
		}
		len++;
	}
	return (str);
}
