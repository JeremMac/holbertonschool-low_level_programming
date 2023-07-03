#include "main.h"
/**
 * _print_rev_recursion - print the characters of a string in reverse
 * char -indicate that *s is a pointer to a char
 * @s: is a pointer to a given string of character
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s--);
	_putchar(*s);
}
