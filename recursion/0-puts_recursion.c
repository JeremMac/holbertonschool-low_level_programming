#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * char - indicate that *s is a character
 * @s: points to a strign of characters
 */
void _puts_recursion(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	_putchar(s[len]);
	len++;
	_put_recursion(s[len]);
}
