#include "main.h"
/**
 * print_rev - prints a string in reverse
 * Return: Always 0 (Success)
 * char - type of *s
 * @s: member of print_rev
 */
void print_rev(char *s)
{
	int cnt;
	int a;

	cnt = 0;
	while (*s != '\0')
	{
		s++;
		cnt++;
	}
	for (a = cnt; a >= 0; a--)
	{
		_putchar(s[a] + '0');
	}
	_putchar('\n');
}
