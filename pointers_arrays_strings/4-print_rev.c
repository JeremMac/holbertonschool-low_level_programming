#include "main.h"
/**
 * print_rev - prints a string in reverse
 * Return: Always 0 (Success)
 * char - type of *s
 * @s: member of print_rev
 */
void print_rev(char *s)
{
	char cnt;

	cnt = '\0';
	for(*s == '\0'; *s >= 0; s--)
	{
		_putchar(s[cnt]);
	}
}
