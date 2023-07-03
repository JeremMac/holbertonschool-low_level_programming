#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * char - indicate that *s is a character
 * @s: points to a strign of characters
 */
void _puts_recursion(char *s)
{
	int cnt = 0;

	if(s[cnt] == '\0')
	{
		return;
	}

	_putchar(s[cnt]);
	_put_recursion(s[cnt] + 1);
}
