#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * char - indicate that *s is a character
 * @s: points to a string of characters
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
