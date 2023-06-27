#include "main.h"
/**
 * print_rev - prints a string in reverse
 * Return: Always 0 (Success)
 * char - type of *s
 * @s: member of print_rev
 */
void print_rev(char *s)
{
	while (*s !='\0')
	{
		s++;
	}
	while (*s >= 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
